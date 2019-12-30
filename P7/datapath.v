`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:50 11/20/2019 
// Design Name: 
// Module Name:    datapath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module datapath(
    input [2:0] Forward_RS_D_src,
    input [2:0] Forward_RT_D_src,
    input [1:0] Forward_RS_E_src,
    input [1:0] Forward_RT_E_src,
    input Forward_RT_M_src,
    input ClearE,
    input PauseD,
    input PauseF,
    input Clk,
    input Reset,
	 input [31:0] IO_Din,
	 input [7:2] HWInt,
    output [31:0] IRD_out,
	 output Busy,
	 output Start,
	 output [31:2] IO_Addr,
	 output [31:0] IO_Dout,
	 output IO_WE,
	 output [31:0] Addr_all
    );
	
	`include "macros.v"
	
    wire [31:0] IRD,PC4D,IRE,PC4E,RSE,RTE,EXTE,IRM,PC4M,RTM,AOM,RTW,IRW,PC4W,AOW,DRW
    ,NPC,RS_D_F,RT_D_F,W_RF_WD_OUT;
    wire [4:0] W_RF_A3_OUT;
    wire [2:0] PCsrc;
    wire Branch,RegWrite,BD_M,BD_D,BD_E,EXL_set;
    wire [31:0] MF_EPC_OUT,cp0_wd,cp0_rd,EPC;
    wire [6:2] ExcCode_cp0,ExcCode_D,ExcCode_E,ExcCode_M;

    assign MF_EPC_OUT = (PCsrc == `npc_eret && IRM[31:26] == 6'b010000 && IRM[25:21] == 5'b00100 && {1,IRM[15:11]} == `cp0_epc) ? cp0_wd : EPC;
    assign IRD_out =IRD;
	 assign Addr_all = PC4M - 4;
	 
	 Exception exec_unit(
    .Clk(Clk),
	 .Reset(Reset),
	 .BD_in(BD_M),
	 .IRM(IRM),
	 .PC4M(PC4M),
	 .WD_M(cp0_wd),
	 .IRW(IRW),
	 .ExcCode_M(ExcCode_cp0),
	 .HWInt(HWInt),
	 .EPC_out(EPC),
	 .CP0_out(cp0_rd),
	 .EXL_out(EXL_set)
	 );
	 
    F_unit f_unit(
    .NPC(NPC),
    .PCsrc(PCsrc),
    .Branch(Branch),
    .Clk(Clk),
    .Reset(Reset),
    .PauseF(PauseF),
    .PauseD(PauseD),
    .RS_D_OUT(RS_D_F),
	 .RT_D_OUT(RT_D_F),
	 .EPC_F(MF_EPC_OUT),
	 .EXC_F(EXL_set),
    .IRD(IRD),
    .PC4D(PC4D),
	 .ExcCode_D(ExcCode_D),
	 .BD_D(BD_D)
	 );

    D_unit d_unit(
    .IRD(IRD),
    .PC4D(PC4D),
    .PC4W(PC4W),
    .Clk(Clk),
    .Reset(Reset),
    .ClearE(ClearE),
    .WE(RegWrite),
    .Forward_RS_D_src(Forward_RS_D_src),
    .Forward_RT_D_src(Forward_RT_D_src),
    .PC4_forw_E(PC4E),
    .PC4_forw_M(PC4M),
    .AO(AOM),
    .W_RF_WD_OUT(W_RF_WD_OUT),
    .W_RF_A3_OUT(W_RF_A3_OUT),
	 .ExcCode_D(ExcCode_D),
	 .EXC_D(EXL_set),
	 .BD_D(BD_D),
    .Branch(Branch),
    .NPC(NPC),
    .PCsrc(PCsrc),
    .RS_D_F(RS_D_F),
	 .RT_D_F(RT_D_F),
    .IRE(IRE),
    .PC4E(PC4E),
    .RSE(RSE),
    .RTE(RTE),
    .EXTE(EXTE),
	 .ExcCode_E(ExcCode_E),
	 .BD_E(BD_E));

    E_unit e_unit(
    .PC4E(PC4E),
    .IRE(IRE),
    .RSE(RSE),
    .RTE(RTE),
    .EXTE(EXTE),
    .Clk(Clk),
    .Reset(Reset),
    .Forward_RS_E_src(Forward_RS_E_src),
    .Forward_RT_E_src(Forward_RT_E_src),
    .Shift(IRE[10:6]),
    .PC4_forw_M(PC4M),
    .AO(AOM),
    .W_RF_WD_OUT(W_RF_WD_OUT),
	 .ExcCode_E(ExcCode_E),
	 .BD_E(BD_E),
	 .EXC_E(EXL_set),
    .IRM(IRM),
    .PC4M(PC4M),
    .AOM(AOM),
    .RTM(RTM),
	 .ExcCode_M(ExcCode_M),
	 .BD_M(BD_M),
	 .Busy(Busy),
	 .Start(Start));

    M_unit m_unit(
    .AOM(AOM),
    .IRM(IRM),
    .PC4M(PC4M),
    .RTM(RTM),
    .Clk(Clk),
    .Reset(Reset),
    .Forward_RT_M_src(Forward_RT_M_src),
    .W_RF_WD_OUT(W_RF_WD_OUT),
	 .IO_Din(IO_Din),
	 .cp0_read(cp0_rd),
	 .ExcCode_M(ExcCode_M),
	 .EXC_M(EXL_set),
    .DRW(DRW),
    .PC4W(PC4W),
    .AOW(AOW),
    .IRW(IRW),
	 .cp0_write(cp0_wd),
	 .IO_Dout(IO_Dout),
	 .IO_Addr(IO_Addr),
	 .IO_WE_M(IO_WE),
	 .ExcCode_cp0(ExcCode_cp0)
	 );
     //W单元实质为组合逻辑单元，写入操作在下一时钟上升沿完成，同SW
    W_unit w_unit(   
    .PC4W(PC4W),
    .DRW(DRW),
    .AOW(AOW),
    .IRW(IRW),
    .W_RF_WD_OUT(W_RF_WD_OUT),
    .W_RF_A3_OUT(W_RF_A3_OUT),
    .RegWrite(RegWrite)
	 );

endmodule


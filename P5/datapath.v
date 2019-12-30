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
    output [31:0] IRD_out
    );
	
	`include "macros.v"
	
    wire [31:0] IRD,PC4D,IRE,PC4E,RSE,RTE,EXTE,IRM,PC4M,RTM,AOM,IRW,PC4W,AOW,DRW
    ,NPC,RS_D_F,W_RF_WD_OUT;
    wire [4:0] W_RF_A3_OUT;
    wire [1:0] PCsrc;
    wire Branch,RegWrite;
	 
    assign IRD_out =IRD;
	
    F_unit f_unit(
    .NPC(NPC),
    .PCsrc(PCsrc),
    .Branch(Branch),
    .Clk(Clk),
    .Reset(Reset),
    .PauseF(PauseF),
    .PauseD(PauseD),
    .RS_D_OUT(RS_D_F),
    .IRD(IRD),
    .PC4D(PC4D));

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
    .Branch(Branch),
    .NPC(NPC),
    .PCsrc(PCsrc),
    .RS_D_F(RS_D_F),
    .IRE(IRE),
    .PC4E(PC4E),
    .RSE(RSE),
    .RTE(RTE),
    .EXTE(EXTE));

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
    .IRM(IRM),
    .PC4M(PC4M),
    .AOM(AOM),
    .RTM(RTM));

    M_unit m_unit(
    .AOM(AOM),
    .IRM(IRM),
    .PC4M(PC4M),
    .RTM(RTM),
    .Clk(Clk),
    .Reset(Reset),
    .Forward_RT_M_src(Forward_RT_M_src),
    .W_RF_WD_OUT(W_RF_WD_OUT),
    .DRW(DRW),
    .PC4W(PC4W),
    .AOW(AOW),
    .IRW(IRW));
     //W单元实质为组合逻辑单元，写入操作在下一时钟上升沿完成，同SW
    W_unit w_unit(   
    .PC4W(PC4W),
    .DRW(DRW),
    .AOW(AOW),
    .IRW(IRW),
    .W_RF_WD_OUT(W_RF_WD_OUT),
    .W_RF_A3_OUT(W_RF_A3_OUT),
    .RegWrite(RegWrite));

endmodule

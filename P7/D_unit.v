`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:38 11/19/2019 
// Design Name: 
// Module Name:    D_unit 
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
module D_unit(
    input [31:0] IRD,
    input [31:0] PC4D,
	 input [31:0] PC4W,
    input Clk,
    input Reset,
    input ClearE,
	 input WE,
	 input [2:0] Forward_RS_D_src,
	 input [2:0] Forward_RT_D_src,
	 input [31:0] PC4_forw_E,
	 input [31:0] PC4_forw_M,
	 input [31:0] AO,
    input [31:0] W_RF_WD_OUT,
	 input [4:0] W_RF_A3_OUT,
	 input [6:2] ExcCode_D,
	 input EXC_D,
	 input BD_D,
    output Branch,
    output [31:0] NPC,
    output [2:0] PCsrc,
    output [31:0] RS_D_F,
	 output [31:0] RT_D_F,
    output reg [31:0] IRE,
    output reg [31:0] PC4E,
    output reg [31:0] RSE,
    output reg [31:0] RTE,
    output reg [31:0] EXTE,
	 output reg [6:2] ExcCode_E,
	 output reg BD_E
    );
	 
	 `include "macros.v"
	 
	 wire [31:0] RS_D,RT_D,RS_D_OUT,RT_D_OUT,out;
	 wire [1:0] extop;
	 wire NPCsrc;
	 wire [6:2] ExcCode_in;

	 Crtl crtl_d(
	 .Instr(IRD),
	 .EXTop(extop),
	 .PCsrc(PCsrc),
	 .NPCsrc(NPCsrc),
	 .RI_exc(ri));

	 cmp_D cmp_d(
	 .RD1(RS_D_OUT),
	 .RD2(RT_D_OUT),
	 .Instr(IRD),
	 .Branch(Branch));
	 
	 npc_D npc_d(
	 .NPCsrc(NPCsrc),
	 .PC4(PC4D),
	 .I26(IRD[25:0]),
	 .NPC(NPC));
	 
	 rf_D rf_d(
	 .A1(IRD[25:21]),
	 .A2(IRD[20:16]),
	 .A3(W_RF_A3_OUT),
	 .WD(W_RF_WD_OUT),
	 .En(WE),
	 .Clk(Clk),
	 .Reset(Reset),
	 .RD1(RS_D),
	 .RD2(RT_D),
	 .InsAddr(PC4W-4));
	 
	 Forward_mux_D forward_mux_d(
    .PC4_E(PC4_forw_E),
    .AO(AO),
    .PC4_M(PC4_forw_M),
    .WD_OUT(W_RF_WD_OUT),
    .RS_D(RS_D),
    .RT_D(RT_D),
    .forward_src_rs(Forward_RS_D_src),
    .forward_src_rt(Forward_RT_D_src),
    .RS_D_OUT(RS_D_OUT),
    .RT_D_OUT(RT_D_OUT));

	 ext_D ext_d(
	 .In(IRD[15:0]),
	 .EXTop(extop),
	 .Out(out));

	 assign RS_D_F = RS_D_OUT;
	 assign RT_D_F = RT_D_OUT;//从D级到F的读取jr/jalr的寄存器地址

	 assign ExcCode_in = (ri) ? `ExcCode_ri : ExcCode_D;
	 
	 initial begin
	 	IRE = 0;
	 	PC4E = 0;
	 	RSE = 0;
	 	RTE = 0;
	 	EXTE = 0;
		ExcCode_E = 5'b11111;
		BD_E = 0;
	 end

	 always @(posedge Clk) begin
	 	if(Reset || EXC_D) begin
	 		IRE <= 0;
	 		PC4E <= 0;
	 		RSE <= 0;
	 		RTE <= 0;
	 		EXTE <= 0;
	 		ExcCode_E <= 5'b11111;
	 		BD_E <= 0;
	 	end

	 	else if(ClearE) begin
	 		IRE <= 0;
	 		PC4E <= PC4D;     //清零后的气泡指令NPC不能置零，防止中断错误
	 		RSE <= 0;
	 		RTE <= 0;
	 		EXTE <= 0;
	 		ExcCode_E <= 5'b11111;   
	 		BD_E <= 0;
	 	end

	 	else begin
	 		IRE <= IRD;
	 		PC4E <= PC4D;
	 		RSE <= RS_D_OUT;
	 		RTE <= RT_D_OUT;
	 		EXTE <= out;
	 		ExcCode_E <= ExcCode_in;
	 		BD_E <= BD_D;
	 	end
	 end
endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:33:58 11/18/2019 
// Design Name: 
// Module Name:    F_unit 
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
module F_unit(
    input [31:0] NPC,  //后继操作对PC值的更新，branch和j
    input [2:0] PCsrc,
    input Branch,
    input Clk,
    input Reset,
    input PauseF,
    input PauseD,
	 input [31:0] EPC_F,
	 input EXC_F,
	 input [31:0] RS_D_OUT,
	 input [31:0] RT_D_OUT,//从D级读出的寄存器值
    output reg [31:0] IRD,
    output reg [31:0] PC4D,
	 output reg [6:2] ExcCode_D,
	 output reg BD_D
    );
	 
	`include "macros.v"
	wire [6:2] ExcCode_F;
	wire [31:0] PCF_4,PCF,INSTR;
	wire [31:0] pcf_offset = PCF - 32'h00003000;
	wire is_eret_d;

	assign is_eret_d = (PCsrc == `npc_eret) ? 1:0;
	assign PCF_4 = PCF + 4;

	assign ExcCode_F = (PCF[1:0] != 2'b00 ||
						$unsigned(PCF) > 32'h00004fff ||
						$unsigned(PCF) < 32'h00003000) ? `ExcCode_adel : 5'b11111;
						
	
	initial begin
		IRD = 32'b0;
		PC4D = 32'b0;
		ExcCode_D = 5'b11111;
		BD_D = 0;
	end

	pc_F pc_f(
		.add4(PCF_4),
		.Clk(Clk),
		.Reset(Reset),
		.NPC(NPC),
		.j_r1(RS_D_OUT),
		.j_r2(RT_D_OUT),
		.epc(EPC_F),
		.exp_in(EXC_F),
		.PCsrc(PCsrc),
		.Branch(Branch),
		.En(~PauseF || EXC_F),
		.PC(PCF)
		);

	im_F im_f(
		.addr(pcf_offset),
		.instr(INSTR));

	always @(posedge Clk) begin
		if(Reset || EXC_F) begin
			IRD <= 32'b0;
			PC4D <= 32'b0;
			ExcCode_D <= 5'b11111;
			BD_D <= 0;
		end
		else begin
			if(~PauseD && is_eret_d) begin
				IRD <= 32'b0;
				PC4D <= EPC_F + 4;
				ExcCode_D <= 5'b11111;
				BD_D <= 0;
			end
			else if(~PauseD) begin
				IRD <= (ExcCode_F == `ExcCode_adel) ? `debug_adel_instr : INSTR;
				PC4D <= PCF_4;
				ExcCode_D <= ExcCode_F;
				BD_D <= Branch;
			end
		end
	end

	
endmodule
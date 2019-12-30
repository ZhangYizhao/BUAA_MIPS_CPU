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
    input [1:0] PCsrc,
    input Branch,
    input Clk,
    input Reset,
    input PauseF,
    input PauseD,
	 input [31:0] RS_D_OUT, //从D级读出的寄存器值
    output reg [31:0] IRD,
    output reg [31:0] PC4D
    );
	 
	`include "macros.v"
	 
	wire [31:0] PCF_4,PCF,INSTR;
	
	assign PCF_4 = PCF + 4;

	
	initial begin
		IRD = 32'b0;
		PC4D = 32'b0;
	end

	pc_F pc_f(
		.add4(PCF_4),
		.Clk(Clk),
		.Reset(Reset),
		.NPC(NPC),
		.j_r(RS_D_OUT),
		.PCsrc(PCsrc),
		.Branch(Branch),
		.En(~PauseF),
		.PC(PCF)
		);

	im_F im_f(
		.addr(PCF[11:2]),
		.instr(INSTR));

	always @(posedge Clk) begin
		if(Reset) begin
			IRD <= 32'b0;
			PC4D = 32'B0;
		end
		else begin
			if(~PauseD) begin
				IRD <= INSTR;
				PC4D <= PCF_4;
			end
		end
	end
endmodule
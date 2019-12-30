`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:17 12/25/2019 
// Design Name: 
// Module Name:    exc_E 
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
module exc_E(
	input [31:0] Instr,
	input ov,
	input [6:2] ExcCode_E,
	output [6:2] ExcCode_in
	);

	`include "macros.v"
	wire [31:0] instr;
	wire alu_ov;

	assign instr = Instr;

	assign alu_ov = (`add|`sub|`addi) ? 1:0;
	assign ExcCode_in = (ov && (`lw|`lb|`lbu|`lh|`lhu)) ? `ExcCode_adel :
	      				(ov && (`sw|`sh|`sb)) ? `ExcCode_ades :
	      				(ov && alu_ov) ? `ExcCode_ov : ExcCode_E;

endmodule 

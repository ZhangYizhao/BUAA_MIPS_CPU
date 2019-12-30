`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:09:18 12/25/2019 
// Design Name: 
// Module Name:    exc_M 
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
module exc_M(
	input [31:0] Instr,
	input [31:0] AOM,
	input [6:2] ExcCode_M,
	output [6:2] ExcCode_in
	);

	`include "macros.v"
	wire [31:0] instr;

	wire timer_addr,over_addr;
	assign instr = Instr;

	assign timer_addr = (($unsigned(AOM) >= 32'h00007f00 && $unsigned(AOM) <= 32'h00007f0b)||
				    ($unsigned(AOM) >= 32'h00007f10 && $unsigned(AOM) <= 32'h00007f1b)) ? 1 : 0;

	assign over_addr =  ($unsigned(AOM) < 32'h0000_3000 || timer_addr) ? 0 : 1;


	assign ExcCode_in = ((`lw && AOM[1:0] != 2'b00) ||
						 ((`lh|`lhu) && AOM[0] != 0) ||
						 ((`lh|`lhu|`lb|`lbu) && timer_addr) ||
						 ((`lw|`lh|`lhu|`lb|`lbu) && over_addr)) ? `ExcCode_adel :
						((`sw && AOM[1:0] != 2'b00) ||
						 (`sh && AOM[0] != 0) ||
						 ((`sh|`sb) && timer_addr) ||
						 ((`sw|`sh|`sb) && (AOM == `timer1_count || AOM == `timer2_count || over_addr))) ? `ExcCode_ades : ExcCode_M;
endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:18:24 11/18/2019 
// Design Name: 
// Module Name:    cmp_D 
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
module cmp_D(
    input [31:0] RD1,
    input [31:0] RD2,
    input [31:0] Instr,
    output Branch
    );
	 
	 `include "macros.v"
	 wire [31:0] instr;
	 assign instr = Instr;//宏定义使用
	 
	 assign Branch = (`beq && (RD1==RD2)) ? 1:
				     (`bgez && ($signed(RD1)>=0)) ? 1:
				     (`bgtz && ($signed(RD1)>0)) ? 1:
				     (`blez && ($signed(RD1)<=0)) ? 1:
				     (`bltz && ($signed(RD1)<0)) ? 1:
				     (`bne && (RD1!=RD2)) ?  1:0;


endmodule

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
    input [5:0] OPcode,
    output Branch
    );
	 
	 `include "macros.v"
	 
	 assign Branch = ((OPcode== `beq && RD1==RD2)) ? 1:0;


endmodule

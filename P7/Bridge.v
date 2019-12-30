`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:04 12/14/2019 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    input [31:2] PrAddr,
    input [31:0] PrWD,
    input PrWE,
    output [31:0] PrRD,
    output [31:2] Timer_Addr,
    output [31:0] Timer_WD,
    input [31:0] Timer1_RD,
    input [31:0] Timer2_RD,
    output Timer1_WE,
    output Timer2_WE
    );

	`include "macros.v"

	
	wire [7:4] timer_src;
	assign timer_src = PrAddr[7:4];
	assign Timer_Addr = PrAddr;

	assign Timer1_WE = (PrAddr[31:8] == 24'h00007f && timer_src  == 0 && PrWE) ? 1:0;
	assign Timer2_WE = (PrAddr[31:8] == 24'h00007f && timer_src  == 1 && PrWE) ? 1:0;

	assign Timer_WD = PrWD;

	assign PrRD = (timer_src==0) ? Timer1_RD :
				     (timer_src==1) ? Timer2_RD : Timer1_RD;
	
 
endmodule

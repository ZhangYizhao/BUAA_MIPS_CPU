`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:03:14 11/29/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	
	`include "macros.v" 
	wire PauseD, PauseF, ClearE;
	wire [2:0] Forward_RS_D_src, Forward_RT_D_src;
	wire [1:0] Forward_RS_E_src, Forward_RT_E_src;
	wire Forward_RT_M_src,Busy,Start,lwpl_src,lhs_clr;
	wire [31:0] Instr;
	
	datapath dp_unit ( 
    .Forward_RS_D_src(Forward_RS_D_src),
    .Forward_RT_D_src(Forward_RT_D_src),
    .Forward_RS_E_src(Forward_RS_E_src),
    .Forward_RT_E_src(Forward_RT_E_src),
    .Forward_RT_M_src(Forward_RT_M_src),
    .ClearE(ClearE),
    .PauseF(PauseF),
    .PauseD(PauseD),
    .Clk(clk), 
    .Reset(reset), 
    .IRD_out(Instr),
	 .Busy(Busy),
	 .Start(Start),
	 .LWPL_src(lwpl_src),
	 .LHS_clr(lhs_clr)
    );
	 
	Hazard_unit hz_unit (
    .IRD(Instr), 
    .Clk(clk), 
    .Reset(reset),
	 .LWPL_src(lwpl_src),
	 .LHS_clr(lhs_clr),
	 .Busy(Busy),
	 .Start(Start),
    .PauseD(PauseD),
    .PauseF(PauseF),
    .ClearE(ClearE),
    .Forward_RS_D_src(Forward_RS_D_src),
    .Forward_RT_D_src(Forward_RT_D_src),
    .Forward_RS_E_src(Forward_RS_E_src),
    .Forward_RT_E_src(Forward_RT_E_src),
    .Forward_RT_M_src(Forward_RT_M_src)
    );


endmodule

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
module cpu(
    input clk,
    input reset,
	 input [31:0] PrRD,
	 input [7:2] HWInt,
	 output [31:2] PrAddr,
	 output PrWE,
	 output [31:0] PrWD,
	 output [31:0] Addr_all
    );
	
	`include "macros.v" 
	wire PauseD, PauseF, ClearE;
	wire [2:0] Forward_RS_D_src, Forward_RT_D_src;
	wire [1:0] Forward_RS_E_src, Forward_RT_E_src;
	wire Forward_RT_M_src;
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
	 .HWInt(HWInt),
	 .IO_WE(PrWE),
	 .IO_Din(PrRD),
	 .IO_Dout(PrWD),
	 .IO_Addr(PrAddr),
	 .Addr_all(Addr_all)
    );
	 
	Hazard_unit hz_unit (
    .IRD(Instr), 
    .Clk(clk), 
    .Reset(reset),
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

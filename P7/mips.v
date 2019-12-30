`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:07 12/19/2019 
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
    input reset,
	 input interrupt,
	 output [31:0] addr
    );
	
	
	`include "macros.v"
	wire IRQ1,IRQ2,pr_we,timer1_we,timer2_we;
	wire [31:0] pr_rd,pr_wd,timer_wd,timer1_rd,timer2_rd;
	wire [31:2] pr_addr,timer_addr;
	wire [7:2] hwint;

	assign hwint = {3'b000,interrupt,IRQ2,IRQ1};
	
	cpu cpu(
		.clk(clk),
		.reset(reset),
		.PrRD(pr_rd),
		.HWInt(hwint),
		.PrAddr(pr_addr),
		.PrWE(pr_we),
		.PrWD(pr_wd),
		.Addr_all(addr)
		);

	Bridge bridge(
		.PrAddr(pr_addr),
		.PrWD(pr_wd),
		.PrWE(pr_we),
		.PrRD(pr_rd),
		.Timer_Addr(timer_addr),
		.Timer_WD(timer_wd),
		.Timer1_RD(timer1_rd),
		.Timer2_RD(timer2_rd),
		.Timer1_WE(timer1_we),
		.Timer2_WE(timer2_we)
		);

	TC Timer1(
		.clk(clk),
		.reset(reset),
		.Addr(timer_addr),
		.WE(timer1_we),
		.Din(timer_wd),
		.Dout(timer1_rd),
		.IRQ(IRQ1)
		);

	TC Timer2(
		.clk(clk),
		.reset(reset),
		.Addr(timer_addr),
		.WE(timer2_we),
		.Din(timer_wd),
		.Dout(timer2_rd),
		.IRQ(IRQ2)
		);

endmodule

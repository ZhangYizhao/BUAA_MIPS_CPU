`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:42:27 11/21/2019
// Design Name:   F_unit
// Module Name:   E:/CO_cpu/P4/f_test.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: F_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module f_test;

	// Inputs
	reg [31:0] NPC;
	reg [1:0] PCsrc;
	reg Branch;
	reg Clk;
	reg Reset;
	reg PauseF;
	reg PauseD;
	reg [31:0] RS_D_OUT;

	// Outputs
	wire [31:0] IRD;
	wire [31:0] PC4D;

	// Instantiate the Unit Under Test (UUT)
	F_unit uut (
		.NPC(NPC), 
		.PCsrc(PCsrc), 
		.Branch(Branch), 
		.Clk(Clk), 
		.Reset(Reset), 
		.PauseF(PauseF), 
		.PauseD(PauseD), 
		.RS_D_OUT(RS_D_OUT), 
		.IRD(IRD), 
		.PC4D(PC4D)
	);

	initial begin
		// Initialize Inputs
		NPC = 0;
		PCsrc = 0;
		Branch = 0;
		Clk = 0;
		Reset = 0;
		PauseF = 0;
		PauseD = 0;
		RS_D_OUT = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #10 Clk = ~ Clk;
      
endmodule


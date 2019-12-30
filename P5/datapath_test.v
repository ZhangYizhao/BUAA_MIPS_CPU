`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:21:13 11/21/2019
// Design Name:   datapath
// Module Name:   E:/CO_cpu/P4/datapath_test.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module datapath_test;

	// Inputs
	reg [2:0] Forward_RS_D_src;
	reg [2:0] Forward_RT_D_src;
	reg [1:0] Forward_RS_E_src;
	reg [1:0] Forward_RT_E_src;
	reg Forward_RT_M_src;
	reg ClearE;
	reg PauseD;
	reg PauseF;
	reg Clk;
	reg Reset;

	// Outputs
	wire [31:0] IRD_out;

	// Instantiate the Unit Under Test (UUT)
	datapath uut (
		.Forward_RS_D_src(Forward_RS_D_src), 
		.Forward_RT_D_src(Forward_RT_D_src), 
		.Forward_RS_E_src(Forward_RS_E_src), 
		.Forward_RT_E_src(Forward_RT_E_src), 
		.Forward_RT_M_src(Forward_RT_M_src), 
		.ClearE(ClearE), 
		.PauseD(PauseD), 
		.PauseF(PauseF), 
		.Clk(Clk), 
		.Reset(Reset), 
		.IRD_out(IRD_out)
	);

	initial begin
		// Initialize Inputs
		Forward_RS_D_src = 0;
		Forward_RT_D_src = 0;
		Forward_RS_E_src = 0;
		Forward_RT_E_src = 0;
		Forward_RT_M_src = 0;
		ClearE = 0;
		PauseD = 0;
		PauseF = 0;
		Clk = 0;
		Reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #10 Clk = ~Clk;
endmodule


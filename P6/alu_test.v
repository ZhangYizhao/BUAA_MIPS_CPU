`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:10:16 12/12/2019
// Design Name:   alu_E
// Module Name:   E:/CO_cpu/P6_Z/alu_test.v
// Project Name:  P6_Z
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_E
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_test;

	// Inputs
	reg [31:0] SrcA;
	reg [31:0] SrcB;
	reg [4:0] Shift;
	reg [4:0] ALUop;

	// Outputs
	wire [31:0] ALUresult;

	// Instantiate the Unit Under Test (UUT)
	alu_E uut (
		.SrcA(SrcA), 
		.SrcB(SrcB), 
		.Shift(Shift), 
		.ALUop(ALUop), 
		.ALUresult(ALUresult)
	);

	initial begin
		// Initialize Inputs
		SrcA = 32'hffffffff;
		SrcB = 32'hffffffff;
		Shift = 0;
		ALUop = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule


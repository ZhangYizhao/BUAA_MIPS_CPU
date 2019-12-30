`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:43:59 11/22/2019
// Design Name:   Crtl
// Module Name:   E:/CO_cpu/P4/crtl_test.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Crtl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module crtl_test;

	// Inputs
	reg [5:0] OPCode;
	reg [5:0] FunctCode;

	// Outputs
	wire [1:0] MemtoReg;
	wire MemWrite;
	wire ALUsrc;
	wire [3:0] ALUop;
	wire [1:0] EXTop;
	wire [1:0] RegDst;
	wire RegWrite;
	wire [1:0] PCsrc;
	wire NPCsrc;
	wire [2:0] LStype;

	// Instantiate the Unit Under Test (UUT)
	Crtl uut (
		.OPCode(OPCode), 
		.FunctCode(FunctCode), 
		.MemtoReg(MemtoReg), 
		.MemWrite(MemWrite), 
		.ALUsrc(ALUsrc), 
		.ALUop(ALUop), 
		.EXTop(EXTop), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.PCsrc(PCsrc), 
		.NPCsrc(NPCsrc), 
		.LStype(LStype)
	);

	initial begin
		// Initialize Inputs
		OPCode = 0;
		FunctCode = 6'b001001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


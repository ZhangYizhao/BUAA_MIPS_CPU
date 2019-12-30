`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:04 11/10/2019 
// Design Name: 
// Module Name:    EXT 
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
 module EXT(
    input [15:0] In,
    input [1:0] EXTop,
    output [31:0] Out
    );
 	
 	assign Out = (EXTop == 2'b00) ? {16'h0000,In} :
 					 (EXTop == 2'b01) ? {{16{In[15]}},In} :
 					 (EXTop == 2'b10) ? {In,16'h0000} :
 									   {16'h0000,In};

endmodule
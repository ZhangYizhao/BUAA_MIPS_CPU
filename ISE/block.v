`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:15:09 10/24/2019 
// Design Name: 
// Module Name:    block 
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
module block(
    input clk,
    input in,
    output reg out,
	 output bufff
    );
	 reg buff = 0;
	 assign bufff = buff;
	 always @(posedge clk) begin
		buff <= in;
		out <= buff;
	 end

endmodule

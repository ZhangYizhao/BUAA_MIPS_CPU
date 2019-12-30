`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:23 10/30/2019 
// Design Name: 
// Module Name:    seller 
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
module seller(
	input [2:0] money,
	input clr,
	input clk,
	output [3:0] ex,
	output [3:0] val);

	reg [3:0] va;
	assign ex = (va >=5) ? va - 5 : 0;
	assign val = va;
	initial begin
		va = 0;
	end

	always@(posedge clk or posedge clr) begin
		if(clr) begin
			va <= 0;
		end
		else if( va >=5 ) begin
			va <= 0;
		end
		else begin
			va <= va + money;
		end
	end
endmodule

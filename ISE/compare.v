`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:28 10/30/2019 
// Design Name: 
// Module Name:    compare 
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
module compare(
	input [3:0] a,
	input [3:0] b,
	output [3:0] out);
	wire sign1,sign2;
	wire [2:0] v1;
	wire [2:0] v2;
	reg [3:0] o;
	assign {sign1,v1} = a;
	assign {sign2,v2} = b;
	assign out = o;
	always@(*) begin
		if(sign1<sign2) begin
			assign o = a;
		end

		else if(sign1>sign2) begin
			assign o = b;
		end
		if (sign1 == sign2) begin
			if(sign1 == 1'b1) begin
				assign o = (v1>v2) ? b:a;
			end
			else begin
				assign o = (v1>v2) ? a:b;
			end
		end
	end
endmodule

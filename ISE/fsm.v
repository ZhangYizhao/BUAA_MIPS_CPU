`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:19:30 10/30/2019 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
	input [1:0] in,
	input clr,
	input clk,
	output out);

	reg [1:0] state;

	initial begin
		state = 0;
	end
	assign out = (state == 2 &&(in == 1 || in ==2)) ? 1:0;
	


	always@(posedge clk or posedge clr) begin
		if(clr) begin
			state <= 0;
		end
		else begin
			case(in)
				2'b00 : begin
					state <= (state==1) ? 2:0;
				end
				2'b01 : begin
					state <= 1;
				end
				2'b10 : begin
					state <= 0;
				end
				2'b11 : begin
					state <= 0;
				end
			endcase
		end
	end
endmodule

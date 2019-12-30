`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:29 10/22/2019 
// Design Name: 
// Module Name:    string 
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
module string(
	input clk,
	input clr,
	input [7:0] in,
	output out);
	
	reg temp;
	integer state = 0;
	assign out = (state==1) ? 1:0;

	always @(posedge clk or posedge clr) begin
		if(clr) begin
			state <= 0;
		end

		else begin
			if(in>=48 && in<=57) begin
				temp = 0;
			end
			if(in==42 || in==43) begin
				temp = 1;
			end
			case(state)
			0:
				begin
					state <= (temp == 0) ? 1:3;
				end
			1:
				begin
					state <= (temp == 0) ? 3:2;
				end
			2:
				begin
					state <= (temp == 0) ? 1:3;
				end
			3:
				begin
					state <= (temp == 0) ? 3:3;
				end
			endcase
		end
	end
endmodule
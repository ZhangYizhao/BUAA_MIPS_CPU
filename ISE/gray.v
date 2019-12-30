`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:11 10/22/2019 
// Design Name: 
// Module Name:    gray 
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
module gray(
   input Clk,
   input Reset,
	input En,
	output [2:0] Output,
	output Overflow
    );
	reg [3:0] counter;
	reg over;

	assign Overflow = over;
	assign Output = {counter[2],counter[1]^counter[2],counter[0]^counter[1]};
	
	initial begin
		counter = 0;
		over = 0;
	end

	always @ (posedge Clk) begin
		if(Reset) begin
			counter = 0;
			over <= 0;
		end
		else begin
			if (En) begin
				counter = counter + 1;
				if (counter>7) begin
					counter = 0;
					over <= 1;
				end
			end
		end
	end

endmodule
	
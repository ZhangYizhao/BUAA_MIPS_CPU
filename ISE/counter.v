`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Ian
// 
// Create Date:    18:55:57 10/09/2019 
// Design Name: 
// Module Name:    counter 
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
module Counter(
	input Clk,
	input Reset,
	input Slt,
	input En,
	output [63:0] Output0,
	output [63:0] Output1
	);
	
	reg[3:0] time2;
	reg[3:0] counter1;
	reg[3:0] counter2;
	
	assign Output0 = counter1;
	assign Output1 = counter2;
	
	initial begin
		counter1 = 0;
		counter2 = 0;
		time2 = 0;
	end
	always @(posedge Clk) begin
		if (Reset == 1'b1) begin
			counter1 = 0;
			counter2 = 0;
			time2 = 0;
			// reset
		end
		else if (Reset== 1'b0 && En == 1'b1) begin
			if(Slt == 1'b0) begin
				counter1 = counter1 + 1;
			end
			if(Slt == 1'b1) begin
				time2 = time2 + 1;
				if(time2%4 == 0 ) begin
					counter2 = counter2 + 1;
				end
			end
			
		end
	end
	
endmodule

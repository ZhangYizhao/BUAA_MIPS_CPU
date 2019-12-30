`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:01:05 11/18/2019 
// Design Name: 
// Module Name:    rf_D 
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
module rf_D(
	 input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input Clk,
    input Reset,
    input En,
	 input [31:0] InsAddr,
    output [31:0] RD1,
    output [31:0] RD2
    );
	integer i;
	reg [31:0] grf [31:0];

	assign RD1 = grf[A1][31:0];
	assign RD2 = grf[A2][31:0];

	initial begin
		for(i=0;i<32;i=i+1) begin
			grf[i][31:0] = 0;
		end
	end

	always @(posedge Clk) begin
		if (Reset) begin
			for(i=0;i<32;i=i+1) begin
				grf[i][31:0] <= 0;
			end
			// reset
		end
		else if (En==1) begin
			if(A3 == 0) begin
				grf[A3] <= 0;
			end
			else begin
				grf[A3] <= WD;
				$display("%d@%h: $%d <= %h", $time, InsAddr, A3, WD);
		   end
		end
	end
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:14 11/10/2019 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input [4:0] R1,
    input [4:0] R2,
    input [4:0] Waddr,
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

	assign RD1 = grf[R1][31:0];
	assign RD2 = grf[R2][31:0];

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
			if(Waddr == 0) begin
				grf[Waddr] <= 0;
			end
			else begin
				grf[Waddr] <= WD;
				$display("@%h: $%d <= %h",InsAddr,Waddr,WD); 
		   end
		end
	end
endmodule
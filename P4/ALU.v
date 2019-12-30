`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:17:15 11/10/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [4:0] Shift,
    input [3:0] ALUop,
    output [31:0] ALUresult,
    output bigger,
    output equal,
    output smaller
    );
	 	reg [31:0] tmp;
	 	initial begin
	 		tmp = 0;
	 	end
	 	assign ALUresult = tmp;
	 	assign bigger = ($signed(tmp) > 0) ? 1:0;
	 	assign equal = ($signed(tmp) == 0) ? 1:0;
	 	assign smaller = ($signed(tmp) < 0) ? 1:0;
	 	always @* begin
	 		case(ALUop)
	 			4'b0000 : begin
	 				tmp <= SrcA + SrcB;
	 			end
	 			4'b0001 : begin
	 				tmp <= SrcA - SrcB;
	 			end
				4'b0010 : begin
					tmp <= SrcA | SrcB;
				end
	 			4'b0011 : begin
	 				tmp <= SrcA & SrcB;
	 			end
	 			4'b0100 : begin
	 				tmp <= ~ (SrcA | SrcB);
	 			end
	 			4'b0101 : begin
	 				tmp <= SrcA ^ SrcB;
	 			end
	 			4'b0110 : begin
	 				tmp <= SrcB << SrcA[4:0];
	 			end
	 			4'b0111 : begin
	 				tmp <= SrcB << Shift;
	 			end
	 			4'b1000 : begin
	 				tmp <= SrcB >> SrcA[4:0];
	 			end
	 			4'b1001 : begin
	 				tmp <= SrcB >> Shift;
	 			end
	 			4'b1010 : begin
	 				tmp <= SrcB >>> SrcA[4:0];
	 			end
	 			4'b1011 : begin
	 				tmp <= $signed(SrcB) >>> Shift;
	 			end
	 			4'b1100 :begin
	 				tmp <= $signed(SrcB) >>> SrcA[4:0];
	 			end
	 			default : begin
	 				tmp <= SrcA + SrcB;
	 			end
	 		endcase
	 	end
endmodule


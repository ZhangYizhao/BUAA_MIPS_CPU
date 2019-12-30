`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:06:40 10/22/2019 
// Design Name: 
// Module Name:    alu 
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
module alu(
	input [31:0] A,
	input [31:0] B,
	input [2:0] ALUOp,
	output [31:0] C
	);
	
	wire signed [31:0] signtemp;
	assign signtemp = A;
	reg [31:0] seq;
	always@* begin
		case(ALUOp)
			3'b000:begin
				seq = A+B;
			end
			3'b001:begin
				seq= A-B;
			end
			3'b010:begin
				seq = A&B;
			end
			3'b011:begin
				seq = A|B;
			end
			3'b100:begin
				seq = A>>B;
			end
			3'b101:begin
				seq = signtemp>>>B;
			end
			default : begin
				$display("invalid ALUOp");
			end
		endcase
	end

	assign C = seq ;

endmodule
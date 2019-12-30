`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:05:38 11/20/2019 
// Design Name: 
// Module Name:    alu_E 
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
module alu_E(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [4:0] Shift,
    input [3:0] ALUop,
    output [31:0] ALUresult
    );

    `include "macros.v"

    assign ALUresult = (ALUop==`alu_add) ? SrcA + SrcB :
                       (ALUop==`alu_sub) ? SrcA - SrcB :
                       (ALUop==`alu_or)  ? SrcA | SrcB :
                       (ALUop==`alu_and) ? SrcA & SrcB :
                       (ALUop==`alu_nor) ? ~ (SrcA | SrcB) :
                       (ALUop==`alu_xor) ? SrcA ^ SrcB :
                       (ALUop==`alu_sllv) ? SrcB << SrcA[4:0]:
                       (ALUop==`alu_sll) ? SrcB << Shift :
                       (ALUop==`alu_srlv) ? SrcB >> SrcA[4:0] :
                       (ALUop==`alu_srl) ? SrcB >> Shift :
                       (ALUop==`alu_srav) ? $signed(SrcB) >>> SrcA[4:0] :
                       (ALUop==`alu_sra) ? $signed(SrcB) >>> Shift :
							  (ALUop==`alu_slt) ? (($signed(SrcA) < $signed(SrcB))? 1 : 0) : SrcA + SrcB;

endmodule

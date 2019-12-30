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
    input [4:0] ALUop,
    output [31:0] ALUresult,
	 output ov
    );

    `include "macros.v"
	 integer i;
	 reg [31:0] result;
	 reg [31:0] clz_temp;
	 reg V;
	 reg [32:0] ov_temp;
	 assign ALUresult = result ;
	 assign ov = V;
	 initial begin
		result = 0;
	 end
	 
	 
	 always @(*) begin
		case(ALUop) 
			`alu_add: begin
				ov_temp = {SrcA[31],SrcA} + {SrcB[31],SrcB} ;
				V = ov_temp[32] ^ ov_temp[31] ;
				result = ov_temp[31:0];
			end
			`alu_addu: begin
				result=SrcA + SrcB;
			end
			`alu_sub: begin
				ov_temp = {SrcA[31],SrcA} - {SrcB[31],SrcB} ;
				V = ov_temp[32] ^ ov_temp[31] ;
				result = ov_temp[31:0];        //此处应该补充overflow exception
			end
			`alu_subu: begin
				result=SrcA - SrcB;
		    end
		    `alu_or: begin
		    	result=SrcA | SrcB;
		    end
		    `alu_and: begin
		    	result=SrcA & SrcB;
		    end
		    `alu_xor: begin
		    	result=SrcA ^ SrcB;
		    end
		    `alu_nor: begin
		    	result=~ (SrcA | SrcB);
		    end
		    `alu_sllv: begin
		    	result=SrcB << SrcA[4:0];
		    end
		    `alu_sll: begin
		    	result=SrcB << Shift;
		    end
		    `alu_srlv: begin
		    	result=SrcB >> SrcA[4:0];
		    end
		    `alu_srl: begin
		    	result=SrcB >> Shift;
		    end
		    `alu_srav: begin
		    	result=$signed(SrcB) >>> SrcA[4:0];
		    end
		    `alu_sra: begin
		    	result=$signed(SrcB) >>> Shift;
		    end
		    `alu_slt: begin
		    	result=($signed(SrcA) < $signed(SrcB))? 1 : 0;
		    end
		    `alu_sltu: begin
		    	result=(SrcA < SrcB)? 1 : 0;
		    end
			 `alu_clz: begin
			   i = 0; 
				clz_temp = SrcA;
				while(clz_temp[31] == 0 && i<=31) begin
					i = i + 1;
					clz_temp = SrcA<<i;
				end
				result = i;
			 end
		endcase
	end

endmodule 


`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:57 11/19/2019 
// Design Name: 
// Module Name:    crtl_D 
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
module Crtl(
	 input [31:0] Instr,
    output [1:0] MemtoReg,
    output MemWrite,
    output ALUsrc,
    output [4:0] ALUop,
    output [1:0] EXTop,
    output [1:0] RegDst,
    output RegWrite,
    output [2:0] PCsrc,
    output NPCsrc,
	 output [2:0] LStype,
	 output [1:0] M_Dop,
	 output MD_start,
	 output [1:0] ALU_OUT,
	 output [1:0] MD_WE,
	 output IS_eret,
	 output Cp0_we,
	 output Cp0_wr,
	 output RI_exc
    );

	//为何不在IF级设计暂停机制，因为IF级取指令阶段延迟较大，会拖慢暂停判断周期
	`include "macros.v"
/*
    wire addu,subu,slt,
	      addiu,ori,lui,
			lw,sw,
			beq,
			j,jal,jr,jalr,
			nop;

    assign  addu  = (OPCode ==0 && FunctCode == `addu);  //R-Type
    assign  subu  = (OPCode ==0 && FunctCode == `subu);  //R-Type
    assign  ori   = (OPCode == `ori);
    assign  lw    = (OPCode == `lw);
	 assign  lh    = (OPCode == `
	 assign  lb
	 assign  lhu
	 assign  lbu
    assign  sw    = (OPCode == `sw);
    assign  beq   = (OPCode == `beq);
    assign  lui   = (OPCode == `lui);
    assign  j = (OPCode == `j);
    assign  jal   = (OPCode == `jal);
    assign  jr    = (OPCode ==0 && FunctCode == `jr);
    assign  jalr = (OPCode == 0 && FunctCode == `jalr);
    assign  nop   = (OPCode == `nop && FunctCode == `nop);
	 assign  addiu = (OPCode == `addiu) ? 1 : 0;
	 assign  slt = (OPCode == 0 && FunctCode ==`slt) ? 1 : 0;
*/	 wire [31:0] instr;
	 assign instr = Instr;
	 assign RI_exc = ~(`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav|
							`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui|
							`lw|`lb|`lbu|`lh|`lhu|
							`sw|`sh|`sb|
							`beq|`bgez|`bgtz|`blez|`bltz|`bne|
							`mfhi|`mflo|`mthi|`mtlo|
							`jal|`jalr|`j|`jr|
							`mult|`multu|`div|`divu|
							`mfc0|`eret|`mtc0|`nop) ;
							
							
    assign RegWrite = ((`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav)|
							  (`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)|
							  (`lw|`lb|`lbu|`lh|`lhu)|
							  (`mfhi|`mflo)|
							  `jal|`jalr|`mfc0);   //sll,sra,srl是特例
							
    assign RegDst = ((`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav)|(`mfhi|`mflo)|(`jalr)) ? `RegDst_A3:
                    ((`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)|(`lw|`lb|`lbu|`lh|`lhu)|`mfc0) ? `RegDst_A2:
                    (`jal) ? `RegDst_ra:
                    2'bxx;

    assign EXTop = (`ori|`andi|`xori) ? 0 :
    			       ((`lw|`lb|`lbu|`lh|`lhu)|(`sw|`sh|`sb)|(`addiu|`addi|`slti|`sltiu)) ? 1 :
                   (`lui) ? 2 :
                   2'bxx;

    assign ALUsrc = ((`lw|`lb|`lbu|`lh|`lhu)|
						  (`sw|`sh|`sb)|
						  (`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)) ? 1 : 0;

    assign ALUop = (`subu|`beq) ? `alu_subu :
						 (`sub) ? `alu_sub :
				       (`add|`addi) ? `alu_add :
				       (`addu|`addiu) ? `alu_addu :
				       (`_and|`andi) ? `alu_and :
				       (`_xor|`xori) ? `alu_xor :
				       (`_nor) ? `alu_nor :
						 (`jalr|`jr|`ori|`_or) ? `alu_or :
				       (`slt|`slti) ? `alu_slt :
				       (`sltu|`sltiu) ? `alu_sltu : 
						 (`sll) ? `alu_sll :
				       (`sllv) ? `alu_sllv :
				       (`srl) ? `alu_srl:
				       (`srlv) ? `alu_srlv :
				       (`sra) ? `alu_sra:
						 (`srav) ? `alu_srav :`alu_add;
    
    assign MemWrite = (`sw|`sh|`sb) ? 1:0 ;
    assign MemtoReg = ((`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav)|
							  (`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)|
							  (`mfhi|`mflo)) ? 0 :
    				       ((`lw|`lb|`lbu|`lh|`lhu|`mfc0)) ? 1 :
                      (`jal|`jalr) ? 2 : 2'b00;

    assign PCsrc = (`nop|
								(`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)|
								(`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav)|
								(`lw|`lb|`lbu|`lh|`lhu)|
								(`mult|`multu|`div|`divu|`mfhi|`mflo|`mthi|`mtlo)|
								(`sw|`sh|`sb)|`mfc0|`mtc0) ? `npc_add4 :
						 (`j|`jal) ? `npc_j :
						 (`jr|`jalr) ? `npc_jr :
						 (`beq|`bgez|`bgtz|`blez|`bltz|`bne) ? `npc_branch :
						 (`eret) ? `npc_eret :
						 2'bxx;

	 assign NPCsrc = (`j + `jal) ? 1'b1 :
	                 (`beq|`bgez|`bgtz|`blez|`bltz|`bne) ? 1'b0 :
						  1'bx;
	 assign LStype = (`lw|`sw) ? 3'b000:
						  (`lh|`sh) ? 3'b001:
						  (`lhu|`sb) ? 3'b010:
						  (`lb) ? 3'b011:
						  (`lbu) ? 3'b100:0;
	
	 assign M_Dop = (`mult) ? `alu_mult :
					  (`multu) ? `alu_multu :
					  (`div) ? `alu_div :
					  (`divu) ? `alu_divu : `alu_mult;
					  
	 assign MD_start = (`mult|`multu|`div|`divu) ? 1 : 0;
	 assign ALU_OUT = (`mfhi) ? 1:
						   (`mflo) ? 2:0;
	 assign MD_WE = (`mthi) ? 1:
					    (`mtlo) ? 2:0;

	 assign Cp0_we = (`mtc0) ? 1:0;

	 assign Cp0_wr = (`mfc0 || `mtc0) ? 1:0;

	 assign IS_eret = (`eret) ? 1:0;
	 
						 
endmodule
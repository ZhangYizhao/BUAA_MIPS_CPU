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
    input [5:0] OPCode,
    input [5:0] FunctCode,
    output [1:0] MemtoReg,
    output MemWrite,
    output ALUsrc,
    output [3:0] ALUop,
    output [1:0] EXTop,
    output [1:0] RegDst,
    output RegWrite,
    output [1:0] PCsrc,
    output NPCsrc,
	 output [2:0] LStype
    );
	//为何不在IF级设计暂停机制，因为IF级取指令阶段延迟较大，会拖慢暂停判断周期
	`include "macros.v"

    wire addu,subu,ori,lw,sw,beq,lui,jal,jr,nop,addiu,slt,jalr;

    assign  addu  = (OPCode ==0 && FunctCode == `addu);  //R-Type
    assign  subu  = (OPCode ==0 && FunctCode == `subu);  //R-Type
    assign  ori   = (OPCode == `ori);
    assign  lw    = (OPCode == `lw);
    assign  sw    = (OPCode == `sw);
    assign  beq   = (OPCode == `beq);
    assign  lui   = (OPCode == `lui);
    assign  j = (OPCode == `j);
    assign  jal   = (OPCode == `jal);
    assign  jr    = (OPCode ==0 && FunctCode == `jr);
    assign  jalr = (OPCode == 0 && FunctCode == `jalr);
    assign  nop   = (OPCode == `nop && FunctCode == `nop);
	 assign addiu = (OPCode == `addiu) ? 1 : 0;
	 assign slt = (OPCode == 0 && FunctCode ==`slt) ? 1 : 0;

    assign RegWrite = (addu|subu|addiu|ori|lw|lui|jal|jalr|slt) ;
    assign RegDst = (addu|subu|slt) ? `RegDst_A3:
                    (ori|lui|addiu|lw) ? `RegDst_A2:
                    (jalr|jal) ? `RegDst_ra:
                    2'bxx;

    assign EXTop = (ori) ? 0 :
    			   (lw|sw|addiu) ? 1 :
                   (lui) ? 2 :
                   2'bxx;

    assign ALUsrc = (ori|lw|sw|lui|addiu) ? 1 : 0;

    assign ALUop = (subu|beq) ? `alu_sub :
                   (ori|lui|jr|jalr) ? `alu_or :
						 (slt) ? `alu_slt :
                   `alu_add;
    
    assign MemWrite = (sw) ? 1:0 ;
    assign MemtoReg = (addu|subu|addiu|ori|lui|slt) ? 0 :
    				       (lw) ? 1 :
                      (jal|jalr) ? 2 : 2'b00;

    assign PCsrc = (nop|addu|addiu|subu|ori|lui|lw|sw|slt) ? `npc_add4 :
    			   (j|jal) ? `npc_j :
    			   (jr|jalr) ? `npc_jr :
    			   (beq) ? `npc_branch :
    			   2'bxx;

	 assign NPCsrc = (j + jal) ? 1'b1 :
	               (beq) ? 1'b0 :
						1'bx;
	 assign LStype = (lw|sw) ? 0:0;

endmodule
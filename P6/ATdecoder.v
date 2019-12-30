`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:41 11/23/2019 
// Design Name: 
// Module Name:    ATdecoder 
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
module ATdecoder(
	input [31:0] Instr,
	output [4:0] RS,
	output [4:0] RT,
	output [4:0] WR,
	output [4:0] Instype,
	output md_stall
	);

	`include "macros.v"
	
	/*
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
	 assign  addiu = (OPCode == `addiu) ? 1 : 0;
	 assign  slt = (OPCode == 0 && FunctCode ==`slt) ? 1 : 0;
*/
	 wire [31:0] instr;
	 assign instr = Instr;
	 
	 assign Instype = 
					 ((`add|`addu|`sub|`subu|`_and|`_xor|`_nor|`_or|`slt|`sltu|`srl|`srlv|`sll|`sllv|`sra|`srav)|
					  (`mult|`multu|`madd|`div|`divu)|
					  (`mfhi|`mflo)|
					  (`clz)) ? `it_cal_r :
					 ((`addiu|`addi|`andi|`ori|`slti|`sltiu|`xori|`lui)|
					  (`mthi|`mtlo))? `it_cal_i :
					 (`lw|`lb|`lbu|`lh|`lhu|`lhs) ? `it_load :
					 (`sw|`sh|`sb) ? `it_store :
					 (`beq|`bgez|`bgtz|`blez|`bltz|`bne) ? `it_branch :
					 (`jr) ? `it_jr :
					 (`jal) ? `it_jal :
					 (`jalr) ? `it_jalr : 
					 (`bgezal) ? `it_bgezal :
					 (`bgezalr) ? `it_bgezalr : 
					 (`lwl) ? `it_lwl : 
					 (`lwpl) ? `it_lwpl :`it_nop ;
					 
	assign md_stall = (`mult|`multu|`madd|`div|`divu|`mfhi|`mflo|`mthi|`mtlo) ? 1:0;

	assign RS = (Instype==`it_jal || Instype==`it_nop) ? 0 : Instr[25:21] ; 
	//���ڲ���ָ��Ϊ��RT������ΪдRt,Ϊ�˱���ת�����Ƶĳ�ͻ����дRT��ָ��ת�Ƶ�WR��
	assign RT = (Instype==`it_cal_r || Instype==`it_store || Instype==`it_branch || Instype==`it_bgezalr || Instype==`it_lwl) ? Instr[20:16] : 0;


	assign WR = (Instype==`it_cal_r || Instype==`it_jalr || Instype==`it_bgezalr) ? Instr[15:11] :
			    (Instype==`it_cal_i || Instype==`it_load || Instype==`it_lwl || Instype==`it_lwpl) ? Instr[20:16] :
			    (Instype==`it_jal || Instype==`it_bgezal) ? 5'b11111 : 0 ;

	endmodule
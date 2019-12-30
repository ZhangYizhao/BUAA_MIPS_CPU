`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:57 11/18/2019 
// Design Name: 
// Module Name:    macros 
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
`define npc_add4 0
`define npc_j 1
`define npc_jr 2
`define npc_branch 3
`define npc_bgezalr 4

`define OP 		instr[31:26]
`define Func	instr[5:0]
/*
`define R 6'b000000
`define nop 6'b000000
`define jr 6'b001000
`define jalr 6'b001001
`define addu 6'b100001
`define subu 6'b100011
`define slt 6'b101010

`define beq 6'b000100
`define addiu 6'b001001
`define ori 6'b001101
`define lui 6'b001111
`define lw 6'b100011
`define sw 6'b101011
`define j 6'b000010
`define jal 6'b000011
*/
`define nop    (`R & (`Func == 6'b000000) &(instr==32'h00000000))
`define R 		(`OP == 6'b000000)
`define addu	(`R & (`Func == 6'b100001))
`define subu	(`R & (`Func == 6'b100011))
`define ori     (`OP == 6'b001101)
`define lw      (`OP == 6'b100011)
`define sw      (`OP == 6'b101011)
`define beq     (`OP == 6'b000100)
`define lui     (`OP == 6'b001111)
`define j	    (`OP == 6'b000010)
`define jal     (`OP == 6'b000011)
`define jr      (`R & (`Func == 6'b001000))
`define movz	(`R & (`Func == 6'b001010))
`define add		(`R & (`Func == 6'b100000))
`define addi	(`OP == 6'b001000)
`define addiu	(`OP == 6'b001001)
`define sub		(`R & (`Func == 6'b100010))
`define sll		(`R & (`Func == 6'b000000) &(instr!=32'h00000000))
`define srl		(`R & (`Func == 6'b000010))
`define sra		(`R & (`Func == 6'b000011))
`define sllv	(`R & (`Func == 6'b000100))
`define srlv	(`R & (`Func == 6'b000110))
`define srav	(`R & (`Func == 6'b000111))
`define _and	(`R & (`Func == 6'b100100))
`define _or		(`R & (`Func == 6'b100101))
`define _nor	(`R & (`Func == 6'b100111))
`define _xor	(`R & (`Func == 6'b100110))
`define andi	(`OP == 6'b001100)
`define xori	(`OP == 6'b001110)
`define slt		(`R & (`Func == 6'b101010))
`define slti	(`OP == 6'b001010)
`define sltu	(`R & (`Func == 6'b101011))
`define sltiu	(`OP == 6'b001011)
`define bne		(`OP == 6'b000101)
`define blez	(`OP == 6'b000110)
`define bgez	((`OP == 6'b000001) & (instr[20:16] == 5'b00001))
`define bgtz	(`OP == 6'b000111)
`define bltz	((`OP == 6'b000001) & (instr[20:16] == 5'b00000))
`define jalr	(`R & (`Func == 6'b001001))
`define sh		(`OP == 6'b101001)
`define sb		(`OP == 6'b101000)
`define lh		(`OP == 6'b100001)
`define lhu		(`OP == 6'b100101)
`define lb		(`OP == 6'b100000)
`define lbu		(`OP == 6'b100100)
`define mult	(`R & (`Func == 6'b011000))
`define multu	(`R & (`Func == 6'b011001))
`define div		(`R & (`Func == 6'b011010))
`define divu	(`R & (`Func == 6'b011011))
`define mfhi	(`R & (`Func == 6'b010000))
`define mflo	(`R & (`Func == 6'b010010))
`define mthi	(`R & (`Func == 6'b010001))
`define mtlo	(`R & (`Func == 6'b010011))

//注意解码是否重复
`define bgezal  (`OP == 6'b000001 & (instr[20:16] == 5'b10001))
`define bgezalr (`OP == 6'b111111 & (`Func == 6'b000000))
`define clz     (`OP == 6'b011100 & (`Func == 6'b100000))
`define lhs     (`OP == 6'b011001)
`define lwl     (`OP == 6'b100010)
`define lwpl    (`OP == 6'b010101)
`define madd    (`OP == 6'b011100 & (`Func == 6'b000000))


`define RegDst_A3 2'b00
`define RegDst_A2 2'b01
`define RegDst_ra 2'b10
`define RegDst_lwpl 2'b11

`define alu_addu 5'b00000
`define alu_subu 5'b00001
`define alu_or 5'b00010
`define alu_and 5'b00011
`define alu_nor 5'b00100
`define alu_xor 5'b00101
`define alu_sllv 5'b00110
`define alu_sll 5'b00111
`define alu_srlv 5'b01000
`define alu_srl 5'b01001
`define alu_srav 5'b01010
`define alu_sra 5'b01011
`define alu_slt 5'b01100
`define alu_add 5'b01101
`define alu_sub 5'b01110
`define alu_sltu 5'b01111
`define alu_clz  5'b10000

`define alu_mult 3'b000
`define alu_multu 3'b001
`define alu_div 3'b010
`define alu_divu 3'b011
`define alu_madd 3'b100

`define fw_d_rd 3'b000
`define fw_d_pc4e 3'b001
`define fw_d_ao 3'b010
`define fw_d_pc4m 3'b011
`define fw_d_wd 3'b100

`define fw_e_rd 2'b00
`define fw_e_ao 2'b01
`define fw_e_pc4m 2'b10
`define fw_e_wd 2'b11

`define fw_m_rd 0
`define fw_m_wd 1

`define it_nop 5'b00000
`define it_cal_r 5'b00001
`define it_cal_i 5'b00010
`define it_load 5'b00011
`define it_store 5'b00100
`define it_branch 5'b00101
`define it_jr 5'b00110
`define it_jal 5'b00111
`define it_jalr 5'b01000
`define it_md_stall 5'b01001
`define it_bgezalr 5'b01010
`define it_bgezal 5'b01011
`define it_lwl 5'b01100
`define it_lwpl 5'b01101
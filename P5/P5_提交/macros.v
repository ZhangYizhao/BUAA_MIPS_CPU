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

`define RegDst_A3 2'b00
`define RegDst_A2 2'b01
`define RegDst_ra 2'b10

`define alu_add 4'b0000
`define alu_sub 4'b0001
`define alu_or 4'b0010
`define alu_and 4'b0011
`define alu_nor 4'b0100
`define alu_xor 4'b0101
`define alu_sllv 4'b0110
`define alu_sll 4'b0111
`define alu_srlv 4'b1000
`define alu_srl 4'b1001
`define alu_srav 4'b1010
`define alu_sra 4'b1011
`define alu_slt 4'b1100

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

`define it_nop 4'b0000
`define it_cal_r 4'b0001
`define it_cal_i 4'b0010
`define it_load 4'b0011
`define it_store 4'b0100
`define it_branch 4'b0101
`define it_jr 4'b0110
`define it_jal 4'b0111
`define it_jalr 4'b1000
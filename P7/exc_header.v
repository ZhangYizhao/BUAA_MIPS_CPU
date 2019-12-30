`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:47:11 12/25/2019 
// Design Name: 
// Module Name:    exc_header 
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
`define it_nop 4'b0000
`define it_cal_r 4'b0001
`define it_cal_i 4'b0010
`define it_load 4'b0011
`define it_store 4'b0100
`define it_branch 4'b0101
`define it_jr 4'b0110
`define it_jal 4'b0111
`define it_jalr 4'b1000
`define it_md_stall 4'b1001
`define it_bgezalr 4'b1010
`define it_j 4'b1011

`define cp0_sr 6'b101100
`define cp0_cause 6'b101101
`define cp0_epc 6'b101110
`define cp0_prid 6'b101111


`define debug_bridge 32'h17230000
`define debug_timer 32'h17230001
`define debug_dm 32'h17230002
`define debug_npc 32'h17230003
`define debug_mudi 32'h17230004
`define debug_cp0 32'h17230005
`define debug_ext 32'h17230006
`define debug_mf 32'h17230007
`define debug_adel_instr 32'h8c001723

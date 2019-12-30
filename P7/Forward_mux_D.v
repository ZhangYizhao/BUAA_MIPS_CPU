`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:22 11/19/2019 
// Design Name: 
// Module Name:    Forward_mux_D 
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
module Forward_mux_D(
    input [31:0] PC4_E,
    input [31:0] AO,
    input [31:0] PC4_M,
    input [31:0] WD_OUT,
    input [31:0] RS_D,
    input [31:0] RT_D,
    input [2:0] forward_src_rs,
    input [2:0] forward_src_rt,
    output [31:0] RS_D_OUT,
    output [31:0] RT_D_OUT
    );
	 
	`include "macros.v"
	assign RS_D_OUT = (forward_src_rs==`fw_d_rd) ? RS_D :
                       (forward_src_rs==`fw_d_pc4e) ? PC4_E + 4 :
                       (forward_src_rs==`fw_d_ao) ? AO :
                       (forward_src_rs==`fw_d_pc4m) ? PC4_M + 4:
                       (forward_src_rs==`fw_d_wd) ? WD_OUT : 3'bxxx;

   assign RT_D_OUT = (forward_src_rt==`fw_d_rd) ? RT_D :
                       (forward_src_rt==`fw_d_pc4e) ? PC4_E + 4 :
                       (forward_src_rt==`fw_d_ao) ? AO :
                       (forward_src_rt==`fw_d_pc4m) ? PC4_M + 4 :
                       (forward_src_rt==`fw_d_wd) ? WD_OUT : 3'bxxx;


endmodule
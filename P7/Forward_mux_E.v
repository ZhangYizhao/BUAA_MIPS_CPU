`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:38 11/20/2019 
// Design Name: 
// Module Name:    Forward_mux_E 
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
module Forward_mux_E(
    input [31:0] PC4_forw_M,
    input [31:0] AO_M,
    input [31:0] MUX_RF_WD_OUT,
    input [31:0] RSE,
    input [31:0] RTE,
    input [1:0] Forward_RS_E_src,
    input [1:0] Forward_RT_E_src,
    output [31:0] RS_IN_E,
    output [31:0] RT_IN_E
    );

    `include "macros.v"

    assign RS_IN_E = (Forward_RS_E_src==`fw_e_rd) ? RSE :
                     (Forward_RS_E_src==`fw_e_ao) ? AO_M :
                     (Forward_RS_E_src==`fw_e_pc4m) ? PC4_forw_M + 4 :
                     (Forward_RS_E_src==`fw_e_wd) ? MUX_RF_WD_OUT : RSE;

    assign RT_IN_E = (Forward_RT_E_src==`fw_e_rd) ? RTE :
                     (Forward_RT_E_src==`fw_e_ao) ? AO_M :
                     (Forward_RT_E_src==`fw_e_pc4m) ? PC4_forw_M + 4 :
                     (Forward_RT_E_src==`fw_e_wd) ? MUX_RF_WD_OUT : RTE;


endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:22 11/19/2019 
// Design Name: 
// Module Name:    E_unit 
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
//
module E_unit(
    input [31:0] PC4E,
    input [31:0] IRE,
    input [31:0] RSE,
    input [31:0] RTE,
    input [31:0] EXTE,
    input Clk,
    input Reset,
    input [1:0] Forward_RS_E_src,
    input [1:0] Forward_RT_E_src,
    input [4:0] Shift,
    input [31:0] PC4_forw_M,
    input [31:0] AO,
    input [31:0] W_RF_WD_OUT,
    output reg [31:0] IRM,
    output reg [31:0] PC4M,
    output reg [31:0] AOM,
    output reg [31:0] RTM
    );

    `include "macros.v"
    wire alusrc;
    wire [3:0] aluop;
    wire [31:0] rs_in,rt_in,srca,srcb,aluresult;

    Forward_mux_E forward_mux_e(
    .PC4_forw_M(PC4_forw_M),
    .AO_M(AO),
    .MUX_RF_WD_OUT(W_RF_WD_OUT),
    .RSE(RSE),
    .RTE(RTE),
    .Forward_RS_E_src(Forward_RS_E_src),
    .Forward_RT_E_src(Forward_RT_E_src),
    .RS_IN_E(rs_in),
    .RT_IN_E(rt_in));

    alu_E alu_e(
    .SrcA(srca),
    .SrcB(srcb),
    .Shift(Shift),
    .ALUop(aluop),
    .ALUresult(aluresult));

    Crtl crtl_e(
    .OPCode(IRE[31:26]),
    .FunctCode(IRE[5:0]),
    .ALUop(aluop),
    .ALUsrc(alusrc));

    assign srca = rs_in ;
    assign srcb = (alusrc==1) ? EXTE : rt_in;

    initial begin
        IRM = 32'b0;
        PC4M = 32'b0;
        AOM = 32'b0;
        RTM = 32'b0;
    end

    always @(posedge Clk) begin
        if(Reset) begin
            IRM <= 32'b0;
            PC4M <= 32'b0;
            AOM <= 32'b0;
            RTM <= 32'b0;
        end
        else begin
            IRM <= IRE;
            PC4M <= PC4E;
            AOM <= aluresult;
            RTM <= rt_in;
        end
    end


endmodule

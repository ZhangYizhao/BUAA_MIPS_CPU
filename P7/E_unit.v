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
    input [6:2] ExcCode_E,
    input BD_E,
    input EXC_E,
    output reg [31:0] IRM,
    output reg [31:0] PC4M,
    output reg [31:0] AOM,
    output reg [31:0] RTM,
    output reg [6:2] ExcCode_M,
    output reg BD_M,
	 output Busy,
	 output Start
    );

    `include "macros.v"
    wire alusrc,start,ov;
	 wire [1:0] mdcrtl,md_we,alu_out_crtl;
    wire [4:0] aluop;
    wire [31:0] rs_in,rt_in,srca,srcb,aluresult,highout,lowout,aluout;
    wire [6:2] ExcCode_in;

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
    .ALUresult(aluresult),
	 .ov(ov));
	 
	 md_E md_e(
	 .Start(start),
	 .Clk(Clk),
	 .Reset(Reset),
	 .exc_in(EXC_E),
	 .D1(srca),
	 .D2(srcb),
	 .opsrc(mdcrtl),
	 .wsrc(md_we),
	 .highout(highout),
	 .lowout(lowout),
	 .Busy(Busy));

    Crtl crtl_e(
    .Instr(IRE),
    .ALUop(aluop),
    .ALUsrc(alusrc),
	 .M_Dop(mdcrtl),
	 .MD_start(start),
	 .MD_WE(md_we),
	 .ALU_OUT(alu_out_crtl)
	 );

    exc_E exc_e(
    .Instr(IRE),
    .ov(ov),
    .ExcCode_E(ExcCode_E),
    .ExcCode_in(ExcCode_in)
    );
	 
	 
    assign Start = start;
    assign srca = rs_in ;
    assign srcb = (alusrc==1) ? EXTE : rt_in;
	 assign aluout = (alu_out_crtl == 0) ? aluresult : 
						  (alu_out_crtl == 1) ? highout :
						  (alu_out_crtl == 2) ? lowout : aluresult ;

    initial begin 
        IRM = 32'b0;
        PC4M = 32'b0;
        AOM = 32'b0;
        RTM = 32'b0;
        ExcCode_M = 5'b11111;
        BD_M = 0;
    end

    always @(posedge Clk) begin
        if(Reset || EXC_E) begin
            IRM <= 32'b0;
            PC4M <= 32'b0;
            AOM <= 32'b0;
            RTM <= 32'b0;
            ExcCode_M <= 5'b11111;
            BD_M <= 0;
        end
        else begin
            IRM <= IRE;
            PC4M <= PC4E;
            AOM <= aluout;
            RTM <= rt_in;
            ExcCode_M <= ExcCode_in;
            BD_M <= BD_E;
        end
    end


endmodule

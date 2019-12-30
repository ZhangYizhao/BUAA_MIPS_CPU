`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:19:02 11/20/2019 
// Design Name: 
// Module Name:    M_unit 
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
module M_unit(
    input [31:0] AOM,
    input [31:0] IRM,
    input [31:0] PC4M,
    input [31:0] RTM,
    input Clk,
    input Reset,
    input Forward_RT_M_src,
    input [31:0] W_RF_WD_OUT,
    output reg [31:0] DRW,
    output reg [31:0] PC4W,
    output reg [31:0] AOW,
    output reg [31:0] IRW,
	 output reg LWPL_31
    );

	`include "macros.v"

	wire [31:0] wd,rd;
	wire [2:0] lstype;
	wire we;
	wire [31:0] instr;
	wire lwpl_31;
	
	dm_M dm_m(
	.Addr(AOM),
	.WD(wd),
	.Clk(Clk),
	.Reset(Reset),
	.WE(we),
	.LStype(lstype),
	.Instr(PC4M-4),
	.RD(rd));

	Crtl crtl_m(
	.Instr(IRM),
	.MemWrite(we),
	.LStype(lstype));
	
	assign wd = (Forward_RT_M_src==`fw_m_wd) ? W_RF_WD_OUT : RTM ;
	assign instr = IRM;
	assign lwpl_31_en = (rd[1:0] == 0) ? 1:0;
	
	
	initial begin
		DRW = 32'b0;
		AOW = 32'b0;
		IRW = 32'b0;
		PC4W = 32'b0;
		LWPL_31 = 0;
	end

	always @(posedge Clk) begin
		if(Reset) begin
			DRW <= 32'b0;
			AOW <= 32'b0;
			IRW <= 32'b0;
			PC4W <= 32'b0;
			LWPL_31 <= 0;
		end
		else begin
			DRW <= rd;
			AOW <= AOM;
			IRW <= IRM;
			PC4W <= PC4M;
			LWPL_31 <= lwpl_31_en;
		end
	end

endmodule

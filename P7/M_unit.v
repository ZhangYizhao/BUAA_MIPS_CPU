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
	 input [31:0] IO_Din,
	 input [31:0] cp0_read,
	 input [6:2] ExcCode_M,
	 input EXC_M,
    output reg [31:0] DRW,
    output reg [31:0] PC4W,
    output reg [31:0] AOW,
    output reg [31:0] IRW,
	 output [31:0] cp0_write,
	 output [31:2] IO_Addr,
	 output [31:0] IO_Dout,
	 output IO_WE_M,
	 output [6:2] ExcCode_cp0
    );

	`include "macros.v"

	wire [31:0] wd,rd,rd_in;
	wire [2:0] lstype;
	wire we,is_cp0;
	wire [31:0] instr;
	wire [6:2] ExcCode_in;
	
	dm_M dm_m(
	.Addr(AOM),
	.WD(wd),
	.Clk(Clk),
	.Reset(Reset),
	.WE(we && ~EXC_M),
	.LStype(lstype),
	.Instr(PC4M-4),
	.RD(rd));

	Crtl crtl_m(
	.Instr(IRM),
	.MemWrite(we),
	.LStype(lstype),
	.Cp0_wr(is_cp0));

	exc_M exc_m(
	.Instr(IRM),
	.AOM(AOM),
	.ExcCode_M(ExcCode_M),
	.ExcCode_in(ExcCode_in));
	
	assign wd = (Forward_RT_M_src==`fw_m_wd) ? W_RF_WD_OUT : RTM ;

	assign instr = IRM;
	assign rd_in = (is_cp0) ? cp0_read :
				   ($unsigned(AOM) < 32'h00003000) ? rd :
				   IO_Din;

	assign IO_Addr = AOM[31:2];
	assign IO_Dout = wd;
	assign IO_WE_M = (we && ~EXC_M);
	assign cp0_write = wd;
	assign ExcCode_cp0 = ExcCode_in;
	
	initial begin
		DRW = 32'b0;
		AOW = 32'b0;
		IRW = 32'b0;
		PC4W = 32'b0;
	end

	always @(posedge Clk) begin
		if(Reset || EXC_M) begin
			DRW <= 32'b0;
			AOW <= 32'b0;
			IRW <= 32'b0;
			PC4W <= 32'b0;
		end
		else begin
			DRW <= rd_in;
			AOW <= AOM;
			IRW <= IRM;
			PC4W <= PC4M;
		end
	end

endmodule

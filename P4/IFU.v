`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:48 11/10/2019 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input Clk,
    input Reset,
    input [31:0] Jaddr,
    input PCsrc,
    input Jadr,
    input Jsrc,
    output [31:0] Instruction,
    output [31:0] PC4,
	 output [31:0] InsAddr
    );
	integer i;
	reg [31:0] pc;
	reg [31:0] IM[1023:0];
	wire [31:0] next;
	wire [31:0] RD;
	wire [31:0] RA;
	wire [31:0] jaddrw;
	wire [31:0] jsrcw;
	initial begin
		//IM[0][31:0] = 32'h34670404;
		$readmemh("code.txt",IM);
		pc = 32'h00003000;
	end
	assign RA = pc;
	assign RD = IM[RA[11:2]][31:0];
	assign Instruction = RD;
	assign PC4 = RA + 4;
	assign jaddrw = (Jadr == 1) ? Jaddr : {RA[31:28],{RD[25:0],2'b00}};
	assign jsrcw = (Jsrc==0) ? (RA + 4) : jaddrw;
	assign next = (PCsrc==1) ? (({{16{RD[15]}},RD[15:0]} << 2) + RA + 4) : jsrcw;
	assign InsAddr = pc;
	always@(posedge Clk or posedge Reset) begin
		if(Reset) begin
			pc <= 32'h00003000;
		end
		else begin
			pc <= next;
		end
	end
endmodule


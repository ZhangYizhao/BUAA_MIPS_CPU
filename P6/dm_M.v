`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:53 11/20/2019 
// Design Name: 
// Module Name:    dm_M 
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
module dm_M(
    input [31:0] Addr,
    input [31:0] WD,
    input Clk,
    input Reset,
    input WE,
    input [2:0] LStype,
	 input [31:0] Instr,
    output [31:0] RD
    );
	reg[31:0] DM[0:4095];
	wire[31:0] wdata;
	integer i;
	assign RD = (LStype == 3'b000)?DM[Addr[11:2]]:
				(LStype == 3'b001 && Addr[1] == 0)?{{16{DM[Addr[11:2]][15]}},DM[Addr[11:2]][15:0]}:   //lh
				(LStype == 3'b001 && Addr[1] == 1)?{{16{DM[Addr[11:2]][31]}},DM[Addr[11:2]][31:16]}:
				
				(LStype == 3'b010 && Addr[1] == 0)?{16'h0000,DM[Addr[11:2]][15:0]}:   //lhu
				(LStype == 3'b010 && Addr[1] == 1)?{16'h0000,DM[Addr[11:2]][31:16]}:
				
				(LStype == 3'b011 && Addr[1:0] == 0)?{{24{DM[Addr[11:2]][7]}},DM[Addr[11:2]][7:0]}:  //lb
				(LStype == 3'b011 && Addr[1:0] == 1)?{{24{DM[Addr[11:2]][15]}},DM[Addr[11:2]][15:8]}:
				(LStype == 3'b011 && Addr[1:0] == 2)?{{24{DM[Addr[11:2]][23]}},DM[Addr[11:2]][23:16]}:
				(LStype == 3'b011 && Addr[1:0] == 3)?{{24{DM[Addr[11:2]][31]}},DM[Addr[11:2]][31:24]}:
				
				(LStype == 3'b100 && Addr[1:0] == 0)?{24'h000000,DM[Addr[11:2]][7:0]}:  //lbu
				(LStype == 3'b100 && Addr[1:0] == 1)?{24'h000000,DM[Addr[11:2]][15:8]}:
				(LStype == 3'b100 && Addr[1:0] == 2)?{24'h000000,DM[Addr[11:2]][23:16]}:
				(LStype == 3'b100 && Addr[1:0] == 3)?{24'h000000,DM[Addr[11:2]][31:24]}:
				
				(LStype == 3'b101 && Addr[1:0] == 0)?{DM[Addr[11:2]][7:0],WD[23:0]}:  //lwl
				(LStype == 3'b101 && Addr[1:0] == 1)?{DM[Addr[11:2]][15:0],WD[15:0]}:
				(LStype == 3'b101 && Addr[1:0] == 2)?{DM[Addr[11:2]][23:0],WD[7:0]}:
				(LStype == 3'b101 && Addr[1:0] == 3)?{DM[Addr[11:2]][31:0]}:0;
				
	assign wdata = (LStype == 3'b000)?WD:
					  (LStype == 3'b001 && Addr[1] == 0)?{DM[Addr[11:2]][31:16],WD[15:0]}:
					  (LStype == 3'b001 && Addr[1] == 1)?{WD[15:0],DM[Addr[11:2]][15:0]}:
					  (LStype == 3'b010 && Addr[1:0] == 0)?{DM[Addr[11:2]][31:8],WD[7:0]}:
					  (LStype == 3'b010 && Addr[1:0] == 1)?{DM[Addr[11:2]][31:16],WD[7:0],DM[Addr[11:2]][7:0]}:
					  (LStype == 3'b010 && Addr[1:0] == 2)?{DM[Addr[11:2]][31:24],WD[7:0],DM[Addr[11:2]][15:0]}:
					  (LStype == 3'b010 && Addr[1:0] == 3)?{WD[7:0],DM[Addr[11:2]][23:0]}:0;
	initial begin
		for(i=0;i<4096;i=i+1) begin
				DM[i] <= 32'b0;
			end
	end
	always @(posedge Clk) begin
		if(Reset == 1) begin
			for(i=0;i<1024;i=i+1) begin
				DM[i] <= 32'b0;
			end
		end	
		else if(Reset == 0 && WE == 1) begin
			DM[Addr[11:2]] <= wdata;
			$display("%d@%h: *%h <= %h",$time,Instr,{Addr[31:2],2'b00},wdata);
		end
	end
					  
endmodule
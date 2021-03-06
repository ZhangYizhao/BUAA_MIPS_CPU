`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:05 11/18/2019 
// Design Name: 
// Module Name:    pc_F 
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
module pc_F(
    input [31:0] add4,
    input [31:0] NPC,
    input [31:0] j_r,
    input [1:0] PCsrc,
    input Branch,
    input Clk,
    input Reset,
    input En,
    output reg [31:0] PC
    );
	 
	 `include "macros.v"
	 wire [31:0] PC_sel;
	 assign PC_sel = (PCsrc==`npc_add4) ? add4 :
	 				 (PCsrc==`npc_j) ? NPC :
	 				 (PCsrc==`npc_jr) ? j_r : ((Branch==1) ? NPC : add4);
	
	 initial begin
		PC = 32'h00003000;
	 end

	 always@(posedge Clk) begin
		if(Reset) begin
			PC <= 32'h00003000;
		end
		else begin
			if(En) begin
				PC <= PC_sel;
			end
		end
	 end


endmodule
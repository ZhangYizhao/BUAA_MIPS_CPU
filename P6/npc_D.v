`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:29:01 11/18/2019 
// Design Name: 
// Module Name:    npc_D 
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
module npc_D(
    input NPCsrc,
    input [31:0] PC4,
    input [25:0] I26,
    output [31:0] NPC
    );
	 // 为1时表示更新j型指令,为0时表示更新跳转指令
	 assign NPC = (NPCsrc==1) ? {PC4[31:28],I26[25:0],2'b00} : (PC4 + {{14{I26[15]}},I26[15:0],2'b00});
	 
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:50 11/10/2019 
// Design Name: 
// Module Name:    Crtl 
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
module Crtl(
    input [5:0] OPCode,
    input [5:0] FunctCode,
    output [1:0] MemtoReg,
    output MemWrite,
    output [2:0] Branch,
    output [1:0] ALUsrc,
    output [3:0] ALUop,
    output [1:0] EXTop,
    output [1:0] RegDst,
    output RegWrite,
    output Jadr,
    output Jsrc
    );
    wire addu,subu,ori,lw,sw,beq,lui,jal,jr,nop;
    assign  addu  = (OPCode ==0 && FunctCode == 6'b100001);  //R-Type
    assign  subu  = (OPCode ==0 && FunctCode == 6'b100011);  //R-Type
    assign  ori   = (OPCode == 6'b001101);
    assign  lw    = (OPCode == 6'b100011);
    assign  sw    = (OPCode == 6'b101011);
    assign  beq   = (OPCode == 6'b000100);
    assign  lui   = (OPCode == 6'b001111);
    assign  jal   = (OPCode == 6'b000011);
    assign  jr    = (OPCode ==0 && FunctCode == 6'b001000);
    assign  nop   = (OPCode == 0);

    assign RegWrite = (addu|subu|ori|lw|lui|jal) ;
    assign RegDst = (addu|subu) ? 1 :
                    (jal) ? 2 :
                    0 ;
    assign EXTop = (lw|sw|beq) ? 1 :
                   (lui) ? 2 :
                   0 ;
    assign ALUsrc = (ori|lw|sw|lui) ? 1 : 0;
    assign ALUop = (subu|beq) ? 1 :
                   (ori|lui) ? 2 :
                   0 ;
    assign Branch = (beq) ? 1:0 ;
    assign MemWrite = (sw) ? 1:0 ;
    assign MemtoReg = (lw) ? 1 :
                      (jal) ? 2:0 ;
    assign Jsrc = (jal|jr) ? 1:0 ;
    assign Jadr = (jr) ? 1:0;
endmodule
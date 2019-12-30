`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:34:32 11/20/2019 
// Design Name: 
// Module Name:    W_unit 
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
module W_unit(
    input [31:0] PC4W,
    input [31:0] DRW,
    input [31:0] AOW,
    input [31:0] IRW,
	 input [31:0] RTW,
    output [31:0] W_RF_WD_OUT,
    output [4:0] W_RF_A3_OUT,
    output RegWrite
    );
     
    `include "macros.v"
    
    wire [1:0] memtoreg,regdst;

    Crtl crtl_w(
    .Instr(IRW),
    .MemtoReg(memtoreg),
    .RegDst(regdst),
    .RegWrite(RegWrite));


    assign W_RF_WD_OUT = (memtoreg==2'b00) ? AOW :
                           (memtoreg==2'b01) ? DRW :
                           (memtoreg==2'b10) ? PC4W + 4 : AOW;
    

    assign W_RF_A3_OUT = (regdst==`RegDst_A3) ? IRW[15:11] :
                           (regdst==`RegDst_A2) ? IRW[20:16] : 
                           (regdst==`RegDst_ra) ? 5'b11111 : 0 ;


endmodule

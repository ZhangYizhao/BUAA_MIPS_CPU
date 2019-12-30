`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:41 11/23/2019 
// Design Name: 
// Module Name:    ATdecoder 
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
module ATdecoder(
	input [31:0] Instr,
	output [4:0] RS,
	output [4:0] RT,
	output [4:0] WR,
	output [3:0] Instype
	);

	`include "macros.v"

    wire addu,subu,ori,lw,sw,beq,lui,jal,jr,nop,addiu,slt,jalr;
	 wire [5:0] OPCode,FunctCode;
	 assign OPCode = Instr[31:26];
	 assign FunctCode = Instr[5:0];
	
    assign  addu  = (OPCode ==0 && FunctCode == `addu);  //R-Type
    assign  subu  = (OPCode ==0 && FunctCode == `subu);  //R-Type
    assign  ori   = (OPCode == `ori);
    assign  lw    = (OPCode == `lw);
    assign  sw    = (OPCode == `sw);
    assign  beq   = (OPCode == `beq);
    assign  lui   = (OPCode == `lui);
    assign  j = (OPCode == `j);
    assign  jal   = (OPCode == `jal);
    assign  jr    = (OPCode ==0 && FunctCode == `jr);
    assign  jalr = (OPCode == 0 && FunctCode == `jalr);
    assign  nop   = (OPCode == `nop && FunctCode == `nop);
	assign addiu = (OPCode == `addiu) ? 1 : 0;
	assign slt = (OPCode == 0 && FunctCode ==`slt) ? 1 : 0;

	assign Instype = (addu|subu|slt) ? `it_cal_r :
					 (addiu|ori|lui) ? `it_cal_i :
					 (lw) ? `it_load :
					 (sw) ? `it_store :
					 (beq) ? `it_branch :
					 (jr) ? `it_jr :
					 (jal) ? `it_jal :
					 (jalr) ? `it_jalr : `it_nop ;

	assign RS = (Instype==`it_jal || Instype==`it_nop) ? 0 : Instr[25:21] ; 
	//由于部分指令为读RT，部分为写Rt,为了避免转发控制的冲突，将写RT的指令转移到WR上
	assign RT = (Instype==`it_cal_r || Instype==`it_store || Instype==`it_branch ) ? Instr[20:16] : 0;


	assign WR = (Instype==`it_cal_r || Instype==`it_jalr) ? Instr[15:11] :
			    (Instype==`it_cal_i || Instype==`it_load) ? Instr[20:16] :
			    (Instype==`it_jal) ? 5'b11111 : 0 ;

	endmodule

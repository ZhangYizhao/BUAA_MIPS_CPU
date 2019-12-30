`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:48 11/10/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
	input clk,
	input reset);
	wire [31:0] jaddr,pcplus4,inst,pcaddr,wrdata,rd1,rd2,rdata,out,srca,srcb,aluresult;
	wire [15:0] in;
	wire [5:0] opcode,functcode;
	wire [4:0] ra1,ra2,wraddr,shift;
	wire [1:0] memtoreg,alusrc,extop,regdst;
	wire [2:0] branch;
	wire [3:0] aluop;
	wire regwrite,pcsrc,jadr,jsrc,memwrite,bg,eq,sm;

	assign opcode = inst[31:26];
	assign functcode = inst[5:0];
	assign ra1 = inst[25:21];
	assign ra2 = inst[20:16];
	assign wraddr = (regdst==0) ? inst[20:16] :
					(regdst==1) ? inst[15:11] :
					(regdst==2) ? 31:0;
	assign in = inst[15:0];
	assign srca = rd1;
	assign srcb = (alusrc==0) ? rd2 :
				  (alusrc==1) ? out : 0;
	assign shift = in[10:6];
	assign pcsrc = (branch==1) ? eq :
				   (branch==2) ? (bg|eq) :
				   (branch==3) ? bg :
				   (branch==4) ? (eq|sm) :
				   (branch==5) ? sm : 
				   (branch==6) ? (bg|sm) : 0;
   assign wrdata = (memtoreg==0) ? aluresult :
    				(memtoreg==1) ? rdata :
    				(memtoreg==2) ? pcplus4 : 0;
	assign jaddr = rd1;

	IFU ifu( .Jsrc(jsrc), .Jadr(jadr), .Jaddr(jaddr), .Clk(clk), .Reset(reset),
			 .PC4(pcplus4), .Instruction(inst), .InsAddr(pcaddr), .PCsrc(pcsrc));

	Crtl cu( .OPCode(opcode), .FunctCode(functcode), .MemtoReg(memtoreg), .MemWrite(memwrite),
		     .Branch(branch), .ALUsrc(alusrc), .ALUop(aluop), .EXTop(extop), .RegDst(regdst),
		     .RegWrite(regwrite), .Jadr(jadr), .Jsrc(jsrc));

	GRF grf( .R1(ra1), .R2(ra2), .Waddr(wraddr), .WD(wrdata), .Clk(clk), .En(regwrite), .Reset(reset),
		     .InsAddr(pcaddr), .RD1(rd1), .RD2(rd2));

	EXT ext( .In(in), .EXTop(extop), .Out(out));

	ALU alu( .SrcA(srca), .SrcB(srcb), .Shift(shift), .ALUop(aluop), .ALUresult(aluresult), 
			 .bigger(bg), .equal(eq), .smaller(sm));

	DM dm( .Addr(aluresult), .WD(rd2), .Clk(clk), .Reset(reset), .WE(memwrite), .LStype(3'b000),
		   .InsAddr(pcaddr), .RD(rdata));

endmodule

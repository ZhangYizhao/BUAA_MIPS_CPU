`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:59 12/06/2019 
// Design Name: 
// Module Name:    md_E 
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
module md_E(
    input Start,
    input Clk,
    input Reset,
    input [31:0] D1,
    input [31:0] D2,
    input [2:0] opsrc,
	 input [1:0] wsrc,
    output [31:0] highout,
    output [31:0] lowout,
    output reg Busy
    );

	`include "macros.v"

	reg [4:0] i;
	reg [2:0] opreg;
	reg [31:0] data1,data2;
	reg [31:0] HI,LO;
	//reg [31:0] hi_temp,lo_temp;
	assign highout = HI;
	assign lowout = LO;
	
	initial begin
		opreg = 0;
		i = 0;
		Busy = 0;
		HI = 0;
		LO = 0;
		data1 = 0;
		data2 = 0;
	end

	always @(posedge Clk) begin
		if(Reset) begin
		   opreg <= 0;
		   i<=0;
			HI <= 0;
			LO <= 0;
			Busy <= 0;
			data1 <= 0;
			data2 <= 0;
		end
		else begin
			if(Start==1) begin
				Busy <= 1;
				data1 <= D1;
				data2 <= D2;
				opreg <= opsrc;
				if(opsrc==`alu_mult || opsrc==`alu_multu || opsrc==`alu_madd) begin
					i<=5;
				end
				if(opsrc==`alu_div || opsrc==`alu_divu) begin
					i<=10;				
				end
			end

			if(Start==0) begin
				if(Busy==1) begin
					i <= i - 1;
				end
				if(i==1) begin
					Busy <= 0;
					data1 <= 0;
					data2 <= 0;
					case(opreg)
						`alu_mult:begin
							{HI,LO} <= $signed(data1) * $signed(data2);
						end
						`alu_multu:begin
							{HI,LO} <= data1*data2;
						end
						`alu_div:begin
							if(data2!=0) begin
								HI <= $signed(data1) % $signed(data2);
								LO <= $signed(data1) / $signed(data2);
							end
						end
						`alu_divu:begin
							if(data2!=0) begin
								HI <= data1 % data2;
								LO <= data1 / data2;
							end
						end
						`alu_madd:begin
							{HI,LO} = ($signed(data1) * $signed(data2)) + $signed({highout,lowout}) ; //由于乘法结果内部并不一定是以64位存储，若果不对后者加符号转换，会对前者乘法结果默认做零扩展
						end
					endcase
				end
				if(i==0 && wsrc==1) begin
					HI<=D1;
				end
				if(i==0 && wsrc==2) begin
					LO<=D1;
				end			
			end
		end
	end
endmodule
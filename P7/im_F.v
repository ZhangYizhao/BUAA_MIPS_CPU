`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:49:26 11/18/2019 
// Design Name: 
// Module Name:    im_F 
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
module im_F(
    input [31:0] addr,
	 output [31:0] instr
    );
	 
	reg [31:0] IM[4095:0];
	integer i;
	wire [31:0] addr1;
	assign addr1 = addr[13:2];
	initial begin
		for(i=0; i<4096; i=i+1) begin
			IM[i] = 32'b0;
		end
		$readmemh("code.txt",IM);
		$readmemh("code_handler.txt", IM, 1120, 2047);
	end
	
	assign instr = IM[addr1][31:0];

endmodule

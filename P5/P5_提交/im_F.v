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
    input [11:2] addr,
	 output [31:0] instr
    );
	 
	reg [31:0] IM[1023:0];
	integer i;
	
	initial begin
		for(i=0; i<1024; i=i+1) begin
			IM[i] = 32'b0;
		end
		$readmemh("code.txt",IM);
	end
	
	assign instr = IM[addr][31:0];

endmodule

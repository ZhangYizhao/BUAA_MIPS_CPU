`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:35:50 12/25/2019 
// Design Name: 
// Module Name:    Exception 
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
module Exception(
    input Clk,
    input Reset,
    input BD_in,
    input [31:0] IRM,
    input [31:0] PC4M,
    input [31:0] WD_M,
    input [31:0] IRW,
    input [6:2] ExcCode_M,
    input [7:2] HWInt,
    output [31:0] EPC_out,
    output [31:0] CP0_out,
    output EXL_out
    );

	 `include "macros.v"

	 wire [31:0] instr;
    // SR
    reg [7:2] IM7_2;
    reg EXL,IE;

    // Cause

    reg [7:2] IP7_2;
    reg [6:2] ExcCode;
    reg BD;

    // EPC
    reg [31:2] EPC;
    
    // PrID
    reg [31:0] PrID;

    wire Int_Req,EXLset,cp0_we,is_eret;
    wire [6:2] ExcCode_in;
    wire [4:0] Addr;
	 wire BD_new;
	 
	 assign BD_new = (((`beq|`bgez|`bgtz|`blez|`bltz|`bne)&& BD_in)||`jalr||`jal||`j||`jr) ;

	 assign instr = IRW; 
    assign Addr = IRM[15:11] ;
 

    assign EXLset = (((~EXL) && (ExcCode_M != 5'b11111)) || Int_Req) ? 1:0;
    assign ExcCode_in = (Int_Req) ? 5'b00000 : ExcCode_M; //中断和异常同时提交时，先处理中断

    assign EXL_out = EXLset;
    assign EPC_out = {EPC,2'b00};

    assign CP0_out = ({1, Addr} == `cp0_sr) ? {16'b0, IM7_2[7:2], 8'b0, EXL, IE} :
                  ({1, Addr} == `cp0_cause) ? {BD, 15'b0, IP7_2[7:2], 3'b0, ExcCode[6:2], 2'b0} :
                  ({1, Addr} == `cp0_epc) ? {EPC, 2'b00} :
                  ({1, Addr} == `cp0_prid) ? PrID :
                  `debug_cp0;

    assign Int_Req = ((HWInt & IM7_2) && IE && (~EXL)) ? 1:0;

    integer i;
    initial begin 
        IM7_2 = 6'b0;
        EXL = 0;
        IE = 0;
        BD = 0;
        IP7_2 = 6'b0;
        ExcCode = 5'b0;
        EPC = 0;
        PrID = 32'b0;
    end

    always @(posedge Clk) begin
        if(Reset) begin
            IM7_2 <= 6'b0;
            EXL <= 0;
            IE <= 0;
            BD <= 0;
            IP7_2 <= 6'b0;
            ExcCode <= 5'b11111;
            EPC <= 0;
            PrID <= 32'b0;
        end
        else begin
            if(~EXL) begin
                IP7_2 <= HWInt;
            end
            if(EXLset || Int_Req) begin
                EXL <= 1;
                BD <= BD_new ;
                ExcCode <= ExcCode_in ;

                EPC <= ((BD_new)? PC4M - 8 : PC4M - 4) >> 2;
            end
            else if(is_eret) begin
                EXL <= 0;
            end
            else if(cp0_we) begin
                case({1,Addr}) 
                    `cp0_sr : begin
                        IM7_2 <= WD_M[15:10];
                        EXL <= WD_M[1];
                        IE <= WD_M[0];
                    end
                    `cp0_epc : begin
                        EPC <= WD_M[31:2];
                    end
                endcase
            end
        end
    end


    Crtl ctrl(
    .Instr(IRM),
    .Cp0_we(cp0_we),
    .IS_eret(is_eret)
    );


endmodule
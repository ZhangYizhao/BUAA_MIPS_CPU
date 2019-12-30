`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:09 11/29/2019 
// Design Name: 
// Module Name:    Hazard_unit 
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
module Hazard_unit(
    input [31:0] IRD,
    input Clk,
    input Reset,
    output [2:0] Forward_RS_D_src,
    output [2:0] Forward_RT_D_src,
    output [1:0] Forward_RS_E_src,
    output [1:0] Forward_RT_E_src,
    output  Forward_RT_M_src,
    output ClearE,
    output PauseF,
    output PauseD
    );

    `include "macros.v"

    wire pause;
    wire [3:0] InstypeD;
    reg [3:0] InstypeE,InstypeM,InstypeW;
    wire [4:0] RSD,RTD,WRD;
    reg [4:0] RSE,RTE,WRE,RSM,RTM,WRM,RSW,RTW,WRW;



    ATdecoder atdecoder(
    .Instr(IRD),
    .RS(RSD),
    .RT(RTD),
    .WR(WRD),
    .Instype(InstypeD));

    assign ClearE = pause;
    assign PauseD = pause;
    assign PauseF = pause;
    
    assign pause = (InstypeD==`it_cal_r && InstypeE == `it_load && ((RSD!=0 && RSD == WRE) || (RTD!=0 && RTD == WRE))) || 

                   (InstypeD==`it_cal_i && InstypeE == `it_load && RSD!=0 && RSD == WRE) ||

                   (InstypeD==`it_branch && InstypeE == `it_cal_i && ((RSD!=0 && RSD == WRE) || (RTD!=0 && RTD == WRE))) ||
                   (InstypeD==`it_branch && InstypeE == `it_cal_r && ((RSD!=0 && RSD == WRE) || (RTD!=0 && RTD == WRE))) ||
                   (InstypeD==`it_branch && InstypeE == `it_load &&  ((RSD!=0 && RSD == WRE) || (RTD!=0 && RTD == WRE))) ||
                   (InstypeD==`it_branch && InstypeM == `it_load &&  ((RSD!=0 && RSD == WRM) || (RTD!=0 && RTD == WRM))) ||

                   (InstypeD==`it_load && InstypeE == `it_load && RSD!=0 && RSD == WRE) ||

                   (InstypeD==`it_store && InstypeE == `it_load && RSD!=0 && RSD == WRE) ||

                   (InstypeD==`it_jr && InstypeE == `it_cal_i && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jr && InstypeE == `it_cal_r && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jr && InstypeE == `it_load  && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jr && InstypeM == `it_load  && RSD!=0 && RSD == WRM) ||

                   (InstypeD==`it_jalr && InstypeE == `it_cal_i && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jalr && InstypeE == `it_cal_r && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jalr && InstypeE == `it_load  && RSD!=0 && RSD == WRE) ||
                   (InstypeD==`it_jalr && InstypeM == `it_load  && RSD!=0 && RSD == WRM);

    

    assign Forward_RS_D_src = (RSD!=0 && WRE!=0 && RSD == WRE && 
                                    (InstypeE==`it_jal || InstypeE == `it_jalr)) ? `fw_d_pc4e :
                              (RSD!=0 && WRM!=0 && RSD == WRM && 
                                    (InstypeM==`it_jal || InstypeM == `it_jalr)) ? `fw_d_pc4m :
                              (RSD!=0 && WRM!=0 && RSD == WRM && 
                                    (InstypeM==`it_cal_i || InstypeM == `it_cal_r)) ? `fw_d_ao :
                              (RSD!=0 && WRW!=0 && RSD == WRW && 
                                    (InstypeW==`it_jal || InstypeW == `it_jalr || InstypeW== `it_load || InstypeW== `it_cal_r || InstypeW==`it_cal_i)) ? `fw_d_wd : `fw_d_rd ;

    assign Forward_RT_D_src = (RTD!=0 && WRE!=0 && RTD == WRE && 
                                    (InstypeE==`it_jal || InstypeE == `it_jalr)) ? `fw_d_pc4e :
                              (RTD!=0 && WRM!=0 && RTD == WRM && 
                                    (InstypeM==`it_jal || InstypeM == `it_jalr)) ? `fw_d_pc4m :
                              (RTD!=0 && WRM!=0 && RTD == WRM && 
                                    (InstypeM==`it_cal_i || InstypeM == `it_cal_r)) ? `fw_d_ao :
                              (RTD!=0 && WRW!=0 && RTD == WRW && 
                                    (InstypeW==`it_jal || InstypeW == `it_jalr || InstypeW== `it_load || InstypeW== `it_cal_r || InstypeW==`it_cal_i)) ? `fw_d_wd : `fw_d_rd ;

    assign Forward_RS_E_src = (RSE!=0 && WRM!=0 && RSE == WRM && 
                                    (InstypeM==`it_jal || InstypeM == `it_jalr)) ? `fw_e_pc4m :
                              (RSE!=0 && WRM!=0 && RSE == WRM && 
                                    (InstypeM==`it_cal_i || InstypeM == `it_cal_r)) ? `fw_e_ao :
                              (RSE!=0 && WRW!=0 && RSE == WRW && 
                                    (InstypeW==`it_jal || InstypeW == `it_jalr || InstypeW== `it_load || InstypeW== `it_cal_r || InstypeW==`it_cal_i)) ? `fw_e_wd : `fw_e_rd ;
    
    assign Forward_RT_E_src = (RTE!=0 && WRM!=0 && RTE == WRM && 
                                    (InstypeM==`it_jal || InstypeM == `it_jalr)) ? `fw_e_pc4m :
                              (RTE!=0 && WRM!=0 && RTE == WRM && 
                                    (InstypeM==`it_cal_i || InstypeM == `it_cal_r)) ? `fw_e_ao :
                              (RTE!=0 && WRW!=0 && RTE == WRW && 
                                    (InstypeW==`it_jal || InstypeW == `it_jalr || InstypeW== `it_load || InstypeW== `it_cal_r || InstypeW==`it_cal_i)) ? `fw_e_wd : `fw_e_rd ;         

    assign Forward_RT_M_src = (RTM!=0 && WRW!=0 && RTM == WRW && 
                                    (InstypeW==`it_jal || InstypeW == `it_jalr || InstypeW== `it_load || InstypeW== `it_cal_r || InstypeW==`it_cal_i)) ? `fw_m_wd : `fw_m_rd ;             
    

    initial begin
        RSE=0;RTE=0;WRE=0;
        RSM=0;RTM=0;WRM=0;
        RSW=0;RTW=0;WRW=0;
        InstypeE=`it_nop;
        InstypeM=`it_nop;
        InstypeW=`it_nop;
    end

    always @(posedge Clk) begin
        if (Reset) begin
            RSE<=0;RTE<=0;WRE<=0;
            RSM<=0;RTM<=0;WRM<=0;
            RSW<=0;RTW<=0;WRW<=0;
            InstypeE<=`it_nop;
            InstypeM<=`it_nop;
            InstypeW<=`it_nop;

            // reset
        end
        else begin
            if(pause) begin
                RSE<=0;RTE<=0;WRE<=0;
                RSM<=RSE;RTM<=RTE;WRM<=WRE;
                RSW<=RSM;RTW<=RTM;WRW<=WRM;
                InstypeE<=`it_nop;
                InstypeM<=InstypeE;
                InstypeW<=InstypeM;
            end
            else begin
                RSE<=RSD;RTE<=RTD;WRE<=WRD;
                RSM<=RSE;RTM<=RTE;WRM<=WRE;
                RSW<=RSM;RTW<=RTM;WRW<=WRM;
                InstypeE<=InstypeD;
                InstypeM<=InstypeE;
                InstypeW<=InstypeM;
            end 
        end
    end






endmodule

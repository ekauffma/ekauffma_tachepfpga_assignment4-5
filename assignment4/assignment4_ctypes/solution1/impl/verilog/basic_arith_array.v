// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Version: 2021.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="basic_arith_array_basic_arith_array,hls_ip_2021_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7v585t-ffg1761-2,HLS_INPUT_CLOCK=25.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.658000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=11294,HLS_SYN_LUT=8809,HLS_VERSION=2021_1}" *)

module basic_arith_array (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        inA,
        inB,
        inC,
        inD,
        out1,
        out1_ap_vld,
        out2,
        out2_ap_vld,
        out3,
        out3_ap_vld,
        out4,
        out4_ap_vld,
        size
);

parameter    ap_ST_fsm_state1 = 72'd1;
parameter    ap_ST_fsm_state2 = 72'd2;
parameter    ap_ST_fsm_state3 = 72'd4;
parameter    ap_ST_fsm_state4 = 72'd8;
parameter    ap_ST_fsm_state5 = 72'd16;
parameter    ap_ST_fsm_state6 = 72'd32;
parameter    ap_ST_fsm_state7 = 72'd64;
parameter    ap_ST_fsm_state8 = 72'd128;
parameter    ap_ST_fsm_state9 = 72'd256;
parameter    ap_ST_fsm_state10 = 72'd512;
parameter    ap_ST_fsm_state11 = 72'd1024;
parameter    ap_ST_fsm_state12 = 72'd2048;
parameter    ap_ST_fsm_state13 = 72'd4096;
parameter    ap_ST_fsm_state14 = 72'd8192;
parameter    ap_ST_fsm_state15 = 72'd16384;
parameter    ap_ST_fsm_state16 = 72'd32768;
parameter    ap_ST_fsm_state17 = 72'd65536;
parameter    ap_ST_fsm_state18 = 72'd131072;
parameter    ap_ST_fsm_state19 = 72'd262144;
parameter    ap_ST_fsm_state20 = 72'd524288;
parameter    ap_ST_fsm_state21 = 72'd1048576;
parameter    ap_ST_fsm_state22 = 72'd2097152;
parameter    ap_ST_fsm_state23 = 72'd4194304;
parameter    ap_ST_fsm_state24 = 72'd8388608;
parameter    ap_ST_fsm_state25 = 72'd16777216;
parameter    ap_ST_fsm_state26 = 72'd33554432;
parameter    ap_ST_fsm_state27 = 72'd67108864;
parameter    ap_ST_fsm_state28 = 72'd134217728;
parameter    ap_ST_fsm_state29 = 72'd268435456;
parameter    ap_ST_fsm_state30 = 72'd536870912;
parameter    ap_ST_fsm_state31 = 72'd1073741824;
parameter    ap_ST_fsm_state32 = 72'd2147483648;
parameter    ap_ST_fsm_state33 = 72'd4294967296;
parameter    ap_ST_fsm_state34 = 72'd8589934592;
parameter    ap_ST_fsm_state35 = 72'd17179869184;
parameter    ap_ST_fsm_state36 = 72'd34359738368;
parameter    ap_ST_fsm_state37 = 72'd68719476736;
parameter    ap_ST_fsm_state38 = 72'd137438953472;
parameter    ap_ST_fsm_state39 = 72'd274877906944;
parameter    ap_ST_fsm_state40 = 72'd549755813888;
parameter    ap_ST_fsm_state41 = 72'd1099511627776;
parameter    ap_ST_fsm_state42 = 72'd2199023255552;
parameter    ap_ST_fsm_state43 = 72'd4398046511104;
parameter    ap_ST_fsm_state44 = 72'd8796093022208;
parameter    ap_ST_fsm_state45 = 72'd17592186044416;
parameter    ap_ST_fsm_state46 = 72'd35184372088832;
parameter    ap_ST_fsm_state47 = 72'd70368744177664;
parameter    ap_ST_fsm_state48 = 72'd140737488355328;
parameter    ap_ST_fsm_state49 = 72'd281474976710656;
parameter    ap_ST_fsm_state50 = 72'd562949953421312;
parameter    ap_ST_fsm_state51 = 72'd1125899906842624;
parameter    ap_ST_fsm_state52 = 72'd2251799813685248;
parameter    ap_ST_fsm_state53 = 72'd4503599627370496;
parameter    ap_ST_fsm_state54 = 72'd9007199254740992;
parameter    ap_ST_fsm_state55 = 72'd18014398509481984;
parameter    ap_ST_fsm_state56 = 72'd36028797018963968;
parameter    ap_ST_fsm_state57 = 72'd72057594037927936;
parameter    ap_ST_fsm_state58 = 72'd144115188075855872;
parameter    ap_ST_fsm_state59 = 72'd288230376151711744;
parameter    ap_ST_fsm_state60 = 72'd576460752303423488;
parameter    ap_ST_fsm_state61 = 72'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 72'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 72'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 72'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 72'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 72'd36893488147419103232;
parameter    ap_ST_fsm_state67 = 72'd73786976294838206464;
parameter    ap_ST_fsm_state68 = 72'd147573952589676412928;
parameter    ap_ST_fsm_state69 = 72'd295147905179352825856;
parameter    ap_ST_fsm_state70 = 72'd590295810358705651712;
parameter    ap_ST_fsm_state71 = 72'd1180591620717411303424;
parameter    ap_ST_fsm_state72 = 72'd2361183241434822606848;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] inA;
input  [15:0] inB;
input  [31:0] inC;
input  [63:0] inD;
output  [31:0] out1;
output   out1_ap_vld;
output  [31:0] out2;
output   out2_ap_vld;
output  [31:0] out3;
output   out3_ap_vld;
output  [63:0] out4;
output   out4_ap_vld;
input  [31:0] size;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out1_ap_vld;
reg out2_ap_vld;
reg out3_ap_vld;
reg out4_ap_vld;

(* fsm_encoding = "none" *) reg   [71:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire  signed [63:0] conv_fu_133_p1;
reg  signed [63:0] conv_reg_227;
wire    ap_CS_fsm_state4;
wire  signed [31:0] sext_ln17_fu_137_p1;
reg  signed [31:0] sext_ln17_reg_232;
wire  signed [31:0] sext_ln18_fu_146_p1;
reg  signed [31:0] sext_ln18_reg_237;
wire  signed [31:0] sext_ln19_fu_155_p1;
reg  signed [31:0] sext_ln19_reg_242;
wire  signed [63:0] sext_ln20_fu_159_p1;
reg  signed [63:0] sext_ln20_reg_257;
reg   [63:0] i_fu_58;
wire   [63:0] i_2_fu_170_p2;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln16_fu_165_p2;
wire   [31:0] grp_fu_176_p2;
wire    ap_CS_fsm_state40;
wire   [63:0] grp_fu_181_p2;
wire    ap_CS_fsm_state72;
wire  signed [7:0] sext_ln17_fu_137_p0;
wire  signed [7:0] sext_ln17_1_fu_140_p0;
wire  signed [15:0] sext_ln17_3_fu_143_p0;
wire  signed [23:0] grp_fu_191_p2;
wire  signed [16:0] sext_ln17_3_fu_143_p1;
wire  signed [16:0] sext_ln17_1_fu_140_p1;
wire   [16:0] add_ln18_fu_149_p2;
wire  signed [7:0] sext_ln20_fu_159_p0;
wire  signed [7:0] grp_fu_176_p1;
wire  signed [7:0] grp_fu_181_p1;
reg   [71:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ST_fsm_state9_blk;
wire    ap_ST_fsm_state10_blk;
wire    ap_ST_fsm_state11_blk;
wire    ap_ST_fsm_state12_blk;
wire    ap_ST_fsm_state13_blk;
wire    ap_ST_fsm_state14_blk;
wire    ap_ST_fsm_state15_blk;
wire    ap_ST_fsm_state16_blk;
wire    ap_ST_fsm_state17_blk;
wire    ap_ST_fsm_state18_blk;
wire    ap_ST_fsm_state19_blk;
wire    ap_ST_fsm_state20_blk;
wire    ap_ST_fsm_state21_blk;
wire    ap_ST_fsm_state22_blk;
wire    ap_ST_fsm_state23_blk;
wire    ap_ST_fsm_state24_blk;
wire    ap_ST_fsm_state25_blk;
wire    ap_ST_fsm_state26_blk;
wire    ap_ST_fsm_state27_blk;
wire    ap_ST_fsm_state28_blk;
wire    ap_ST_fsm_state29_blk;
wire    ap_ST_fsm_state30_blk;
wire    ap_ST_fsm_state31_blk;
wire    ap_ST_fsm_state32_blk;
wire    ap_ST_fsm_state33_blk;
wire    ap_ST_fsm_state34_blk;
wire    ap_ST_fsm_state35_blk;
wire    ap_ST_fsm_state36_blk;
wire    ap_ST_fsm_state37_blk;
wire    ap_ST_fsm_state38_blk;
wire    ap_ST_fsm_state39_blk;
wire    ap_ST_fsm_state40_blk;
wire    ap_ST_fsm_state41_blk;
wire    ap_ST_fsm_state42_blk;
wire    ap_ST_fsm_state43_blk;
wire    ap_ST_fsm_state44_blk;
wire    ap_ST_fsm_state45_blk;
wire    ap_ST_fsm_state46_blk;
wire    ap_ST_fsm_state47_blk;
wire    ap_ST_fsm_state48_blk;
wire    ap_ST_fsm_state49_blk;
wire    ap_ST_fsm_state50_blk;
wire    ap_ST_fsm_state51_blk;
wire    ap_ST_fsm_state52_blk;
wire    ap_ST_fsm_state53_blk;
wire    ap_ST_fsm_state54_blk;
wire    ap_ST_fsm_state55_blk;
wire    ap_ST_fsm_state56_blk;
wire    ap_ST_fsm_state57_blk;
wire    ap_ST_fsm_state58_blk;
wire    ap_ST_fsm_state59_blk;
wire    ap_ST_fsm_state60_blk;
wire    ap_ST_fsm_state61_blk;
wire    ap_ST_fsm_state62_blk;
wire    ap_ST_fsm_state63_blk;
wire    ap_ST_fsm_state64_blk;
wire    ap_ST_fsm_state65_blk;
wire    ap_ST_fsm_state66_blk;
wire    ap_ST_fsm_state67_blk;
wire    ap_ST_fsm_state68_blk;
wire    ap_ST_fsm_state69_blk;
wire    ap_ST_fsm_state70_blk;
wire    ap_ST_fsm_state71_blk;
wire    ap_ST_fsm_state72_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 72'd1;
end

basic_arith_array_sdiv_32ns_8s_32_36_1 #(
    .ID( 1 ),
    .NUM_STAGE( 36 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 32 ))
sdiv_32ns_8s_32_36_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(inC),
    .din1(grp_fu_176_p1),
    .ce(1'b1),
    .dout(grp_fu_176_p2)
);

basic_arith_array_srem_64ns_8s_64_68_1 #(
    .ID( 1 ),
    .NUM_STAGE( 68 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 64 ))
srem_64ns_8s_64_68_1_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(inD),
    .din1(grp_fu_181_p1),
    .ce(1'b1),
    .dout(grp_fu_181_p2)
);

basic_arith_array_mul_mul_16s_8s_24_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 24 ))
mul_mul_16s_8s_24_4_1_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(inB),
    .din1(inA),
    .ce(1'b1),
    .dout(grp_fu_191_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_fu_58 <= 64'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd0))) begin
        i_fu_58 <= i_2_fu_170_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        conv_reg_227 <= conv_fu_133_p1;
        sext_ln17_reg_232 <= sext_ln17_fu_137_p1;
        sext_ln18_reg_237 <= sext_ln18_fu_146_p1;
        sext_ln19_reg_242 <= sext_ln19_fu_155_p1;
        sext_ln20_reg_257 <= sext_ln20_fu_159_p1;
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

assign ap_ST_fsm_state11_blk = 1'b0;

assign ap_ST_fsm_state12_blk = 1'b0;

assign ap_ST_fsm_state13_blk = 1'b0;

assign ap_ST_fsm_state14_blk = 1'b0;

assign ap_ST_fsm_state15_blk = 1'b0;

assign ap_ST_fsm_state16_blk = 1'b0;

assign ap_ST_fsm_state17_blk = 1'b0;

assign ap_ST_fsm_state18_blk = 1'b0;

assign ap_ST_fsm_state19_blk = 1'b0;

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state20_blk = 1'b0;

assign ap_ST_fsm_state21_blk = 1'b0;

assign ap_ST_fsm_state22_blk = 1'b0;

assign ap_ST_fsm_state23_blk = 1'b0;

assign ap_ST_fsm_state24_blk = 1'b0;

assign ap_ST_fsm_state25_blk = 1'b0;

assign ap_ST_fsm_state26_blk = 1'b0;

assign ap_ST_fsm_state27_blk = 1'b0;

assign ap_ST_fsm_state28_blk = 1'b0;

assign ap_ST_fsm_state29_blk = 1'b0;

assign ap_ST_fsm_state2_blk = 1'b0;

assign ap_ST_fsm_state30_blk = 1'b0;

assign ap_ST_fsm_state31_blk = 1'b0;

assign ap_ST_fsm_state32_blk = 1'b0;

assign ap_ST_fsm_state33_blk = 1'b0;

assign ap_ST_fsm_state34_blk = 1'b0;

assign ap_ST_fsm_state35_blk = 1'b0;

assign ap_ST_fsm_state36_blk = 1'b0;

assign ap_ST_fsm_state37_blk = 1'b0;

assign ap_ST_fsm_state38_blk = 1'b0;

assign ap_ST_fsm_state39_blk = 1'b0;

assign ap_ST_fsm_state3_blk = 1'b0;

assign ap_ST_fsm_state40_blk = 1'b0;

assign ap_ST_fsm_state41_blk = 1'b0;

assign ap_ST_fsm_state42_blk = 1'b0;

assign ap_ST_fsm_state43_blk = 1'b0;

assign ap_ST_fsm_state44_blk = 1'b0;

assign ap_ST_fsm_state45_blk = 1'b0;

assign ap_ST_fsm_state46_blk = 1'b0;

assign ap_ST_fsm_state47_blk = 1'b0;

assign ap_ST_fsm_state48_blk = 1'b0;

assign ap_ST_fsm_state49_blk = 1'b0;

assign ap_ST_fsm_state4_blk = 1'b0;

assign ap_ST_fsm_state50_blk = 1'b0;

assign ap_ST_fsm_state51_blk = 1'b0;

assign ap_ST_fsm_state52_blk = 1'b0;

assign ap_ST_fsm_state53_blk = 1'b0;

assign ap_ST_fsm_state54_blk = 1'b0;

assign ap_ST_fsm_state55_blk = 1'b0;

assign ap_ST_fsm_state56_blk = 1'b0;

assign ap_ST_fsm_state57_blk = 1'b0;

assign ap_ST_fsm_state58_blk = 1'b0;

assign ap_ST_fsm_state59_blk = 1'b0;

assign ap_ST_fsm_state5_blk = 1'b0;

assign ap_ST_fsm_state60_blk = 1'b0;

assign ap_ST_fsm_state61_blk = 1'b0;

assign ap_ST_fsm_state62_blk = 1'b0;

assign ap_ST_fsm_state63_blk = 1'b0;

assign ap_ST_fsm_state64_blk = 1'b0;

assign ap_ST_fsm_state65_blk = 1'b0;

assign ap_ST_fsm_state66_blk = 1'b0;

assign ap_ST_fsm_state67_blk = 1'b0;

assign ap_ST_fsm_state68_blk = 1'b0;

assign ap_ST_fsm_state69_blk = 1'b0;

assign ap_ST_fsm_state6_blk = 1'b0;

assign ap_ST_fsm_state70_blk = 1'b0;

assign ap_ST_fsm_state71_blk = 1'b0;

assign ap_ST_fsm_state72_blk = 1'b0;

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

assign ap_ST_fsm_state9_blk = 1'b0;

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd0))) begin
        out1_ap_vld = 1'b1;
    end else begin
        out1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd0))) begin
        out2_ap_vld = 1'b1;
    end else begin
        out2_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state40)) begin
        out3_ap_vld = 1'b1;
    end else begin
        out3_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state72)) begin
        out4_ap_vld = 1'b1;
    end else begin
        out4_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln16_fu_165_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state67;
        end
        ap_ST_fsm_state67 : begin
            ap_NS_fsm = ap_ST_fsm_state68;
        end
        ap_ST_fsm_state68 : begin
            ap_NS_fsm = ap_ST_fsm_state69;
        end
        ap_ST_fsm_state69 : begin
            ap_NS_fsm = ap_ST_fsm_state70;
        end
        ap_ST_fsm_state70 : begin
            ap_NS_fsm = ap_ST_fsm_state71;
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state72;
        end
        ap_ST_fsm_state72 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln18_fu_149_p2 = ($signed(sext_ln17_3_fu_143_p1) + $signed(sext_ln17_1_fu_140_p1));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state40 = ap_CS_fsm[32'd39];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state72 = ap_CS_fsm[32'd71];

assign conv_fu_133_p1 = $signed(size);

assign grp_fu_176_p1 = sext_ln17_reg_232;

assign grp_fu_181_p1 = sext_ln20_reg_257;

assign i_2_fu_170_p2 = (i_fu_58 + 64'd1);

assign icmp_ln16_fu_165_p2 = ((i_fu_58 == conv_reg_227) ? 1'b1 : 1'b0);

assign out1 = sext_ln18_reg_237;

assign out2 = sext_ln19_reg_242;

assign out3 = grp_fu_176_p2;

assign out4 = grp_fu_181_p2;

assign sext_ln17_1_fu_140_p0 = inA;

assign sext_ln17_1_fu_140_p1 = sext_ln17_1_fu_140_p0;

assign sext_ln17_3_fu_143_p0 = inB;

assign sext_ln17_3_fu_143_p1 = sext_ln17_3_fu_143_p0;

assign sext_ln17_fu_137_p0 = inA;

assign sext_ln17_fu_137_p1 = sext_ln17_fu_137_p0;

assign sext_ln18_fu_146_p1 = grp_fu_191_p2;

assign sext_ln19_fu_155_p1 = $signed(add_ln18_fu_149_p2);

assign sext_ln20_fu_159_p0 = inA;

assign sext_ln20_fu_159_p1 = sext_ln20_fu_159_p0;

endmodule //basic_arith_array

// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Version: 2021.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="arr_mult_2d_arr_mult_2d,hls_ip_2021_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7v585t-ffg1761-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.300000,HLS_SYN_LAT=9623,HLS_SYN_TPT=none,HLS_SYN_MEM=4,HLS_SYN_DSP=0,HLS_SYN_FF=4868,HLS_SYN_LUT=6093,HLS_VERSION=2021_1}" *)

module arr_mult_2d (
        ap_clk,
        ap_rst_n,
        m_axi_gmem_AWVALID,
        m_axi_gmem_AWREADY,
        m_axi_gmem_AWADDR,
        m_axi_gmem_AWID,
        m_axi_gmem_AWLEN,
        m_axi_gmem_AWSIZE,
        m_axi_gmem_AWBURST,
        m_axi_gmem_AWLOCK,
        m_axi_gmem_AWCACHE,
        m_axi_gmem_AWPROT,
        m_axi_gmem_AWQOS,
        m_axi_gmem_AWREGION,
        m_axi_gmem_AWUSER,
        m_axi_gmem_WVALID,
        m_axi_gmem_WREADY,
        m_axi_gmem_WDATA,
        m_axi_gmem_WSTRB,
        m_axi_gmem_WLAST,
        m_axi_gmem_WID,
        m_axi_gmem_WUSER,
        m_axi_gmem_ARVALID,
        m_axi_gmem_ARREADY,
        m_axi_gmem_ARADDR,
        m_axi_gmem_ARID,
        m_axi_gmem_ARLEN,
        m_axi_gmem_ARSIZE,
        m_axi_gmem_ARBURST,
        m_axi_gmem_ARLOCK,
        m_axi_gmem_ARCACHE,
        m_axi_gmem_ARPROT,
        m_axi_gmem_ARQOS,
        m_axi_gmem_ARREGION,
        m_axi_gmem_ARUSER,
        m_axi_gmem_RVALID,
        m_axi_gmem_RREADY,
        m_axi_gmem_RDATA,
        m_axi_gmem_RLAST,
        m_axi_gmem_RID,
        m_axi_gmem_RUSER,
        m_axi_gmem_RRESP,
        m_axi_gmem_BVALID,
        m_axi_gmem_BREADY,
        m_axi_gmem_BRESP,
        m_axi_gmem_BID,
        m_axi_gmem_BUSER,
        s_axi_control_AWVALID,
        s_axi_control_AWREADY,
        s_axi_control_AWADDR,
        s_axi_control_WVALID,
        s_axi_control_WREADY,
        s_axi_control_WDATA,
        s_axi_control_WSTRB,
        s_axi_control_ARVALID,
        s_axi_control_ARREADY,
        s_axi_control_ARADDR,
        s_axi_control_RVALID,
        s_axi_control_RREADY,
        s_axi_control_RDATA,
        s_axi_control_RRESP,
        s_axi_control_BVALID,
        s_axi_control_BREADY,
        s_axi_control_BRESP,
        interrupt
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;
parameter    C_S_AXI_CONTROL_DATA_WIDTH = 32;
parameter    C_S_AXI_CONTROL_ADDR_WIDTH = 6;
parameter    C_S_AXI_DATA_WIDTH = 32;
parameter    C_M_AXI_GMEM_ID_WIDTH = 1;
parameter    C_M_AXI_GMEM_ADDR_WIDTH = 64;
parameter    C_M_AXI_GMEM_DATA_WIDTH = 32;
parameter    C_M_AXI_GMEM_AWUSER_WIDTH = 1;
parameter    C_M_AXI_GMEM_ARUSER_WIDTH = 1;
parameter    C_M_AXI_GMEM_WUSER_WIDTH = 1;
parameter    C_M_AXI_GMEM_RUSER_WIDTH = 1;
parameter    C_M_AXI_GMEM_BUSER_WIDTH = 1;
parameter    C_M_AXI_GMEM_USER_VALUE = 0;
parameter    C_M_AXI_GMEM_PROT_VALUE = 0;
parameter    C_M_AXI_GMEM_CACHE_VALUE = 3;
parameter    C_M_AXI_DATA_WIDTH = 32;

parameter C_S_AXI_CONTROL_WSTRB_WIDTH = (32 / 8);
parameter C_S_AXI_WSTRB_WIDTH = (32 / 8);
parameter C_M_AXI_GMEM_WSTRB_WIDTH = (32 / 8);
parameter C_M_AXI_WSTRB_WIDTH = (32 / 8);

input   ap_clk;
input   ap_rst_n;
output   m_axi_gmem_AWVALID;
input   m_axi_gmem_AWREADY;
output  [C_M_AXI_GMEM_ADDR_WIDTH - 1:0] m_axi_gmem_AWADDR;
output  [C_M_AXI_GMEM_ID_WIDTH - 1:0] m_axi_gmem_AWID;
output  [7:0] m_axi_gmem_AWLEN;
output  [2:0] m_axi_gmem_AWSIZE;
output  [1:0] m_axi_gmem_AWBURST;
output  [1:0] m_axi_gmem_AWLOCK;
output  [3:0] m_axi_gmem_AWCACHE;
output  [2:0] m_axi_gmem_AWPROT;
output  [3:0] m_axi_gmem_AWQOS;
output  [3:0] m_axi_gmem_AWREGION;
output  [C_M_AXI_GMEM_AWUSER_WIDTH - 1:0] m_axi_gmem_AWUSER;
output   m_axi_gmem_WVALID;
input   m_axi_gmem_WREADY;
output  [C_M_AXI_GMEM_DATA_WIDTH - 1:0] m_axi_gmem_WDATA;
output  [C_M_AXI_GMEM_WSTRB_WIDTH - 1:0] m_axi_gmem_WSTRB;
output   m_axi_gmem_WLAST;
output  [C_M_AXI_GMEM_ID_WIDTH - 1:0] m_axi_gmem_WID;
output  [C_M_AXI_GMEM_WUSER_WIDTH - 1:0] m_axi_gmem_WUSER;
output   m_axi_gmem_ARVALID;
input   m_axi_gmem_ARREADY;
output  [C_M_AXI_GMEM_ADDR_WIDTH - 1:0] m_axi_gmem_ARADDR;
output  [C_M_AXI_GMEM_ID_WIDTH - 1:0] m_axi_gmem_ARID;
output  [7:0] m_axi_gmem_ARLEN;
output  [2:0] m_axi_gmem_ARSIZE;
output  [1:0] m_axi_gmem_ARBURST;
output  [1:0] m_axi_gmem_ARLOCK;
output  [3:0] m_axi_gmem_ARCACHE;
output  [2:0] m_axi_gmem_ARPROT;
output  [3:0] m_axi_gmem_ARQOS;
output  [3:0] m_axi_gmem_ARREGION;
output  [C_M_AXI_GMEM_ARUSER_WIDTH - 1:0] m_axi_gmem_ARUSER;
input   m_axi_gmem_RVALID;
output   m_axi_gmem_RREADY;
input  [C_M_AXI_GMEM_DATA_WIDTH - 1:0] m_axi_gmem_RDATA;
input   m_axi_gmem_RLAST;
input  [C_M_AXI_GMEM_ID_WIDTH - 1:0] m_axi_gmem_RID;
input  [C_M_AXI_GMEM_RUSER_WIDTH - 1:0] m_axi_gmem_RUSER;
input  [1:0] m_axi_gmem_RRESP;
input   m_axi_gmem_BVALID;
output   m_axi_gmem_BREADY;
input  [1:0] m_axi_gmem_BRESP;
input  [C_M_AXI_GMEM_ID_WIDTH - 1:0] m_axi_gmem_BID;
input  [C_M_AXI_GMEM_BUSER_WIDTH - 1:0] m_axi_gmem_BUSER;
input   s_axi_control_AWVALID;
output   s_axi_control_AWREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_AWADDR;
input   s_axi_control_WVALID;
output   s_axi_control_WREADY;
input  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_WDATA;
input  [C_S_AXI_CONTROL_WSTRB_WIDTH - 1:0] s_axi_control_WSTRB;
input   s_axi_control_ARVALID;
output   s_axi_control_ARREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_ARADDR;
output   s_axi_control_RVALID;
input   s_axi_control_RREADY;
output  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_RDATA;
output  [1:0] s_axi_control_RRESP;
output   s_axi_control_BVALID;
input   s_axi_control_BREADY;
output  [1:0] s_axi_control_BRESP;
output   interrupt;

 reg    ap_rst_n_inv;
wire    ap_start;
reg    ap_done;
reg    ap_idle;
(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_ready;
wire   [63:0] inA;
wire   [63:0] inB;
wire   [63:0] out_r;
reg    gmem_blk_n_AW;
wire    ap_CS_fsm_state2;
reg    gmem_blk_n_B;
wire    ap_CS_fsm_state9;
reg   [63:0] inB_read_reg_115;
reg   [63:0] inA_read_reg_120;
reg   [61:0] trunc_ln_reg_125;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_done;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_idle;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_ready;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWVALID;
wire   [63:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWADDR;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWID;
wire   [31:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLEN;
wire   [2:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWSIZE;
wire   [1:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWBURST;
wire   [1:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLOCK;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWCACHE;
wire   [2:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWPROT;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWQOS;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWREGION;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWUSER;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WVALID;
wire   [31:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WDATA;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WSTRB;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WLAST;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WID;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WUSER;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARVALID;
wire   [63:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARADDR;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARID;
wire   [31:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLEN;
wire   [2:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARSIZE;
wire   [1:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARBURST;
wire   [1:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLOCK;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARCACHE;
wire   [2:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARPROT;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARQOS;
wire   [3:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARREGION;
wire   [0:0] grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARUSER;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_RREADY;
wire    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_BREADY;
reg    gmem_AWVALID;
wire    gmem_AWREADY;
reg   [63:0] gmem_AWADDR;
reg   [0:0] gmem_AWID;
reg   [31:0] gmem_AWLEN;
reg   [2:0] gmem_AWSIZE;
reg   [1:0] gmem_AWBURST;
reg   [1:0] gmem_AWLOCK;
reg   [3:0] gmem_AWCACHE;
reg   [2:0] gmem_AWPROT;
reg   [3:0] gmem_AWQOS;
reg   [3:0] gmem_AWREGION;
reg   [0:0] gmem_AWUSER;
reg    gmem_WVALID;
wire    gmem_WREADY;
reg    gmem_ARVALID;
wire    gmem_ARREADY;
wire    gmem_RVALID;
reg    gmem_RREADY;
wire   [31:0] gmem_RDATA;
wire    gmem_RLAST;
wire   [0:0] gmem_RID;
wire   [0:0] gmem_RUSER;
wire   [1:0] gmem_RRESP;
wire    gmem_BVALID;
reg    gmem_BREADY;
wire   [1:0] gmem_BRESP;
wire   [0:0] gmem_BID;
wire   [0:0] gmem_BUSER;
reg    grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire  signed [63:0] sext_ln18_fu_105_p1;
reg   [8:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
reg    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
reg    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
reg    ap_ST_fsm_state9_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
#0 grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg = 1'b0;
end

arr_mult_2d_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2 grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start),
    .ap_done(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_done),
    .ap_idle(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_idle),
    .ap_ready(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_ready),
    .m_axi_gmem_AWVALID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWVALID),
    .m_axi_gmem_AWREADY(gmem_AWREADY),
    .m_axi_gmem_AWADDR(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWADDR),
    .m_axi_gmem_AWID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWID),
    .m_axi_gmem_AWLEN(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLEN),
    .m_axi_gmem_AWSIZE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWSIZE),
    .m_axi_gmem_AWBURST(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWBURST),
    .m_axi_gmem_AWLOCK(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLOCK),
    .m_axi_gmem_AWCACHE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWCACHE),
    .m_axi_gmem_AWPROT(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWPROT),
    .m_axi_gmem_AWQOS(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWQOS),
    .m_axi_gmem_AWREGION(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWREGION),
    .m_axi_gmem_AWUSER(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWUSER),
    .m_axi_gmem_WVALID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WVALID),
    .m_axi_gmem_WREADY(gmem_WREADY),
    .m_axi_gmem_WDATA(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WDATA),
    .m_axi_gmem_WSTRB(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WSTRB),
    .m_axi_gmem_WLAST(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WLAST),
    .m_axi_gmem_WID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WID),
    .m_axi_gmem_WUSER(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WUSER),
    .m_axi_gmem_ARVALID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARVALID),
    .m_axi_gmem_ARREADY(gmem_ARREADY),
    .m_axi_gmem_ARADDR(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARADDR),
    .m_axi_gmem_ARID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARID),
    .m_axi_gmem_ARLEN(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLEN),
    .m_axi_gmem_ARSIZE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARSIZE),
    .m_axi_gmem_ARBURST(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARBURST),
    .m_axi_gmem_ARLOCK(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLOCK),
    .m_axi_gmem_ARCACHE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARCACHE),
    .m_axi_gmem_ARPROT(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARPROT),
    .m_axi_gmem_ARQOS(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARQOS),
    .m_axi_gmem_ARREGION(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARREGION),
    .m_axi_gmem_ARUSER(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARUSER),
    .m_axi_gmem_RVALID(gmem_RVALID),
    .m_axi_gmem_RREADY(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_RREADY),
    .m_axi_gmem_RDATA(gmem_RDATA),
    .m_axi_gmem_RLAST(gmem_RLAST),
    .m_axi_gmem_RID(gmem_RID),
    .m_axi_gmem_RUSER(gmem_RUSER),
    .m_axi_gmem_RRESP(gmem_RRESP),
    .m_axi_gmem_BVALID(gmem_BVALID),
    .m_axi_gmem_BREADY(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_BREADY),
    .m_axi_gmem_BRESP(gmem_BRESP),
    .m_axi_gmem_BID(gmem_BID),
    .m_axi_gmem_BUSER(gmem_BUSER),
    .sext_ln18(trunc_ln_reg_125),
    .inA(inA_read_reg_120),
    .inB(inB_read_reg_115)
);

arr_mult_2d_control_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_CONTROL_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_CONTROL_DATA_WIDTH ))
control_s_axi_U(
    .AWVALID(s_axi_control_AWVALID),
    .AWREADY(s_axi_control_AWREADY),
    .AWADDR(s_axi_control_AWADDR),
    .WVALID(s_axi_control_WVALID),
    .WREADY(s_axi_control_WREADY),
    .WDATA(s_axi_control_WDATA),
    .WSTRB(s_axi_control_WSTRB),
    .ARVALID(s_axi_control_ARVALID),
    .ARREADY(s_axi_control_ARREADY),
    .ARADDR(s_axi_control_ARADDR),
    .RVALID(s_axi_control_RVALID),
    .RREADY(s_axi_control_RREADY),
    .RDATA(s_axi_control_RDATA),
    .RRESP(s_axi_control_RRESP),
    .BVALID(s_axi_control_BVALID),
    .BREADY(s_axi_control_BREADY),
    .BRESP(s_axi_control_BRESP),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .inA(inA),
    .inB(inB),
    .out_r(out_r),
    .ap_start(ap_start),
    .interrupt(interrupt),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_idle(ap_idle)
);

arr_mult_2d_gmem_m_axi #(
    .CONSERVATIVE( 0 ),
    .USER_DW( 32 ),
    .USER_AW( 64 ),
    .USER_MAXREQS( 5 ),
    .NUM_READ_OUTSTANDING( 16 ),
    .NUM_WRITE_OUTSTANDING( 16 ),
    .MAX_READ_BURST_LENGTH( 16 ),
    .MAX_WRITE_BURST_LENGTH( 16 ),
    .C_M_AXI_ID_WIDTH( C_M_AXI_GMEM_ID_WIDTH ),
    .C_M_AXI_ADDR_WIDTH( C_M_AXI_GMEM_ADDR_WIDTH ),
    .C_M_AXI_DATA_WIDTH( C_M_AXI_GMEM_DATA_WIDTH ),
    .C_M_AXI_AWUSER_WIDTH( C_M_AXI_GMEM_AWUSER_WIDTH ),
    .C_M_AXI_ARUSER_WIDTH( C_M_AXI_GMEM_ARUSER_WIDTH ),
    .C_M_AXI_WUSER_WIDTH( C_M_AXI_GMEM_WUSER_WIDTH ),
    .C_M_AXI_RUSER_WIDTH( C_M_AXI_GMEM_RUSER_WIDTH ),
    .C_M_AXI_BUSER_WIDTH( C_M_AXI_GMEM_BUSER_WIDTH ),
    .C_USER_VALUE( C_M_AXI_GMEM_USER_VALUE ),
    .C_PROT_VALUE( C_M_AXI_GMEM_PROT_VALUE ),
    .C_CACHE_VALUE( C_M_AXI_GMEM_CACHE_VALUE ))
gmem_m_axi_U(
    .AWVALID(m_axi_gmem_AWVALID),
    .AWREADY(m_axi_gmem_AWREADY),
    .AWADDR(m_axi_gmem_AWADDR),
    .AWID(m_axi_gmem_AWID),
    .AWLEN(m_axi_gmem_AWLEN),
    .AWSIZE(m_axi_gmem_AWSIZE),
    .AWBURST(m_axi_gmem_AWBURST),
    .AWLOCK(m_axi_gmem_AWLOCK),
    .AWCACHE(m_axi_gmem_AWCACHE),
    .AWPROT(m_axi_gmem_AWPROT),
    .AWQOS(m_axi_gmem_AWQOS),
    .AWREGION(m_axi_gmem_AWREGION),
    .AWUSER(m_axi_gmem_AWUSER),
    .WVALID(m_axi_gmem_WVALID),
    .WREADY(m_axi_gmem_WREADY),
    .WDATA(m_axi_gmem_WDATA),
    .WSTRB(m_axi_gmem_WSTRB),
    .WLAST(m_axi_gmem_WLAST),
    .WID(m_axi_gmem_WID),
    .WUSER(m_axi_gmem_WUSER),
    .ARVALID(m_axi_gmem_ARVALID),
    .ARREADY(m_axi_gmem_ARREADY),
    .ARADDR(m_axi_gmem_ARADDR),
    .ARID(m_axi_gmem_ARID),
    .ARLEN(m_axi_gmem_ARLEN),
    .ARSIZE(m_axi_gmem_ARSIZE),
    .ARBURST(m_axi_gmem_ARBURST),
    .ARLOCK(m_axi_gmem_ARLOCK),
    .ARCACHE(m_axi_gmem_ARCACHE),
    .ARPROT(m_axi_gmem_ARPROT),
    .ARQOS(m_axi_gmem_ARQOS),
    .ARREGION(m_axi_gmem_ARREGION),
    .ARUSER(m_axi_gmem_ARUSER),
    .RVALID(m_axi_gmem_RVALID),
    .RREADY(m_axi_gmem_RREADY),
    .RDATA(m_axi_gmem_RDATA),
    .RLAST(m_axi_gmem_RLAST),
    .RID(m_axi_gmem_RID),
    .RUSER(m_axi_gmem_RUSER),
    .RRESP(m_axi_gmem_RRESP),
    .BVALID(m_axi_gmem_BVALID),
    .BREADY(m_axi_gmem_BREADY),
    .BRESP(m_axi_gmem_BRESP),
    .BID(m_axi_gmem_BID),
    .BUSER(m_axi_gmem_BUSER),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .I_ARVALID(gmem_ARVALID),
    .I_ARREADY(gmem_ARREADY),
    .I_ARADDR(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARADDR),
    .I_ARID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARID),
    .I_ARLEN(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLEN),
    .I_ARSIZE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARSIZE),
    .I_ARLOCK(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARLOCK),
    .I_ARCACHE(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARCACHE),
    .I_ARQOS(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARQOS),
    .I_ARPROT(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARPROT),
    .I_ARUSER(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARUSER),
    .I_ARBURST(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARBURST),
    .I_ARREGION(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARREGION),
    .I_RVALID(gmem_RVALID),
    .I_RREADY(gmem_RREADY),
    .I_RDATA(gmem_RDATA),
    .I_RID(gmem_RID),
    .I_RUSER(gmem_RUSER),
    .I_RRESP(gmem_RRESP),
    .I_RLAST(gmem_RLAST),
    .I_AWVALID(gmem_AWVALID),
    .I_AWREADY(gmem_AWREADY),
    .I_AWADDR(gmem_AWADDR),
    .I_AWID(gmem_AWID),
    .I_AWLEN(gmem_AWLEN),
    .I_AWSIZE(gmem_AWSIZE),
    .I_AWLOCK(gmem_AWLOCK),
    .I_AWCACHE(gmem_AWCACHE),
    .I_AWQOS(gmem_AWQOS),
    .I_AWPROT(gmem_AWPROT),
    .I_AWUSER(gmem_AWUSER),
    .I_AWBURST(gmem_AWBURST),
    .I_AWREGION(gmem_AWREGION),
    .I_WVALID(gmem_WVALID),
    .I_WREADY(gmem_WREADY),
    .I_WDATA(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WDATA),
    .I_WID(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WID),
    .I_WUSER(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WUSER),
    .I_WLAST(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WLAST),
    .I_WSTRB(grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WSTRB),
    .I_BVALID(gmem_BVALID),
    .I_BREADY(gmem_BREADY),
    .I_BRESP(gmem_BRESP),
    .I_BID(gmem_BID),
    .I_BUSER(gmem_BUSER)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg <= 1'b1;
        end else if ((grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_ready == 1'b1)) begin
            grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        inA_read_reg_120 <= inA;
        inB_read_reg_115 <= inB;
        trunc_ln_reg_125 <= {{out_r[63:2]}};
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

always @ (*) begin
    if ((gmem_AWREADY == 1'b0)) begin
        ap_ST_fsm_state2_blk = 1'b1;
    end else begin
        ap_ST_fsm_state2_blk = 1'b0;
    end
end

assign ap_ST_fsm_state3_blk = 1'b0;

always @ (*) begin
    if ((grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_done == 1'b0)) begin
        ap_ST_fsm_state4_blk = 1'b1;
    end else begin
        ap_ST_fsm_state4_blk = 1'b0;
    end
end

assign ap_ST_fsm_state5_blk = 1'b0;

assign ap_ST_fsm_state6_blk = 1'b0;

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

always @ (*) begin
    if ((gmem_BVALID == 1'b0)) begin
        ap_ST_fsm_state9_blk = 1'b1;
    end else begin
        ap_ST_fsm_state9_blk = 1'b0;
    end
end

always @ (*) begin
    if (((gmem_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((gmem_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_ARVALID = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_ARVALID;
    end else begin
        gmem_ARVALID = 1'b0;
    end
end

always @ (*) begin
    if (((gmem_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        gmem_AWADDR = sext_ln18_fu_105_p1;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWADDR = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWADDR;
    end else begin
        gmem_AWADDR = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWBURST = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWBURST;
    end else begin
        gmem_AWBURST = 2'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWCACHE = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWCACHE;
    end else begin
        gmem_AWCACHE = 4'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWID = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWID;
    end else begin
        gmem_AWID = 1'd0;
    end
end

always @ (*) begin
    if (((gmem_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        gmem_AWLEN = 32'd200;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWLEN = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLEN;
    end else begin
        gmem_AWLEN = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWLOCK = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWLOCK;
    end else begin
        gmem_AWLOCK = 2'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWPROT = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWPROT;
    end else begin
        gmem_AWPROT = 3'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWQOS = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWQOS;
    end else begin
        gmem_AWQOS = 4'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWREGION = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWREGION;
    end else begin
        gmem_AWREGION = 4'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWSIZE = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWSIZE;
    end else begin
        gmem_AWSIZE = 3'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWUSER = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWUSER;
    end else begin
        gmem_AWUSER = 1'd0;
    end
end

always @ (*) begin
    if (((gmem_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        gmem_AWVALID = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_AWVALID = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_AWVALID;
    end else begin
        gmem_AWVALID = 1'b0;
    end
end

always @ (*) begin
    if (((gmem_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
        gmem_BREADY = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_BREADY = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_BREADY;
    end else begin
        gmem_BREADY = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_RREADY = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_RREADY;
    end else begin
        gmem_RREADY = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        gmem_WVALID = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_m_axi_gmem_WVALID;
    end else begin
        gmem_WVALID = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        gmem_blk_n_AW = m_axi_gmem_AWREADY;
    end else begin
        gmem_blk_n_AW = 1'b1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        gmem_blk_n_B = m_axi_gmem_BVALID;
    end else begin
        gmem_blk_n_B = 1'b1;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((gmem_AWREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
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
            if (((gmem_BVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start = grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86_ap_start_reg;

assign sext_ln18_fu_105_p1 = $signed(trunc_ln_reg_125);

endmodule //arr_mult_2d

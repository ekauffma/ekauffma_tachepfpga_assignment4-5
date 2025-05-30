// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1__HH__
#define __arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1__HH__
#include "arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0 arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U;

    SC_CTOR(arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1):  arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U ("arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U") {
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.clk(clk);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.rst(reset);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.ce(ce);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.in0(din0);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.in1(din1);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.in2(din2);
        arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_0_U.dout(dout);

    }

};

#endif //

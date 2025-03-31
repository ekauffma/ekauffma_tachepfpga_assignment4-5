#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

// wrapc file define:
#define AUTOTB_TVIN_inA_0 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_0.dat"
#define AUTOTB_TVOUT_inA_0 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_0.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_1 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_1.dat"
#define AUTOTB_TVOUT_inA_1 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_1.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_2 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_2.dat"
#define AUTOTB_TVOUT_inA_2 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_2.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_3 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_3.dat"
#define AUTOTB_TVOUT_inA_3 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_3.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_4 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_4.dat"
#define AUTOTB_TVOUT_inA_4 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_4.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_5 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_5.dat"
#define AUTOTB_TVOUT_inA_5 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_5.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_6 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_6.dat"
#define AUTOTB_TVOUT_inA_6 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_6.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_7 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_7.dat"
#define AUTOTB_TVOUT_inA_7 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_7.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_8 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_8.dat"
#define AUTOTB_TVOUT_inA_8 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_8.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_9 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_9.dat"
#define AUTOTB_TVOUT_inA_9 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_9.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_10 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_10.dat"
#define AUTOTB_TVOUT_inA_10 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_10.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_11 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_11.dat"
#define AUTOTB_TVOUT_inA_11 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_11.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_12 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_12.dat"
#define AUTOTB_TVOUT_inA_12 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_12.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_13 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_13.dat"
#define AUTOTB_TVOUT_inA_13 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_13.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_14 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_14.dat"
#define AUTOTB_TVOUT_inA_14 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_14.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_15 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_15.dat"
#define AUTOTB_TVOUT_inA_15 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_15.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_16 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_16.dat"
#define AUTOTB_TVOUT_inA_16 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_16.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_17 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_17.dat"
#define AUTOTB_TVOUT_inA_17 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_17.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_18 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_18.dat"
#define AUTOTB_TVOUT_inA_18 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_18.dat"
// wrapc file define:
#define AUTOTB_TVIN_inA_19 "../tv/cdatafile/c.arr_mult_1d.autotvin_inA_19.dat"
#define AUTOTB_TVOUT_inA_19 "../tv/cdatafile/c.arr_mult_1d.autotvout_inA_19.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_0 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_0.dat"
#define AUTOTB_TVOUT_inB_0 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_0.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_1 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_1.dat"
#define AUTOTB_TVOUT_inB_1 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_1.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_2 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_2.dat"
#define AUTOTB_TVOUT_inB_2 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_2.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_3 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_3.dat"
#define AUTOTB_TVOUT_inB_3 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_3.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_4 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_4.dat"
#define AUTOTB_TVOUT_inB_4 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_4.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_5 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_5.dat"
#define AUTOTB_TVOUT_inB_5 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_5.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_6 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_6.dat"
#define AUTOTB_TVOUT_inB_6 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_6.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_7 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_7.dat"
#define AUTOTB_TVOUT_inB_7 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_7.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_8 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_8.dat"
#define AUTOTB_TVOUT_inB_8 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_8.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_9 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_9.dat"
#define AUTOTB_TVOUT_inB_9 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_9.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_10 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_10.dat"
#define AUTOTB_TVOUT_inB_10 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_10.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_11 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_11.dat"
#define AUTOTB_TVOUT_inB_11 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_11.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_12 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_12.dat"
#define AUTOTB_TVOUT_inB_12 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_12.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_13 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_13.dat"
#define AUTOTB_TVOUT_inB_13 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_13.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_14 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_14.dat"
#define AUTOTB_TVOUT_inB_14 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_14.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_15 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_15.dat"
#define AUTOTB_TVOUT_inB_15 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_15.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_16 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_16.dat"
#define AUTOTB_TVOUT_inB_16 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_16.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_17 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_17.dat"
#define AUTOTB_TVOUT_inB_17 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_17.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_18 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_18.dat"
#define AUTOTB_TVOUT_inB_18 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_18.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_19 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_19.dat"
#define AUTOTB_TVOUT_inB_19 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_19.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_20 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_20.dat"
#define AUTOTB_TVOUT_inB_20 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_20.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_21 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_21.dat"
#define AUTOTB_TVOUT_inB_21 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_21.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_22 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_22.dat"
#define AUTOTB_TVOUT_inB_22 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_22.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB_23 "../tv/cdatafile/c.arr_mult_1d.autotvin_inB_23.dat"
#define AUTOTB_TVOUT_inB_23 "../tv/cdatafile/c.arr_mult_1d.autotvout_inB_23.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_0 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_0.dat"
#define AUTOTB_TVOUT_out_0 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_0.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_1 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_1.dat"
#define AUTOTB_TVOUT_out_1 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_1.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_2 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_2.dat"
#define AUTOTB_TVOUT_out_2 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_2.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_3 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_3.dat"
#define AUTOTB_TVOUT_out_3 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_3.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_4 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_4.dat"
#define AUTOTB_TVOUT_out_4 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_4.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_5 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_5.dat"
#define AUTOTB_TVOUT_out_5 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_5.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_6 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_6.dat"
#define AUTOTB_TVOUT_out_6 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_6.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_7 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_7.dat"
#define AUTOTB_TVOUT_out_7 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_7.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_8 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_8.dat"
#define AUTOTB_TVOUT_out_8 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_8.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_9 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_9.dat"
#define AUTOTB_TVOUT_out_9 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_9.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_10 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_10.dat"
#define AUTOTB_TVOUT_out_10 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_10.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_11 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_11.dat"
#define AUTOTB_TVOUT_out_11 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_11.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_12 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_12.dat"
#define AUTOTB_TVOUT_out_12 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_12.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_13 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_13.dat"
#define AUTOTB_TVOUT_out_13 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_13.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_14 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_14.dat"
#define AUTOTB_TVOUT_out_14 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_14.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_15 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_15.dat"
#define AUTOTB_TVOUT_out_15 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_15.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_16 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_16.dat"
#define AUTOTB_TVOUT_out_16 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_16.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_17 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_17.dat"
#define AUTOTB_TVOUT_out_17 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_17.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_18 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_18.dat"
#define AUTOTB_TVOUT_out_18 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_18.dat"
// wrapc file define:
#define AUTOTB_TVIN_out_19 "../tv/cdatafile/c.arr_mult_1d.autotvin_out_19.dat"
#define AUTOTB_TVOUT_out_19 "../tv/cdatafile/c.arr_mult_1d.autotvout_out_19.dat"

#define INTER_TCL "../tv/cdatafile/ref.tcl"

// tvout file define:
#define AUTOTB_TVOUT_PC_inA_0 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_0.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_1 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_1.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_2 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_2.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_3 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_3.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_4 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_4.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_5 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_5.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_6 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_6.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_7 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_7.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_8 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_8.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_9 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_9.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_10 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_10.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_11 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_11.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_12 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_12.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_13 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_13.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_14 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_14.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_15 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_15.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_16 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_16.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_17 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_17.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_18 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_18.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inA_19 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inA_19.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_0 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_0.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_1 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_1.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_2 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_2.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_3 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_3.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_4 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_4.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_5 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_5.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_6 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_6.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_7 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_7.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_8 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_8.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_9 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_9.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_10 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_10.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_11 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_11.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_12 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_12.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_13 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_13.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_14 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_14.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_15 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_15.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_16 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_16.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_17 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_17.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_18 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_18.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_19 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_19.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_20 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_20.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_21 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_21.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_22 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_22.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB_23 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_inB_23.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_0 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_0.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_1 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_1.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_2 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_2.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_3 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_3.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_4 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_4.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_5 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_5.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_6 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_6.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_7 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_7.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_8 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_8.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_9 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_9.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_10 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_10.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_11 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_11.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_12 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_12.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_13 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_13.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_14 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_14.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_15 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_15.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_16 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_16.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_17 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_17.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_18 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_18.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out_19 "../tv/rtldatafile/rtl.arr_mult_1d.autotvout_out_19.dat"

class INTER_TCL_FILE {
  public:
INTER_TCL_FILE(const char* name) {
  mName = name; 
  inA_0_depth = 0;
  inA_1_depth = 0;
  inA_2_depth = 0;
  inA_3_depth = 0;
  inA_4_depth = 0;
  inA_5_depth = 0;
  inA_6_depth = 0;
  inA_7_depth = 0;
  inA_8_depth = 0;
  inA_9_depth = 0;
  inA_10_depth = 0;
  inA_11_depth = 0;
  inA_12_depth = 0;
  inA_13_depth = 0;
  inA_14_depth = 0;
  inA_15_depth = 0;
  inA_16_depth = 0;
  inA_17_depth = 0;
  inA_18_depth = 0;
  inA_19_depth = 0;
  inB_0_depth = 0;
  inB_1_depth = 0;
  inB_2_depth = 0;
  inB_3_depth = 0;
  inB_4_depth = 0;
  inB_5_depth = 0;
  inB_6_depth = 0;
  inB_7_depth = 0;
  inB_8_depth = 0;
  inB_9_depth = 0;
  inB_10_depth = 0;
  inB_11_depth = 0;
  inB_12_depth = 0;
  inB_13_depth = 0;
  inB_14_depth = 0;
  inB_15_depth = 0;
  inB_16_depth = 0;
  inB_17_depth = 0;
  inB_18_depth = 0;
  inB_19_depth = 0;
  inB_20_depth = 0;
  inB_21_depth = 0;
  inB_22_depth = 0;
  inB_23_depth = 0;
  out_0_depth = 0;
  out_1_depth = 0;
  out_2_depth = 0;
  out_3_depth = 0;
  out_4_depth = 0;
  out_5_depth = 0;
  out_6_depth = 0;
  out_7_depth = 0;
  out_8_depth = 0;
  out_9_depth = 0;
  out_10_depth = 0;
  out_11_depth = 0;
  out_12_depth = 0;
  out_13_depth = 0;
  out_14_depth = 0;
  out_15_depth = 0;
  out_16_depth = 0;
  out_17_depth = 0;
  out_18_depth = 0;
  out_19_depth = 0;
  trans_num =0;
}
~INTER_TCL_FILE() {
  mFile.open(mName);
  if (!mFile.good()) {
    cout << "Failed to open file ref.tcl" << endl;
    exit (1); 
  }
  string total_list = get_depth_list();
  mFile << "set depth_list {\n";
  mFile << total_list;
  mFile << "}\n";
  mFile << "set trans_num "<<trans_num<<endl;
  mFile.close();
}
string get_depth_list () {
  stringstream total_list;
  total_list << "{inA_0 " << inA_0_depth << "}\n";
  total_list << "{inA_1 " << inA_1_depth << "}\n";
  total_list << "{inA_2 " << inA_2_depth << "}\n";
  total_list << "{inA_3 " << inA_3_depth << "}\n";
  total_list << "{inA_4 " << inA_4_depth << "}\n";
  total_list << "{inA_5 " << inA_5_depth << "}\n";
  total_list << "{inA_6 " << inA_6_depth << "}\n";
  total_list << "{inA_7 " << inA_7_depth << "}\n";
  total_list << "{inA_8 " << inA_8_depth << "}\n";
  total_list << "{inA_9 " << inA_9_depth << "}\n";
  total_list << "{inA_10 " << inA_10_depth << "}\n";
  total_list << "{inA_11 " << inA_11_depth << "}\n";
  total_list << "{inA_12 " << inA_12_depth << "}\n";
  total_list << "{inA_13 " << inA_13_depth << "}\n";
  total_list << "{inA_14 " << inA_14_depth << "}\n";
  total_list << "{inA_15 " << inA_15_depth << "}\n";
  total_list << "{inA_16 " << inA_16_depth << "}\n";
  total_list << "{inA_17 " << inA_17_depth << "}\n";
  total_list << "{inA_18 " << inA_18_depth << "}\n";
  total_list << "{inA_19 " << inA_19_depth << "}\n";
  total_list << "{inB_0 " << inB_0_depth << "}\n";
  total_list << "{inB_1 " << inB_1_depth << "}\n";
  total_list << "{inB_2 " << inB_2_depth << "}\n";
  total_list << "{inB_3 " << inB_3_depth << "}\n";
  total_list << "{inB_4 " << inB_4_depth << "}\n";
  total_list << "{inB_5 " << inB_5_depth << "}\n";
  total_list << "{inB_6 " << inB_6_depth << "}\n";
  total_list << "{inB_7 " << inB_7_depth << "}\n";
  total_list << "{inB_8 " << inB_8_depth << "}\n";
  total_list << "{inB_9 " << inB_9_depth << "}\n";
  total_list << "{inB_10 " << inB_10_depth << "}\n";
  total_list << "{inB_11 " << inB_11_depth << "}\n";
  total_list << "{inB_12 " << inB_12_depth << "}\n";
  total_list << "{inB_13 " << inB_13_depth << "}\n";
  total_list << "{inB_14 " << inB_14_depth << "}\n";
  total_list << "{inB_15 " << inB_15_depth << "}\n";
  total_list << "{inB_16 " << inB_16_depth << "}\n";
  total_list << "{inB_17 " << inB_17_depth << "}\n";
  total_list << "{inB_18 " << inB_18_depth << "}\n";
  total_list << "{inB_19 " << inB_19_depth << "}\n";
  total_list << "{inB_20 " << inB_20_depth << "}\n";
  total_list << "{inB_21 " << inB_21_depth << "}\n";
  total_list << "{inB_22 " << inB_22_depth << "}\n";
  total_list << "{inB_23 " << inB_23_depth << "}\n";
  total_list << "{out_0 " << out_0_depth << "}\n";
  total_list << "{out_1 " << out_1_depth << "}\n";
  total_list << "{out_2 " << out_2_depth << "}\n";
  total_list << "{out_3 " << out_3_depth << "}\n";
  total_list << "{out_4 " << out_4_depth << "}\n";
  total_list << "{out_5 " << out_5_depth << "}\n";
  total_list << "{out_6 " << out_6_depth << "}\n";
  total_list << "{out_7 " << out_7_depth << "}\n";
  total_list << "{out_8 " << out_8_depth << "}\n";
  total_list << "{out_9 " << out_9_depth << "}\n";
  total_list << "{out_10 " << out_10_depth << "}\n";
  total_list << "{out_11 " << out_11_depth << "}\n";
  total_list << "{out_12 " << out_12_depth << "}\n";
  total_list << "{out_13 " << out_13_depth << "}\n";
  total_list << "{out_14 " << out_14_depth << "}\n";
  total_list << "{out_15 " << out_15_depth << "}\n";
  total_list << "{out_16 " << out_16_depth << "}\n";
  total_list << "{out_17 " << out_17_depth << "}\n";
  total_list << "{out_18 " << out_18_depth << "}\n";
  total_list << "{out_19 " << out_19_depth << "}\n";
  return total_list.str();
}
void set_num (int num , int* class_num) {
  (*class_num) = (*class_num) > num ? (*class_num) : num;
}
void set_string(std::string list, std::string* class_list) {
  (*class_list) = list;
}
  public:
    int inA_0_depth;
    int inA_1_depth;
    int inA_2_depth;
    int inA_3_depth;
    int inA_4_depth;
    int inA_5_depth;
    int inA_6_depth;
    int inA_7_depth;
    int inA_8_depth;
    int inA_9_depth;
    int inA_10_depth;
    int inA_11_depth;
    int inA_12_depth;
    int inA_13_depth;
    int inA_14_depth;
    int inA_15_depth;
    int inA_16_depth;
    int inA_17_depth;
    int inA_18_depth;
    int inA_19_depth;
    int inB_0_depth;
    int inB_1_depth;
    int inB_2_depth;
    int inB_3_depth;
    int inB_4_depth;
    int inB_5_depth;
    int inB_6_depth;
    int inB_7_depth;
    int inB_8_depth;
    int inB_9_depth;
    int inB_10_depth;
    int inB_11_depth;
    int inB_12_depth;
    int inB_13_depth;
    int inB_14_depth;
    int inB_15_depth;
    int inB_16_depth;
    int inB_17_depth;
    int inB_18_depth;
    int inB_19_depth;
    int inB_20_depth;
    int inB_21_depth;
    int inB_22_depth;
    int inB_23_depth;
    int out_0_depth;
    int out_1_depth;
    int out_2_depth;
    int out_3_depth;
    int out_4_depth;
    int out_5_depth;
    int out_6_depth;
    int out_7_depth;
    int out_8_depth;
    int out_9_depth;
    int out_10_depth;
    int out_11_depth;
    int out_12_depth;
    int out_13_depth;
    int out_14_depth;
    int out_15_depth;
    int out_16_depth;
    int out_17_depth;
    int out_18_depth;
    int out_19_depth;
    int trans_num;
  private:
    ofstream mFile;
    const char* mName;
};

static void RTLOutputCheckAndReplacement(std::string &AESL_token, std::string PortName) {
  bool no_x = false;
  bool err = false;

  no_x = false;
  // search and replace 'X' with '0' from the 3rd char of token
  while (!no_x) {
    size_t x_found = AESL_token.find('X', 0);
    if (x_found != string::npos) {
      if (!err) { 
        cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port" 
             << PortName << ", possible cause: There are uninitialized variables in the C design."
             << endl; 
        err = true;
      }
      AESL_token.replace(x_found, 1, "0");
    } else
      no_x = true;
  }
  no_x = false;
  // search and replace 'x' with '0' from the 3rd char of token
  while (!no_x) {
    size_t x_found = AESL_token.find('x', 2);
    if (x_found != string::npos) {
      if (!err) { 
        cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'x' on port" 
             << PortName << ", possible cause: There are uninitialized variables in the C design."
             << endl; 
        err = true;
      }
      AESL_token.replace(x_found, 1, "0");
    } else
      no_x = true;
  }
}
extern "C" void arr_mult_1d_hw_stub_wrapper(volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *);

extern "C" void apatb_arr_mult_1d_hw(volatile void * __xlx_apatb_param_inA_0, volatile void * __xlx_apatb_param_inA_1, volatile void * __xlx_apatb_param_inA_2, volatile void * __xlx_apatb_param_inA_3, volatile void * __xlx_apatb_param_inA_4, volatile void * __xlx_apatb_param_inA_5, volatile void * __xlx_apatb_param_inA_6, volatile void * __xlx_apatb_param_inA_7, volatile void * __xlx_apatb_param_inA_8, volatile void * __xlx_apatb_param_inA_9, volatile void * __xlx_apatb_param_inA_10, volatile void * __xlx_apatb_param_inA_11, volatile void * __xlx_apatb_param_inA_12, volatile void * __xlx_apatb_param_inA_13, volatile void * __xlx_apatb_param_inA_14, volatile void * __xlx_apatb_param_inA_15, volatile void * __xlx_apatb_param_inA_16, volatile void * __xlx_apatb_param_inA_17, volatile void * __xlx_apatb_param_inA_18, volatile void * __xlx_apatb_param_inA_19, volatile void * __xlx_apatb_param_inB_0, volatile void * __xlx_apatb_param_inB_1, volatile void * __xlx_apatb_param_inB_2, volatile void * __xlx_apatb_param_inB_3, volatile void * __xlx_apatb_param_inB_4, volatile void * __xlx_apatb_param_inB_5, volatile void * __xlx_apatb_param_inB_6, volatile void * __xlx_apatb_param_inB_7, volatile void * __xlx_apatb_param_inB_8, volatile void * __xlx_apatb_param_inB_9, volatile void * __xlx_apatb_param_inB_10, volatile void * __xlx_apatb_param_inB_11, volatile void * __xlx_apatb_param_inB_12, volatile void * __xlx_apatb_param_inB_13, volatile void * __xlx_apatb_param_inB_14, volatile void * __xlx_apatb_param_inB_15, volatile void * __xlx_apatb_param_inB_16, volatile void * __xlx_apatb_param_inB_17, volatile void * __xlx_apatb_param_inB_18, volatile void * __xlx_apatb_param_inB_19, volatile void * __xlx_apatb_param_inB_20, volatile void * __xlx_apatb_param_inB_21, volatile void * __xlx_apatb_param_inB_22, volatile void * __xlx_apatb_param_inB_23, volatile void * __xlx_apatb_param_out_0, volatile void * __xlx_apatb_param_out_1, volatile void * __xlx_apatb_param_out_2, volatile void * __xlx_apatb_param_out_3, volatile void * __xlx_apatb_param_out_4, volatile void * __xlx_apatb_param_out_5, volatile void * __xlx_apatb_param_out_6, volatile void * __xlx_apatb_param_out_7, volatile void * __xlx_apatb_param_out_8, volatile void * __xlx_apatb_param_out_9, volatile void * __xlx_apatb_param_out_10, volatile void * __xlx_apatb_param_out_11, volatile void * __xlx_apatb_param_out_12, volatile void * __xlx_apatb_param_out_13, volatile void * __xlx_apatb_param_out_14, volatile void * __xlx_apatb_param_out_15, volatile void * __xlx_apatb_param_out_16, volatile void * __xlx_apatb_param_out_17, volatile void * __xlx_apatb_param_out_18, volatile void * __xlx_apatb_param_out_19) {
  refine_signal_handler();
  fstream wrapc_switch_file_token;
  wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
  int AESL_i;
  if (wrapc_switch_file_token.good())
  {

    CodeState = ENTER_WRAPC_PC;
    static unsigned AESL_transaction_pc = 0;
    string AESL_token;
    string AESL_num;{
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_0);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_0_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_0");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_0_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_0)[j*4+0] = out_0_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_0)[j*4+1] = out_0_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_0)[j*4+2] = out_0_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_0)[j*4+3] = out_0_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_1);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_1_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_1");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_1_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_1)[j*4+0] = out_1_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_1)[j*4+1] = out_1_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_1)[j*4+2] = out_1_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_1)[j*4+3] = out_1_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_2);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_2_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_2");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_2_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_2)[j*4+0] = out_2_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_2)[j*4+1] = out_2_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_2)[j*4+2] = out_2_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_2)[j*4+3] = out_2_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_3);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_3_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_3");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_3_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_3)[j*4+0] = out_3_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_3)[j*4+1] = out_3_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_3)[j*4+2] = out_3_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_3)[j*4+3] = out_3_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_4);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_4_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_4");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_4_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_4)[j*4+0] = out_4_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_4)[j*4+1] = out_4_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_4)[j*4+2] = out_4_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_4)[j*4+3] = out_4_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_5);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_5_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_5");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_5_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_5)[j*4+0] = out_5_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_5)[j*4+1] = out_5_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_5)[j*4+2] = out_5_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_5)[j*4+3] = out_5_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_6);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_6_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_6");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_6_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_6)[j*4+0] = out_6_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_6)[j*4+1] = out_6_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_6)[j*4+2] = out_6_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_6)[j*4+3] = out_6_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_7);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_7_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_7");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_7_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_7)[j*4+0] = out_7_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_7)[j*4+1] = out_7_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_7)[j*4+2] = out_7_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_7)[j*4+3] = out_7_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_8);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_8_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_8");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_8_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_8)[j*4+0] = out_8_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_8)[j*4+1] = out_8_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_8)[j*4+2] = out_8_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_8)[j*4+3] = out_8_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_9);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_9_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_9");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_9_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_9)[j*4+0] = out_9_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_9)[j*4+1] = out_9_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_9)[j*4+2] = out_9_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_9)[j*4+3] = out_9_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_10);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_10_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_10");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_10_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_10)[j*4+0] = out_10_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_10)[j*4+1] = out_10_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_10)[j*4+2] = out_10_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_10)[j*4+3] = out_10_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_11);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_11_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_11");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_11_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_11)[j*4+0] = out_11_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_11)[j*4+1] = out_11_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_11)[j*4+2] = out_11_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_11)[j*4+3] = out_11_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_12);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_12_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_12");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_12_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_12)[j*4+0] = out_12_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_12)[j*4+1] = out_12_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_12)[j*4+2] = out_12_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_12)[j*4+3] = out_12_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_13);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_13_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_13");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_13_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_13)[j*4+0] = out_13_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_13)[j*4+1] = out_13_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_13)[j*4+2] = out_13_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_13)[j*4+3] = out_13_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_14);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_14_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_14");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_14_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_14)[j*4+0] = out_14_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_14)[j*4+1] = out_14_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_14)[j*4+2] = out_14_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_14)[j*4+3] = out_14_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_15);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_15_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_15");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_15_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_15)[j*4+0] = out_15_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_15)[j*4+1] = out_15_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_15)[j*4+2] = out_15_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_15)[j*4+3] = out_15_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_16);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_16_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_16");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_16_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_16)[j*4+0] = out_16_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_16)[j*4+1] = out_16_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_16)[j*4+2] = out_16_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_16)[j*4+3] = out_16_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_17);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_17_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_17");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_17_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_17)[j*4+0] = out_17_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_17)[j*4+1] = out_17_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_17)[j*4+2] = out_17_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_17)[j*4+3] = out_17_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_18);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_18_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_18");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_18_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_18)[j*4+0] = out_18_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_18)[j*4+1] = out_18_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_18)[j*4+2] = out_18_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_18)[j*4+3] = out_18_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out_19);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<32> > out_19_pc_buffer(10);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out_19");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out_19_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 10; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_out_19)[j*4+0] = out_19_pc_buffer[i].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out_19)[j*4+1] = out_19_pc_buffer[i].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out_19)[j*4+2] = out_19_pc_buffer[i].range(23, 16).to_int64();
((char*)__xlx_apatb_param_out_19)[j*4+3] = out_19_pc_buffer[i].range(31, 24).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  
    AESL_transaction_pc++;
    return ;
  }
static unsigned AESL_transaction;
static AESL_FILE_HANDLER aesl_fh;
static INTER_TCL_FILE tcl_file(INTER_TCL);
std::vector<char> __xlx_sprintf_buffer(1024);
CodeState = ENTER_WRAPC;
//inA_0
aesl_fh.touch(AUTOTB_TVIN_inA_0);
aesl_fh.touch(AUTOTB_TVOUT_inA_0);
//inA_1
aesl_fh.touch(AUTOTB_TVIN_inA_1);
aesl_fh.touch(AUTOTB_TVOUT_inA_1);
//inA_2
aesl_fh.touch(AUTOTB_TVIN_inA_2);
aesl_fh.touch(AUTOTB_TVOUT_inA_2);
//inA_3
aesl_fh.touch(AUTOTB_TVIN_inA_3);
aesl_fh.touch(AUTOTB_TVOUT_inA_3);
//inA_4
aesl_fh.touch(AUTOTB_TVIN_inA_4);
aesl_fh.touch(AUTOTB_TVOUT_inA_4);
//inA_5
aesl_fh.touch(AUTOTB_TVIN_inA_5);
aesl_fh.touch(AUTOTB_TVOUT_inA_5);
//inA_6
aesl_fh.touch(AUTOTB_TVIN_inA_6);
aesl_fh.touch(AUTOTB_TVOUT_inA_6);
//inA_7
aesl_fh.touch(AUTOTB_TVIN_inA_7);
aesl_fh.touch(AUTOTB_TVOUT_inA_7);
//inA_8
aesl_fh.touch(AUTOTB_TVIN_inA_8);
aesl_fh.touch(AUTOTB_TVOUT_inA_8);
//inA_9
aesl_fh.touch(AUTOTB_TVIN_inA_9);
aesl_fh.touch(AUTOTB_TVOUT_inA_9);
//inA_10
aesl_fh.touch(AUTOTB_TVIN_inA_10);
aesl_fh.touch(AUTOTB_TVOUT_inA_10);
//inA_11
aesl_fh.touch(AUTOTB_TVIN_inA_11);
aesl_fh.touch(AUTOTB_TVOUT_inA_11);
//inA_12
aesl_fh.touch(AUTOTB_TVIN_inA_12);
aesl_fh.touch(AUTOTB_TVOUT_inA_12);
//inA_13
aesl_fh.touch(AUTOTB_TVIN_inA_13);
aesl_fh.touch(AUTOTB_TVOUT_inA_13);
//inA_14
aesl_fh.touch(AUTOTB_TVIN_inA_14);
aesl_fh.touch(AUTOTB_TVOUT_inA_14);
//inA_15
aesl_fh.touch(AUTOTB_TVIN_inA_15);
aesl_fh.touch(AUTOTB_TVOUT_inA_15);
//inA_16
aesl_fh.touch(AUTOTB_TVIN_inA_16);
aesl_fh.touch(AUTOTB_TVOUT_inA_16);
//inA_17
aesl_fh.touch(AUTOTB_TVIN_inA_17);
aesl_fh.touch(AUTOTB_TVOUT_inA_17);
//inA_18
aesl_fh.touch(AUTOTB_TVIN_inA_18);
aesl_fh.touch(AUTOTB_TVOUT_inA_18);
//inA_19
aesl_fh.touch(AUTOTB_TVIN_inA_19);
aesl_fh.touch(AUTOTB_TVOUT_inA_19);
//inB_0
aesl_fh.touch(AUTOTB_TVIN_inB_0);
aesl_fh.touch(AUTOTB_TVOUT_inB_0);
//inB_1
aesl_fh.touch(AUTOTB_TVIN_inB_1);
aesl_fh.touch(AUTOTB_TVOUT_inB_1);
//inB_2
aesl_fh.touch(AUTOTB_TVIN_inB_2);
aesl_fh.touch(AUTOTB_TVOUT_inB_2);
//inB_3
aesl_fh.touch(AUTOTB_TVIN_inB_3);
aesl_fh.touch(AUTOTB_TVOUT_inB_3);
//inB_4
aesl_fh.touch(AUTOTB_TVIN_inB_4);
aesl_fh.touch(AUTOTB_TVOUT_inB_4);
//inB_5
aesl_fh.touch(AUTOTB_TVIN_inB_5);
aesl_fh.touch(AUTOTB_TVOUT_inB_5);
//inB_6
aesl_fh.touch(AUTOTB_TVIN_inB_6);
aesl_fh.touch(AUTOTB_TVOUT_inB_6);
//inB_7
aesl_fh.touch(AUTOTB_TVIN_inB_7);
aesl_fh.touch(AUTOTB_TVOUT_inB_7);
//inB_8
aesl_fh.touch(AUTOTB_TVIN_inB_8);
aesl_fh.touch(AUTOTB_TVOUT_inB_8);
//inB_9
aesl_fh.touch(AUTOTB_TVIN_inB_9);
aesl_fh.touch(AUTOTB_TVOUT_inB_9);
//inB_10
aesl_fh.touch(AUTOTB_TVIN_inB_10);
aesl_fh.touch(AUTOTB_TVOUT_inB_10);
//inB_11
aesl_fh.touch(AUTOTB_TVIN_inB_11);
aesl_fh.touch(AUTOTB_TVOUT_inB_11);
//inB_12
aesl_fh.touch(AUTOTB_TVIN_inB_12);
aesl_fh.touch(AUTOTB_TVOUT_inB_12);
//inB_13
aesl_fh.touch(AUTOTB_TVIN_inB_13);
aesl_fh.touch(AUTOTB_TVOUT_inB_13);
//inB_14
aesl_fh.touch(AUTOTB_TVIN_inB_14);
aesl_fh.touch(AUTOTB_TVOUT_inB_14);
//inB_15
aesl_fh.touch(AUTOTB_TVIN_inB_15);
aesl_fh.touch(AUTOTB_TVOUT_inB_15);
//inB_16
aesl_fh.touch(AUTOTB_TVIN_inB_16);
aesl_fh.touch(AUTOTB_TVOUT_inB_16);
//inB_17
aesl_fh.touch(AUTOTB_TVIN_inB_17);
aesl_fh.touch(AUTOTB_TVOUT_inB_17);
//inB_18
aesl_fh.touch(AUTOTB_TVIN_inB_18);
aesl_fh.touch(AUTOTB_TVOUT_inB_18);
//inB_19
aesl_fh.touch(AUTOTB_TVIN_inB_19);
aesl_fh.touch(AUTOTB_TVOUT_inB_19);
//inB_20
aesl_fh.touch(AUTOTB_TVIN_inB_20);
aesl_fh.touch(AUTOTB_TVOUT_inB_20);
//inB_21
aesl_fh.touch(AUTOTB_TVIN_inB_21);
aesl_fh.touch(AUTOTB_TVOUT_inB_21);
//inB_22
aesl_fh.touch(AUTOTB_TVIN_inB_22);
aesl_fh.touch(AUTOTB_TVOUT_inB_22);
//inB_23
aesl_fh.touch(AUTOTB_TVIN_inB_23);
aesl_fh.touch(AUTOTB_TVOUT_inB_23);
//out_0
aesl_fh.touch(AUTOTB_TVIN_out_0);
aesl_fh.touch(AUTOTB_TVOUT_out_0);
//out_1
aesl_fh.touch(AUTOTB_TVIN_out_1);
aesl_fh.touch(AUTOTB_TVOUT_out_1);
//out_2
aesl_fh.touch(AUTOTB_TVIN_out_2);
aesl_fh.touch(AUTOTB_TVOUT_out_2);
//out_3
aesl_fh.touch(AUTOTB_TVIN_out_3);
aesl_fh.touch(AUTOTB_TVOUT_out_3);
//out_4
aesl_fh.touch(AUTOTB_TVIN_out_4);
aesl_fh.touch(AUTOTB_TVOUT_out_4);
//out_5
aesl_fh.touch(AUTOTB_TVIN_out_5);
aesl_fh.touch(AUTOTB_TVOUT_out_5);
//out_6
aesl_fh.touch(AUTOTB_TVIN_out_6);
aesl_fh.touch(AUTOTB_TVOUT_out_6);
//out_7
aesl_fh.touch(AUTOTB_TVIN_out_7);
aesl_fh.touch(AUTOTB_TVOUT_out_7);
//out_8
aesl_fh.touch(AUTOTB_TVIN_out_8);
aesl_fh.touch(AUTOTB_TVOUT_out_8);
//out_9
aesl_fh.touch(AUTOTB_TVIN_out_9);
aesl_fh.touch(AUTOTB_TVOUT_out_9);
//out_10
aesl_fh.touch(AUTOTB_TVIN_out_10);
aesl_fh.touch(AUTOTB_TVOUT_out_10);
//out_11
aesl_fh.touch(AUTOTB_TVIN_out_11);
aesl_fh.touch(AUTOTB_TVOUT_out_11);
//out_12
aesl_fh.touch(AUTOTB_TVIN_out_12);
aesl_fh.touch(AUTOTB_TVOUT_out_12);
//out_13
aesl_fh.touch(AUTOTB_TVIN_out_13);
aesl_fh.touch(AUTOTB_TVOUT_out_13);
//out_14
aesl_fh.touch(AUTOTB_TVIN_out_14);
aesl_fh.touch(AUTOTB_TVOUT_out_14);
//out_15
aesl_fh.touch(AUTOTB_TVIN_out_15);
aesl_fh.touch(AUTOTB_TVOUT_out_15);
//out_16
aesl_fh.touch(AUTOTB_TVIN_out_16);
aesl_fh.touch(AUTOTB_TVOUT_out_16);
//out_17
aesl_fh.touch(AUTOTB_TVIN_out_17);
aesl_fh.touch(AUTOTB_TVOUT_out_17);
//out_18
aesl_fh.touch(AUTOTB_TVIN_out_18);
aesl_fh.touch(AUTOTB_TVOUT_out_18);
//out_19
aesl_fh.touch(AUTOTB_TVIN_out_19);
aesl_fh.touch(AUTOTB_TVOUT_out_19);
CodeState = DUMP_INPUTS;
unsigned __xlx_offset_byte_param_inA_0 = 0;
// print inA_0 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_0, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_0 = 0*4;
  if (__xlx_apatb_param_inA_0) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_0)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_0, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_0_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_0, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_1 = 0;
// print inA_1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_1, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_1 = 0*4;
  if (__xlx_apatb_param_inA_1) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_1)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_1, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_1, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_2 = 0;
// print inA_2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_2, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_2 = 0*4;
  if (__xlx_apatb_param_inA_2) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_2)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_2, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_2, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_3 = 0;
// print inA_3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_3, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_3 = 0*4;
  if (__xlx_apatb_param_inA_3) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_3)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_3, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_3, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_4 = 0;
// print inA_4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_4, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_4 = 0*4;
  if (__xlx_apatb_param_inA_4) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_4)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_4, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_4, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_5 = 0;
// print inA_5 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_5, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_5 = 0*4;
  if (__xlx_apatb_param_inA_5) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_5)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_5, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_5_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_5, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_6 = 0;
// print inA_6 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_6, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_6 = 0*4;
  if (__xlx_apatb_param_inA_6) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_6)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_6, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_6_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_6, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_7 = 0;
// print inA_7 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_7, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_7 = 0*4;
  if (__xlx_apatb_param_inA_7) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_7)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_7, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_7_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_7, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_8 = 0;
// print inA_8 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_8, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_8 = 0*4;
  if (__xlx_apatb_param_inA_8) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_8)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_8, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_8_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_8, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_9 = 0;
// print inA_9 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_9, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_9 = 0*4;
  if (__xlx_apatb_param_inA_9) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_9)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_9, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_9_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_9, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_10 = 0;
// print inA_10 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_10, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_10 = 0*4;
  if (__xlx_apatb_param_inA_10) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_10)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_10, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_10_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_10, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_11 = 0;
// print inA_11 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_11, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_11 = 0*4;
  if (__xlx_apatb_param_inA_11) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_11)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_11, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_11_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_11, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_12 = 0;
// print inA_12 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_12, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_12 = 0*4;
  if (__xlx_apatb_param_inA_12) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_12)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_12, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_12_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_12, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_13 = 0;
// print inA_13 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_13, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_13 = 0*4;
  if (__xlx_apatb_param_inA_13) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_13)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_13, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_13_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_13, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_14 = 0;
// print inA_14 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_14, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_14 = 0*4;
  if (__xlx_apatb_param_inA_14) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_14)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_14, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_14_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_14, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_15 = 0;
// print inA_15 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_15, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_15 = 0*4;
  if (__xlx_apatb_param_inA_15) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_15)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_15, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_15_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_15, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_16 = 0;
// print inA_16 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_16, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_16 = 0*4;
  if (__xlx_apatb_param_inA_16) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_16)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_16, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_16_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_16, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_17 = 0;
// print inA_17 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_17, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_17 = 0*4;
  if (__xlx_apatb_param_inA_17) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_17)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_17, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_17_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_17, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_18 = 0;
// print inA_18 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_18, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_18 = 0*4;
  if (__xlx_apatb_param_inA_18) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_18)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_18, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_18_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_18, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inA_19 = 0;
// print inA_19 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA_19, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inA_19 = 0*4;
  if (__xlx_apatb_param_inA_19) {
    for (int j = 0  - 0, e = 24 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inA_19)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA_19, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(24, &tcl_file.inA_19_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA_19, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_0 = 0;
// print inB_0 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_0, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_0 = 0*4;
  if (__xlx_apatb_param_inB_0) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_0)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_0, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_0_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_0, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_1 = 0;
// print inB_1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_1, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_1 = 0*4;
  if (__xlx_apatb_param_inB_1) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_1)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_1, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_1, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_2 = 0;
// print inB_2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_2, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_2 = 0*4;
  if (__xlx_apatb_param_inB_2) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_2)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_2, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_2, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_3 = 0;
// print inB_3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_3, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_3 = 0*4;
  if (__xlx_apatb_param_inB_3) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_3)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_3, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_3, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_4 = 0;
// print inB_4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_4, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_4 = 0*4;
  if (__xlx_apatb_param_inB_4) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_4)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_4, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_4, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_5 = 0;
// print inB_5 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_5, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_5 = 0*4;
  if (__xlx_apatb_param_inB_5) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_5)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_5, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_5_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_5, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_6 = 0;
// print inB_6 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_6, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_6 = 0*4;
  if (__xlx_apatb_param_inB_6) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_6)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_6, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_6_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_6, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_7 = 0;
// print inB_7 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_7, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_7 = 0*4;
  if (__xlx_apatb_param_inB_7) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_7)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_7, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_7_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_7, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_8 = 0;
// print inB_8 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_8, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_8 = 0*4;
  if (__xlx_apatb_param_inB_8) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_8)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_8, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_8_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_8, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_9 = 0;
// print inB_9 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_9, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_9 = 0*4;
  if (__xlx_apatb_param_inB_9) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_9)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_9, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_9_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_9, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_10 = 0;
// print inB_10 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_10, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_10 = 0*4;
  if (__xlx_apatb_param_inB_10) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_10)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_10, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_10_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_10, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_11 = 0;
// print inB_11 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_11, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_11 = 0*4;
  if (__xlx_apatb_param_inB_11) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_11)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_11, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_11_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_11, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_12 = 0;
// print inB_12 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_12, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_12 = 0*4;
  if (__xlx_apatb_param_inB_12) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_12)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_12, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_12_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_12, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_13 = 0;
// print inB_13 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_13, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_13 = 0*4;
  if (__xlx_apatb_param_inB_13) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_13)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_13, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_13_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_13, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_14 = 0;
// print inB_14 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_14, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_14 = 0*4;
  if (__xlx_apatb_param_inB_14) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_14)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_14, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_14_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_14, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_15 = 0;
// print inB_15 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_15, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_15 = 0*4;
  if (__xlx_apatb_param_inB_15) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_15)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_15, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_15_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_15, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_16 = 0;
// print inB_16 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_16, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_16 = 0*4;
  if (__xlx_apatb_param_inB_16) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_16)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_16, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_16_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_16, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_17 = 0;
// print inB_17 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_17, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_17 = 0*4;
  if (__xlx_apatb_param_inB_17) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_17)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_17, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_17_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_17, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_18 = 0;
// print inB_18 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_18, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_18 = 0*4;
  if (__xlx_apatb_param_inB_18) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_18)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_18, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_18_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_18, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_19 = 0;
// print inB_19 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_19, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_19 = 0*4;
  if (__xlx_apatb_param_inB_19) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_19)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_19, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_19_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_19, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_20 = 0;
// print inB_20 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_20, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_20 = 0*4;
  if (__xlx_apatb_param_inB_20) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_20)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_20, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_20_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_20, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_21 = 0;
// print inB_21 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_21, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_21 = 0*4;
  if (__xlx_apatb_param_inB_21) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_21)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_21, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_21_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_21, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_22 = 0;
// print inB_22 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_22, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_22 = 0*4;
  if (__xlx_apatb_param_inB_22) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_22)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_22, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_22_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_22, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_inB_23 = 0;
// print inB_23 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB_23, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_inB_23 = 0*4;
  if (__xlx_apatb_param_inB_23) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_inB_23)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB_23, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.inB_23_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB_23, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_0 = 0;
// print out_0 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_0, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_0 = 0*4;
  if (__xlx_apatb_param_out_0) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_0)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_0, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_0_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_0, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_1 = 0;
// print out_1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_1, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_1 = 0*4;
  if (__xlx_apatb_param_out_1) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_1)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_1, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_1, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_2 = 0;
// print out_2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_2, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_2 = 0*4;
  if (__xlx_apatb_param_out_2) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_2)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_2, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_2, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_3 = 0;
// print out_3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_3, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_3 = 0*4;
  if (__xlx_apatb_param_out_3) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_3)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_3, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_3, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_4 = 0;
// print out_4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_4, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_4 = 0*4;
  if (__xlx_apatb_param_out_4) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_4)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_4, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_4, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_5 = 0;
// print out_5 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_5, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_5 = 0*4;
  if (__xlx_apatb_param_out_5) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_5)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_5, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_5_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_5, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_6 = 0;
// print out_6 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_6, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_6 = 0*4;
  if (__xlx_apatb_param_out_6) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_6)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_6, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_6_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_6, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_7 = 0;
// print out_7 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_7, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_7 = 0*4;
  if (__xlx_apatb_param_out_7) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_7)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_7, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_7_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_7, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_8 = 0;
// print out_8 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_8, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_8 = 0*4;
  if (__xlx_apatb_param_out_8) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_8)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_8, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_8_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_8, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_9 = 0;
// print out_9 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_9, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_9 = 0*4;
  if (__xlx_apatb_param_out_9) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_9)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_9, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_9_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_9, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_10 = 0;
// print out_10 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_10, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_10 = 0*4;
  if (__xlx_apatb_param_out_10) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_10)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_10, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_10_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_10, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_11 = 0;
// print out_11 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_11, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_11 = 0*4;
  if (__xlx_apatb_param_out_11) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_11)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_11, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_11_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_11, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_12 = 0;
// print out_12 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_12, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_12 = 0*4;
  if (__xlx_apatb_param_out_12) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_12)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_12, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_12_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_12, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_13 = 0;
// print out_13 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_13, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_13 = 0*4;
  if (__xlx_apatb_param_out_13) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_13)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_13, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_13_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_13, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_14 = 0;
// print out_14 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_14, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_14 = 0*4;
  if (__xlx_apatb_param_out_14) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_14)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_14, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_14_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_14, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_15 = 0;
// print out_15 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_15, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_15 = 0*4;
  if (__xlx_apatb_param_out_15) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_15)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_15, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_15_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_15, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_16 = 0;
// print out_16 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_16, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_16 = 0*4;
  if (__xlx_apatb_param_out_16) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_16)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_16, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_16_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_16, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_17 = 0;
// print out_17 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_17, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_17 = 0*4;
  if (__xlx_apatb_param_out_17) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_17)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_17, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_17_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_17, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_18 = 0;
// print out_18 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_18, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_18 = 0*4;
  if (__xlx_apatb_param_out_18) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_18)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_18, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_18_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_18, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_out_19 = 0;
// print out_19 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out_19, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_19 = 0*4;
  if (__xlx_apatb_param_out_19) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_19)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out_19, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_19_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out_19, __xlx_sprintf_buffer.data());
}
CodeState = CALL_C_DUT;
arr_mult_1d_hw_stub_wrapper(__xlx_apatb_param_inA_0, __xlx_apatb_param_inA_1, __xlx_apatb_param_inA_2, __xlx_apatb_param_inA_3, __xlx_apatb_param_inA_4, __xlx_apatb_param_inA_5, __xlx_apatb_param_inA_6, __xlx_apatb_param_inA_7, __xlx_apatb_param_inA_8, __xlx_apatb_param_inA_9, __xlx_apatb_param_inA_10, __xlx_apatb_param_inA_11, __xlx_apatb_param_inA_12, __xlx_apatb_param_inA_13, __xlx_apatb_param_inA_14, __xlx_apatb_param_inA_15, __xlx_apatb_param_inA_16, __xlx_apatb_param_inA_17, __xlx_apatb_param_inA_18, __xlx_apatb_param_inA_19, __xlx_apatb_param_inB_0, __xlx_apatb_param_inB_1, __xlx_apatb_param_inB_2, __xlx_apatb_param_inB_3, __xlx_apatb_param_inB_4, __xlx_apatb_param_inB_5, __xlx_apatb_param_inB_6, __xlx_apatb_param_inB_7, __xlx_apatb_param_inB_8, __xlx_apatb_param_inB_9, __xlx_apatb_param_inB_10, __xlx_apatb_param_inB_11, __xlx_apatb_param_inB_12, __xlx_apatb_param_inB_13, __xlx_apatb_param_inB_14, __xlx_apatb_param_inB_15, __xlx_apatb_param_inB_16, __xlx_apatb_param_inB_17, __xlx_apatb_param_inB_18, __xlx_apatb_param_inB_19, __xlx_apatb_param_inB_20, __xlx_apatb_param_inB_21, __xlx_apatb_param_inB_22, __xlx_apatb_param_inB_23, __xlx_apatb_param_out_0, __xlx_apatb_param_out_1, __xlx_apatb_param_out_2, __xlx_apatb_param_out_3, __xlx_apatb_param_out_4, __xlx_apatb_param_out_5, __xlx_apatb_param_out_6, __xlx_apatb_param_out_7, __xlx_apatb_param_out_8, __xlx_apatb_param_out_9, __xlx_apatb_param_out_10, __xlx_apatb_param_out_11, __xlx_apatb_param_out_12, __xlx_apatb_param_out_13, __xlx_apatb_param_out_14, __xlx_apatb_param_out_15, __xlx_apatb_param_out_16, __xlx_apatb_param_out_17, __xlx_apatb_param_out_18, __xlx_apatb_param_out_19);
CodeState = DUMP_OUTPUTS;
// print out_0 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_0, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_0 = 0*4;
  if (__xlx_apatb_param_out_0) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_0)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_0, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_0_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_0, __xlx_sprintf_buffer.data());
}
// print out_1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_1, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_1 = 0*4;
  if (__xlx_apatb_param_out_1) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_1)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_1, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_1, __xlx_sprintf_buffer.data());
}
// print out_2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_2, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_2 = 0*4;
  if (__xlx_apatb_param_out_2) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_2)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_2, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_2, __xlx_sprintf_buffer.data());
}
// print out_3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_3, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_3 = 0*4;
  if (__xlx_apatb_param_out_3) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_3)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_3, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_3, __xlx_sprintf_buffer.data());
}
// print out_4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_4, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_4 = 0*4;
  if (__xlx_apatb_param_out_4) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_4)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_4, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_4, __xlx_sprintf_buffer.data());
}
// print out_5 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_5, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_5 = 0*4;
  if (__xlx_apatb_param_out_5) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_5)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_5, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_5_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_5, __xlx_sprintf_buffer.data());
}
// print out_6 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_6, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_6 = 0*4;
  if (__xlx_apatb_param_out_6) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_6)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_6, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_6_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_6, __xlx_sprintf_buffer.data());
}
// print out_7 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_7, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_7 = 0*4;
  if (__xlx_apatb_param_out_7) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_7)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_7, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_7_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_7, __xlx_sprintf_buffer.data());
}
// print out_8 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_8, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_8 = 0*4;
  if (__xlx_apatb_param_out_8) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_8)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_8, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_8_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_8, __xlx_sprintf_buffer.data());
}
// print out_9 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_9, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_9 = 0*4;
  if (__xlx_apatb_param_out_9) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_9)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_9, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_9_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_9, __xlx_sprintf_buffer.data());
}
// print out_10 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_10, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_10 = 0*4;
  if (__xlx_apatb_param_out_10) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_10)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_10, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_10_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_10, __xlx_sprintf_buffer.data());
}
// print out_11 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_11, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_11 = 0*4;
  if (__xlx_apatb_param_out_11) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_11)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_11, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_11_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_11, __xlx_sprintf_buffer.data());
}
// print out_12 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_12, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_12 = 0*4;
  if (__xlx_apatb_param_out_12) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_12)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_12, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_12_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_12, __xlx_sprintf_buffer.data());
}
// print out_13 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_13, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_13 = 0*4;
  if (__xlx_apatb_param_out_13) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_13)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_13, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_13_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_13, __xlx_sprintf_buffer.data());
}
// print out_14 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_14, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_14 = 0*4;
  if (__xlx_apatb_param_out_14) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_14)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_14, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_14_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_14, __xlx_sprintf_buffer.data());
}
// print out_15 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_15, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_15 = 0*4;
  if (__xlx_apatb_param_out_15) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_15)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_15, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_15_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_15, __xlx_sprintf_buffer.data());
}
// print out_16 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_16, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_16 = 0*4;
  if (__xlx_apatb_param_out_16) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_16)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_16, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_16_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_16, __xlx_sprintf_buffer.data());
}
// print out_17 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_17, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_17 = 0*4;
  if (__xlx_apatb_param_out_17) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_17)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_17, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_17_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_17, __xlx_sprintf_buffer.data());
}
// print out_18 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_18, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_18 = 0*4;
  if (__xlx_apatb_param_out_18) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_18)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_18, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_18_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_18, __xlx_sprintf_buffer.data());
}
// print out_19 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out_19, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_out_19 = 0*4;
  if (__xlx_apatb_param_out_19) {
    for (int j = 0  - 0, e = 10 - 0; j != e; ++j) {
sc_bv<32> __xlx_tmp_lv = ((int*)__xlx_apatb_param_out_19)[j];

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out_19, s.append("\n")); 
      }
  }
}
  tcl_file.set_num(10, &tcl_file.out_19_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out_19, __xlx_sprintf_buffer.data());
}
CodeState = DELETE_CHAR_BUFFERS;
AESL_transaction++;
tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
}

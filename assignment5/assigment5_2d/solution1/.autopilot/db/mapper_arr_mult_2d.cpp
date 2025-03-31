#include <systemc>
#include <vector>
#include <iostream>
#include "hls_stream.h"
#include "ap_int.h"
#include "ap_fixed.h"
using namespace std;
using namespace sc_dt;
class AESL_RUNTIME_BC {
  public:
    AESL_RUNTIME_BC(const char* name) {
      file_token.open( name);
      if (!file_token.good()) {
        cout << "Failed to open tv file " << name << endl;
        exit (1);
      }
      file_token >> mName;//[[[runtime]]]
    }
    ~AESL_RUNTIME_BC() {
      file_token.close();
    }
    int read_size () {
      int size = 0;
      file_token >> mName;//[[transaction]]
      file_token >> mName;//transaction number
      file_token >> mName;//pop_size
      size = atoi(mName.c_str());
      file_token >> mName;//[[/transaction]]
      return size;
    }
  public:
    fstream file_token;
    string mName;
};
extern "C" void arr_mult_2d(int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
extern "C" void apatb_arr_mult_2d_hw(volatile void * __xlx_apatb_param_inA_0, volatile void * __xlx_apatb_param_inA_1, volatile void * __xlx_apatb_param_inA_2, volatile void * __xlx_apatb_param_inA_3, volatile void * __xlx_apatb_param_inA_4, volatile void * __xlx_apatb_param_inA_5, volatile void * __xlx_apatb_param_inA_6, volatile void * __xlx_apatb_param_inA_7, volatile void * __xlx_apatb_param_inA_8, volatile void * __xlx_apatb_param_inA_9, volatile void * __xlx_apatb_param_inA_10, volatile void * __xlx_apatb_param_inA_11, volatile void * __xlx_apatb_param_inA_12, volatile void * __xlx_apatb_param_inA_13, volatile void * __xlx_apatb_param_inA_14, volatile void * __xlx_apatb_param_inA_15, volatile void * __xlx_apatb_param_inA_16, volatile void * __xlx_apatb_param_inA_17, volatile void * __xlx_apatb_param_inA_18, volatile void * __xlx_apatb_param_inA_19, volatile void * __xlx_apatb_param_inA_20, volatile void * __xlx_apatb_param_inA_21, volatile void * __xlx_apatb_param_inA_22, volatile void * __xlx_apatb_param_inA_23, volatile void * __xlx_apatb_param_inB_0, volatile void * __xlx_apatb_param_inB_1, volatile void * __xlx_apatb_param_inB_2, volatile void * __xlx_apatb_param_inB_3, volatile void * __xlx_apatb_param_inB_4, volatile void * __xlx_apatb_param_inB_5, volatile void * __xlx_apatb_param_inB_6, volatile void * __xlx_apatb_param_inB_7, volatile void * __xlx_apatb_param_inB_8, volatile void * __xlx_apatb_param_inB_9, volatile void * __xlx_apatb_param_out_0, volatile void * __xlx_apatb_param_out_1, volatile void * __xlx_apatb_param_out_2, volatile void * __xlx_apatb_param_out_3, volatile void * __xlx_apatb_param_out_4, volatile void * __xlx_apatb_param_out_5, volatile void * __xlx_apatb_param_out_6, volatile void * __xlx_apatb_param_out_7, volatile void * __xlx_apatb_param_out_8, volatile void * __xlx_apatb_param_out_9) {
  // Collect __xlx_inA_0__tmp_vec
  vector<sc_bv<32> >__xlx_inA_0__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_0)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_0)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_0)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_0)[j*4+3];
    __xlx_inA_0__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_0 = 20;
  int __xlx_offset_param_inA_0 = 0;
  int __xlx_offset_byte_param_inA_0 = 0*4;
  int* __xlx_inA_0__input_buffer= new int[__xlx_inA_0__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_0__tmp_vec.size(); ++i) {
    __xlx_inA_0__input_buffer[i] = __xlx_inA_0__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_1__tmp_vec
  vector<sc_bv<32> >__xlx_inA_1__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_1)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_1)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_1)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_1)[j*4+3];
    __xlx_inA_1__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_1 = 20;
  int __xlx_offset_param_inA_1 = 0;
  int __xlx_offset_byte_param_inA_1 = 0*4;
  int* __xlx_inA_1__input_buffer= new int[__xlx_inA_1__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_1__tmp_vec.size(); ++i) {
    __xlx_inA_1__input_buffer[i] = __xlx_inA_1__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_2__tmp_vec
  vector<sc_bv<32> >__xlx_inA_2__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_2)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_2)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_2)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_2)[j*4+3];
    __xlx_inA_2__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_2 = 20;
  int __xlx_offset_param_inA_2 = 0;
  int __xlx_offset_byte_param_inA_2 = 0*4;
  int* __xlx_inA_2__input_buffer= new int[__xlx_inA_2__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_2__tmp_vec.size(); ++i) {
    __xlx_inA_2__input_buffer[i] = __xlx_inA_2__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_3__tmp_vec
  vector<sc_bv<32> >__xlx_inA_3__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_3)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_3)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_3)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_3)[j*4+3];
    __xlx_inA_3__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_3 = 20;
  int __xlx_offset_param_inA_3 = 0;
  int __xlx_offset_byte_param_inA_3 = 0*4;
  int* __xlx_inA_3__input_buffer= new int[__xlx_inA_3__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_3__tmp_vec.size(); ++i) {
    __xlx_inA_3__input_buffer[i] = __xlx_inA_3__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_4__tmp_vec
  vector<sc_bv<32> >__xlx_inA_4__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_4)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_4)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_4)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_4)[j*4+3];
    __xlx_inA_4__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_4 = 20;
  int __xlx_offset_param_inA_4 = 0;
  int __xlx_offset_byte_param_inA_4 = 0*4;
  int* __xlx_inA_4__input_buffer= new int[__xlx_inA_4__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_4__tmp_vec.size(); ++i) {
    __xlx_inA_4__input_buffer[i] = __xlx_inA_4__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_5__tmp_vec
  vector<sc_bv<32> >__xlx_inA_5__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_5)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_5)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_5)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_5)[j*4+3];
    __xlx_inA_5__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_5 = 20;
  int __xlx_offset_param_inA_5 = 0;
  int __xlx_offset_byte_param_inA_5 = 0*4;
  int* __xlx_inA_5__input_buffer= new int[__xlx_inA_5__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_5__tmp_vec.size(); ++i) {
    __xlx_inA_5__input_buffer[i] = __xlx_inA_5__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_6__tmp_vec
  vector<sc_bv<32> >__xlx_inA_6__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_6)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_6)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_6)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_6)[j*4+3];
    __xlx_inA_6__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_6 = 20;
  int __xlx_offset_param_inA_6 = 0;
  int __xlx_offset_byte_param_inA_6 = 0*4;
  int* __xlx_inA_6__input_buffer= new int[__xlx_inA_6__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_6__tmp_vec.size(); ++i) {
    __xlx_inA_6__input_buffer[i] = __xlx_inA_6__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_7__tmp_vec
  vector<sc_bv<32> >__xlx_inA_7__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_7)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_7)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_7)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_7)[j*4+3];
    __xlx_inA_7__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_7 = 20;
  int __xlx_offset_param_inA_7 = 0;
  int __xlx_offset_byte_param_inA_7 = 0*4;
  int* __xlx_inA_7__input_buffer= new int[__xlx_inA_7__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_7__tmp_vec.size(); ++i) {
    __xlx_inA_7__input_buffer[i] = __xlx_inA_7__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_8__tmp_vec
  vector<sc_bv<32> >__xlx_inA_8__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_8)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_8)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_8)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_8)[j*4+3];
    __xlx_inA_8__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_8 = 20;
  int __xlx_offset_param_inA_8 = 0;
  int __xlx_offset_byte_param_inA_8 = 0*4;
  int* __xlx_inA_8__input_buffer= new int[__xlx_inA_8__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_8__tmp_vec.size(); ++i) {
    __xlx_inA_8__input_buffer[i] = __xlx_inA_8__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_9__tmp_vec
  vector<sc_bv<32> >__xlx_inA_9__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_9)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_9)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_9)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_9)[j*4+3];
    __xlx_inA_9__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_9 = 20;
  int __xlx_offset_param_inA_9 = 0;
  int __xlx_offset_byte_param_inA_9 = 0*4;
  int* __xlx_inA_9__input_buffer= new int[__xlx_inA_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_9__tmp_vec.size(); ++i) {
    __xlx_inA_9__input_buffer[i] = __xlx_inA_9__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_10__tmp_vec
  vector<sc_bv<32> >__xlx_inA_10__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_10)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_10)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_10)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_10)[j*4+3];
    __xlx_inA_10__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_10 = 20;
  int __xlx_offset_param_inA_10 = 0;
  int __xlx_offset_byte_param_inA_10 = 0*4;
  int* __xlx_inA_10__input_buffer= new int[__xlx_inA_10__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_10__tmp_vec.size(); ++i) {
    __xlx_inA_10__input_buffer[i] = __xlx_inA_10__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_11__tmp_vec
  vector<sc_bv<32> >__xlx_inA_11__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_11)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_11)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_11)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_11)[j*4+3];
    __xlx_inA_11__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_11 = 20;
  int __xlx_offset_param_inA_11 = 0;
  int __xlx_offset_byte_param_inA_11 = 0*4;
  int* __xlx_inA_11__input_buffer= new int[__xlx_inA_11__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_11__tmp_vec.size(); ++i) {
    __xlx_inA_11__input_buffer[i] = __xlx_inA_11__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_12__tmp_vec
  vector<sc_bv<32> >__xlx_inA_12__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_12)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_12)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_12)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_12)[j*4+3];
    __xlx_inA_12__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_12 = 20;
  int __xlx_offset_param_inA_12 = 0;
  int __xlx_offset_byte_param_inA_12 = 0*4;
  int* __xlx_inA_12__input_buffer= new int[__xlx_inA_12__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_12__tmp_vec.size(); ++i) {
    __xlx_inA_12__input_buffer[i] = __xlx_inA_12__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_13__tmp_vec
  vector<sc_bv<32> >__xlx_inA_13__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_13)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_13)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_13)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_13)[j*4+3];
    __xlx_inA_13__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_13 = 20;
  int __xlx_offset_param_inA_13 = 0;
  int __xlx_offset_byte_param_inA_13 = 0*4;
  int* __xlx_inA_13__input_buffer= new int[__xlx_inA_13__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_13__tmp_vec.size(); ++i) {
    __xlx_inA_13__input_buffer[i] = __xlx_inA_13__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_14__tmp_vec
  vector<sc_bv<32> >__xlx_inA_14__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_14)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_14)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_14)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_14)[j*4+3];
    __xlx_inA_14__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_14 = 20;
  int __xlx_offset_param_inA_14 = 0;
  int __xlx_offset_byte_param_inA_14 = 0*4;
  int* __xlx_inA_14__input_buffer= new int[__xlx_inA_14__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_14__tmp_vec.size(); ++i) {
    __xlx_inA_14__input_buffer[i] = __xlx_inA_14__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_15__tmp_vec
  vector<sc_bv<32> >__xlx_inA_15__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_15)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_15)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_15)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_15)[j*4+3];
    __xlx_inA_15__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_15 = 20;
  int __xlx_offset_param_inA_15 = 0;
  int __xlx_offset_byte_param_inA_15 = 0*4;
  int* __xlx_inA_15__input_buffer= new int[__xlx_inA_15__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_15__tmp_vec.size(); ++i) {
    __xlx_inA_15__input_buffer[i] = __xlx_inA_15__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_16__tmp_vec
  vector<sc_bv<32> >__xlx_inA_16__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_16)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_16)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_16)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_16)[j*4+3];
    __xlx_inA_16__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_16 = 20;
  int __xlx_offset_param_inA_16 = 0;
  int __xlx_offset_byte_param_inA_16 = 0*4;
  int* __xlx_inA_16__input_buffer= new int[__xlx_inA_16__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_16__tmp_vec.size(); ++i) {
    __xlx_inA_16__input_buffer[i] = __xlx_inA_16__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_17__tmp_vec
  vector<sc_bv<32> >__xlx_inA_17__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_17)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_17)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_17)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_17)[j*4+3];
    __xlx_inA_17__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_17 = 20;
  int __xlx_offset_param_inA_17 = 0;
  int __xlx_offset_byte_param_inA_17 = 0*4;
  int* __xlx_inA_17__input_buffer= new int[__xlx_inA_17__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_17__tmp_vec.size(); ++i) {
    __xlx_inA_17__input_buffer[i] = __xlx_inA_17__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_18__tmp_vec
  vector<sc_bv<32> >__xlx_inA_18__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_18)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_18)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_18)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_18)[j*4+3];
    __xlx_inA_18__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_18 = 20;
  int __xlx_offset_param_inA_18 = 0;
  int __xlx_offset_byte_param_inA_18 = 0*4;
  int* __xlx_inA_18__input_buffer= new int[__xlx_inA_18__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_18__tmp_vec.size(); ++i) {
    __xlx_inA_18__input_buffer[i] = __xlx_inA_18__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_19__tmp_vec
  vector<sc_bv<32> >__xlx_inA_19__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_19)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_19)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_19)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_19)[j*4+3];
    __xlx_inA_19__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_19 = 20;
  int __xlx_offset_param_inA_19 = 0;
  int __xlx_offset_byte_param_inA_19 = 0*4;
  int* __xlx_inA_19__input_buffer= new int[__xlx_inA_19__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_19__tmp_vec.size(); ++i) {
    __xlx_inA_19__input_buffer[i] = __xlx_inA_19__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_20__tmp_vec
  vector<sc_bv<32> >__xlx_inA_20__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_20)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_20)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_20)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_20)[j*4+3];
    __xlx_inA_20__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_20 = 20;
  int __xlx_offset_param_inA_20 = 0;
  int __xlx_offset_byte_param_inA_20 = 0*4;
  int* __xlx_inA_20__input_buffer= new int[__xlx_inA_20__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_20__tmp_vec.size(); ++i) {
    __xlx_inA_20__input_buffer[i] = __xlx_inA_20__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_21__tmp_vec
  vector<sc_bv<32> >__xlx_inA_21__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_21)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_21)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_21)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_21)[j*4+3];
    __xlx_inA_21__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_21 = 20;
  int __xlx_offset_param_inA_21 = 0;
  int __xlx_offset_byte_param_inA_21 = 0*4;
  int* __xlx_inA_21__input_buffer= new int[__xlx_inA_21__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_21__tmp_vec.size(); ++i) {
    __xlx_inA_21__input_buffer[i] = __xlx_inA_21__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_22__tmp_vec
  vector<sc_bv<32> >__xlx_inA_22__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_22)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_22)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_22)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_22)[j*4+3];
    __xlx_inA_22__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_22 = 20;
  int __xlx_offset_param_inA_22 = 0;
  int __xlx_offset_byte_param_inA_22 = 0*4;
  int* __xlx_inA_22__input_buffer= new int[__xlx_inA_22__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_22__tmp_vec.size(); ++i) {
    __xlx_inA_22__input_buffer[i] = __xlx_inA_22__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inA_23__tmp_vec
  vector<sc_bv<32> >__xlx_inA_23__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inA_23)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inA_23)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inA_23)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inA_23)[j*4+3];
    __xlx_inA_23__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inA_23 = 20;
  int __xlx_offset_param_inA_23 = 0;
  int __xlx_offset_byte_param_inA_23 = 0*4;
  int* __xlx_inA_23__input_buffer= new int[__xlx_inA_23__tmp_vec.size()];
  for (int i = 0; i < __xlx_inA_23__tmp_vec.size(); ++i) {
    __xlx_inA_23__input_buffer[i] = __xlx_inA_23__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_0__tmp_vec
  vector<sc_bv<32> >__xlx_inB_0__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_0)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_0)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_0)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_0)[j*4+3];
    __xlx_inB_0__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_0 = 24;
  int __xlx_offset_param_inB_0 = 0;
  int __xlx_offset_byte_param_inB_0 = 0*4;
  int* __xlx_inB_0__input_buffer= new int[__xlx_inB_0__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_0__tmp_vec.size(); ++i) {
    __xlx_inB_0__input_buffer[i] = __xlx_inB_0__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_1__tmp_vec
  vector<sc_bv<32> >__xlx_inB_1__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_1)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_1)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_1)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_1)[j*4+3];
    __xlx_inB_1__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_1 = 24;
  int __xlx_offset_param_inB_1 = 0;
  int __xlx_offset_byte_param_inB_1 = 0*4;
  int* __xlx_inB_1__input_buffer= new int[__xlx_inB_1__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_1__tmp_vec.size(); ++i) {
    __xlx_inB_1__input_buffer[i] = __xlx_inB_1__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_2__tmp_vec
  vector<sc_bv<32> >__xlx_inB_2__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_2)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_2)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_2)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_2)[j*4+3];
    __xlx_inB_2__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_2 = 24;
  int __xlx_offset_param_inB_2 = 0;
  int __xlx_offset_byte_param_inB_2 = 0*4;
  int* __xlx_inB_2__input_buffer= new int[__xlx_inB_2__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_2__tmp_vec.size(); ++i) {
    __xlx_inB_2__input_buffer[i] = __xlx_inB_2__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_3__tmp_vec
  vector<sc_bv<32> >__xlx_inB_3__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_3)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_3)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_3)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_3)[j*4+3];
    __xlx_inB_3__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_3 = 24;
  int __xlx_offset_param_inB_3 = 0;
  int __xlx_offset_byte_param_inB_3 = 0*4;
  int* __xlx_inB_3__input_buffer= new int[__xlx_inB_3__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_3__tmp_vec.size(); ++i) {
    __xlx_inB_3__input_buffer[i] = __xlx_inB_3__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_4__tmp_vec
  vector<sc_bv<32> >__xlx_inB_4__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_4)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_4)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_4)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_4)[j*4+3];
    __xlx_inB_4__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_4 = 24;
  int __xlx_offset_param_inB_4 = 0;
  int __xlx_offset_byte_param_inB_4 = 0*4;
  int* __xlx_inB_4__input_buffer= new int[__xlx_inB_4__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_4__tmp_vec.size(); ++i) {
    __xlx_inB_4__input_buffer[i] = __xlx_inB_4__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_5__tmp_vec
  vector<sc_bv<32> >__xlx_inB_5__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_5)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_5)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_5)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_5)[j*4+3];
    __xlx_inB_5__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_5 = 24;
  int __xlx_offset_param_inB_5 = 0;
  int __xlx_offset_byte_param_inB_5 = 0*4;
  int* __xlx_inB_5__input_buffer= new int[__xlx_inB_5__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_5__tmp_vec.size(); ++i) {
    __xlx_inB_5__input_buffer[i] = __xlx_inB_5__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_6__tmp_vec
  vector<sc_bv<32> >__xlx_inB_6__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_6)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_6)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_6)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_6)[j*4+3];
    __xlx_inB_6__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_6 = 24;
  int __xlx_offset_param_inB_6 = 0;
  int __xlx_offset_byte_param_inB_6 = 0*4;
  int* __xlx_inB_6__input_buffer= new int[__xlx_inB_6__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_6__tmp_vec.size(); ++i) {
    __xlx_inB_6__input_buffer[i] = __xlx_inB_6__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_7__tmp_vec
  vector<sc_bv<32> >__xlx_inB_7__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_7)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_7)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_7)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_7)[j*4+3];
    __xlx_inB_7__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_7 = 24;
  int __xlx_offset_param_inB_7 = 0;
  int __xlx_offset_byte_param_inB_7 = 0*4;
  int* __xlx_inB_7__input_buffer= new int[__xlx_inB_7__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_7__tmp_vec.size(); ++i) {
    __xlx_inB_7__input_buffer[i] = __xlx_inB_7__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_8__tmp_vec
  vector<sc_bv<32> >__xlx_inB_8__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_8)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_8)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_8)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_8)[j*4+3];
    __xlx_inB_8__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_8 = 24;
  int __xlx_offset_param_inB_8 = 0;
  int __xlx_offset_byte_param_inB_8 = 0*4;
  int* __xlx_inB_8__input_buffer= new int[__xlx_inB_8__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_8__tmp_vec.size(); ++i) {
    __xlx_inB_8__input_buffer[i] = __xlx_inB_8__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_inB_9__tmp_vec
  vector<sc_bv<32> >__xlx_inB_9__tmp_vec;
  for (int j = 0, e = 24; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_inB_9)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_inB_9)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_inB_9)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_inB_9)[j*4+3];
    __xlx_inB_9__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_inB_9 = 24;
  int __xlx_offset_param_inB_9 = 0;
  int __xlx_offset_byte_param_inB_9 = 0*4;
  int* __xlx_inB_9__input_buffer= new int[__xlx_inB_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_inB_9__tmp_vec.size(); ++i) {
    __xlx_inB_9__input_buffer[i] = __xlx_inB_9__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_0__tmp_vec
  vector<sc_bv<32> >__xlx_out_0__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_0)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_0)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_0)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_0)[j*4+3];
    __xlx_out_0__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_0 = 20;
  int __xlx_offset_param_out_0 = 0;
  int __xlx_offset_byte_param_out_0 = 0*4;
  int* __xlx_out_0__input_buffer= new int[__xlx_out_0__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_0__tmp_vec.size(); ++i) {
    __xlx_out_0__input_buffer[i] = __xlx_out_0__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_1__tmp_vec
  vector<sc_bv<32> >__xlx_out_1__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_1)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_1)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_1)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_1)[j*4+3];
    __xlx_out_1__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_1 = 20;
  int __xlx_offset_param_out_1 = 0;
  int __xlx_offset_byte_param_out_1 = 0*4;
  int* __xlx_out_1__input_buffer= new int[__xlx_out_1__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_1__tmp_vec.size(); ++i) {
    __xlx_out_1__input_buffer[i] = __xlx_out_1__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_2__tmp_vec
  vector<sc_bv<32> >__xlx_out_2__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_2)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_2)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_2)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_2)[j*4+3];
    __xlx_out_2__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_2 = 20;
  int __xlx_offset_param_out_2 = 0;
  int __xlx_offset_byte_param_out_2 = 0*4;
  int* __xlx_out_2__input_buffer= new int[__xlx_out_2__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_2__tmp_vec.size(); ++i) {
    __xlx_out_2__input_buffer[i] = __xlx_out_2__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_3__tmp_vec
  vector<sc_bv<32> >__xlx_out_3__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_3)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_3)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_3)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_3)[j*4+3];
    __xlx_out_3__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_3 = 20;
  int __xlx_offset_param_out_3 = 0;
  int __xlx_offset_byte_param_out_3 = 0*4;
  int* __xlx_out_3__input_buffer= new int[__xlx_out_3__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_3__tmp_vec.size(); ++i) {
    __xlx_out_3__input_buffer[i] = __xlx_out_3__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_4__tmp_vec
  vector<sc_bv<32> >__xlx_out_4__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_4)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_4)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_4)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_4)[j*4+3];
    __xlx_out_4__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_4 = 20;
  int __xlx_offset_param_out_4 = 0;
  int __xlx_offset_byte_param_out_4 = 0*4;
  int* __xlx_out_4__input_buffer= new int[__xlx_out_4__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_4__tmp_vec.size(); ++i) {
    __xlx_out_4__input_buffer[i] = __xlx_out_4__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_5__tmp_vec
  vector<sc_bv<32> >__xlx_out_5__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_5)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_5)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_5)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_5)[j*4+3];
    __xlx_out_5__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_5 = 20;
  int __xlx_offset_param_out_5 = 0;
  int __xlx_offset_byte_param_out_5 = 0*4;
  int* __xlx_out_5__input_buffer= new int[__xlx_out_5__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_5__tmp_vec.size(); ++i) {
    __xlx_out_5__input_buffer[i] = __xlx_out_5__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_6__tmp_vec
  vector<sc_bv<32> >__xlx_out_6__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_6)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_6)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_6)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_6)[j*4+3];
    __xlx_out_6__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_6 = 20;
  int __xlx_offset_param_out_6 = 0;
  int __xlx_offset_byte_param_out_6 = 0*4;
  int* __xlx_out_6__input_buffer= new int[__xlx_out_6__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_6__tmp_vec.size(); ++i) {
    __xlx_out_6__input_buffer[i] = __xlx_out_6__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_7__tmp_vec
  vector<sc_bv<32> >__xlx_out_7__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_7)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_7)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_7)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_7)[j*4+3];
    __xlx_out_7__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_7 = 20;
  int __xlx_offset_param_out_7 = 0;
  int __xlx_offset_byte_param_out_7 = 0*4;
  int* __xlx_out_7__input_buffer= new int[__xlx_out_7__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_7__tmp_vec.size(); ++i) {
    __xlx_out_7__input_buffer[i] = __xlx_out_7__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_8__tmp_vec
  vector<sc_bv<32> >__xlx_out_8__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_8)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_8)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_8)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_8)[j*4+3];
    __xlx_out_8__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_8 = 20;
  int __xlx_offset_param_out_8 = 0;
  int __xlx_offset_byte_param_out_8 = 0*4;
  int* __xlx_out_8__input_buffer= new int[__xlx_out_8__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_8__tmp_vec.size(); ++i) {
    __xlx_out_8__input_buffer[i] = __xlx_out_8__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_out_9__tmp_vec
  vector<sc_bv<32> >__xlx_out_9__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    sc_bv<32> _xlx_tmp_sc;
    _xlx_tmp_sc.range(7, 0) = ((char*)__xlx_apatb_param_out_9)[j*4+0];
    _xlx_tmp_sc.range(15, 8) = ((char*)__xlx_apatb_param_out_9)[j*4+1];
    _xlx_tmp_sc.range(23, 16) = ((char*)__xlx_apatb_param_out_9)[j*4+2];
    _xlx_tmp_sc.range(31, 24) = ((char*)__xlx_apatb_param_out_9)[j*4+3];
    __xlx_out_9__tmp_vec.push_back(_xlx_tmp_sc);
  }
  int __xlx_size_param_out_9 = 20;
  int __xlx_offset_param_out_9 = 0;
  int __xlx_offset_byte_param_out_9 = 0*4;
  int* __xlx_out_9__input_buffer= new int[__xlx_out_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_out_9__tmp_vec.size(); ++i) {
    __xlx_out_9__input_buffer[i] = __xlx_out_9__tmp_vec[i].range(31, 0).to_uint64();
  }
  // DUT call
  arr_mult_2d(__xlx_inA_0__input_buffer, __xlx_inA_1__input_buffer, __xlx_inA_2__input_buffer, __xlx_inA_3__input_buffer, __xlx_inA_4__input_buffer, __xlx_inA_5__input_buffer, __xlx_inA_6__input_buffer, __xlx_inA_7__input_buffer, __xlx_inA_8__input_buffer, __xlx_inA_9__input_buffer, __xlx_inA_10__input_buffer, __xlx_inA_11__input_buffer, __xlx_inA_12__input_buffer, __xlx_inA_13__input_buffer, __xlx_inA_14__input_buffer, __xlx_inA_15__input_buffer, __xlx_inA_16__input_buffer, __xlx_inA_17__input_buffer, __xlx_inA_18__input_buffer, __xlx_inA_19__input_buffer, __xlx_inA_20__input_buffer, __xlx_inA_21__input_buffer, __xlx_inA_22__input_buffer, __xlx_inA_23__input_buffer, __xlx_inB_0__input_buffer, __xlx_inB_1__input_buffer, __xlx_inB_2__input_buffer, __xlx_inB_3__input_buffer, __xlx_inB_4__input_buffer, __xlx_inB_5__input_buffer, __xlx_inB_6__input_buffer, __xlx_inB_7__input_buffer, __xlx_inB_8__input_buffer, __xlx_inB_9__input_buffer, __xlx_out_0__input_buffer, __xlx_out_1__input_buffer, __xlx_out_2__input_buffer, __xlx_out_3__input_buffer, __xlx_out_4__input_buffer, __xlx_out_5__input_buffer, __xlx_out_6__input_buffer, __xlx_out_7__input_buffer, __xlx_out_8__input_buffer, __xlx_out_9__input_buffer);
// print __xlx_apatb_param_inA_0
  sc_bv<32>*__xlx_inA_0_output_buffer = new sc_bv<32>[__xlx_size_param_inA_0];
  for (int i = 0; i < __xlx_size_param_inA_0; ++i) {
    __xlx_inA_0_output_buffer[i] = __xlx_inA_0__input_buffer[i+__xlx_offset_param_inA_0];
  }
  for (int i = 0; i < __xlx_size_param_inA_0; ++i) {
    ((char*)__xlx_apatb_param_inA_0)[i*4+0] = __xlx_inA_0_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_0)[i*4+1] = __xlx_inA_0_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_0)[i*4+2] = __xlx_inA_0_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_0)[i*4+3] = __xlx_inA_0_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_1
  sc_bv<32>*__xlx_inA_1_output_buffer = new sc_bv<32>[__xlx_size_param_inA_1];
  for (int i = 0; i < __xlx_size_param_inA_1; ++i) {
    __xlx_inA_1_output_buffer[i] = __xlx_inA_1__input_buffer[i+__xlx_offset_param_inA_1];
  }
  for (int i = 0; i < __xlx_size_param_inA_1; ++i) {
    ((char*)__xlx_apatb_param_inA_1)[i*4+0] = __xlx_inA_1_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_1)[i*4+1] = __xlx_inA_1_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_1)[i*4+2] = __xlx_inA_1_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_1)[i*4+3] = __xlx_inA_1_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_2
  sc_bv<32>*__xlx_inA_2_output_buffer = new sc_bv<32>[__xlx_size_param_inA_2];
  for (int i = 0; i < __xlx_size_param_inA_2; ++i) {
    __xlx_inA_2_output_buffer[i] = __xlx_inA_2__input_buffer[i+__xlx_offset_param_inA_2];
  }
  for (int i = 0; i < __xlx_size_param_inA_2; ++i) {
    ((char*)__xlx_apatb_param_inA_2)[i*4+0] = __xlx_inA_2_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_2)[i*4+1] = __xlx_inA_2_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_2)[i*4+2] = __xlx_inA_2_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_2)[i*4+3] = __xlx_inA_2_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_3
  sc_bv<32>*__xlx_inA_3_output_buffer = new sc_bv<32>[__xlx_size_param_inA_3];
  for (int i = 0; i < __xlx_size_param_inA_3; ++i) {
    __xlx_inA_3_output_buffer[i] = __xlx_inA_3__input_buffer[i+__xlx_offset_param_inA_3];
  }
  for (int i = 0; i < __xlx_size_param_inA_3; ++i) {
    ((char*)__xlx_apatb_param_inA_3)[i*4+0] = __xlx_inA_3_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_3)[i*4+1] = __xlx_inA_3_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_3)[i*4+2] = __xlx_inA_3_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_3)[i*4+3] = __xlx_inA_3_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_4
  sc_bv<32>*__xlx_inA_4_output_buffer = new sc_bv<32>[__xlx_size_param_inA_4];
  for (int i = 0; i < __xlx_size_param_inA_4; ++i) {
    __xlx_inA_4_output_buffer[i] = __xlx_inA_4__input_buffer[i+__xlx_offset_param_inA_4];
  }
  for (int i = 0; i < __xlx_size_param_inA_4; ++i) {
    ((char*)__xlx_apatb_param_inA_4)[i*4+0] = __xlx_inA_4_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_4)[i*4+1] = __xlx_inA_4_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_4)[i*4+2] = __xlx_inA_4_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_4)[i*4+3] = __xlx_inA_4_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_5
  sc_bv<32>*__xlx_inA_5_output_buffer = new sc_bv<32>[__xlx_size_param_inA_5];
  for (int i = 0; i < __xlx_size_param_inA_5; ++i) {
    __xlx_inA_5_output_buffer[i] = __xlx_inA_5__input_buffer[i+__xlx_offset_param_inA_5];
  }
  for (int i = 0; i < __xlx_size_param_inA_5; ++i) {
    ((char*)__xlx_apatb_param_inA_5)[i*4+0] = __xlx_inA_5_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_5)[i*4+1] = __xlx_inA_5_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_5)[i*4+2] = __xlx_inA_5_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_5)[i*4+3] = __xlx_inA_5_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_6
  sc_bv<32>*__xlx_inA_6_output_buffer = new sc_bv<32>[__xlx_size_param_inA_6];
  for (int i = 0; i < __xlx_size_param_inA_6; ++i) {
    __xlx_inA_6_output_buffer[i] = __xlx_inA_6__input_buffer[i+__xlx_offset_param_inA_6];
  }
  for (int i = 0; i < __xlx_size_param_inA_6; ++i) {
    ((char*)__xlx_apatb_param_inA_6)[i*4+0] = __xlx_inA_6_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_6)[i*4+1] = __xlx_inA_6_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_6)[i*4+2] = __xlx_inA_6_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_6)[i*4+3] = __xlx_inA_6_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_7
  sc_bv<32>*__xlx_inA_7_output_buffer = new sc_bv<32>[__xlx_size_param_inA_7];
  for (int i = 0; i < __xlx_size_param_inA_7; ++i) {
    __xlx_inA_7_output_buffer[i] = __xlx_inA_7__input_buffer[i+__xlx_offset_param_inA_7];
  }
  for (int i = 0; i < __xlx_size_param_inA_7; ++i) {
    ((char*)__xlx_apatb_param_inA_7)[i*4+0] = __xlx_inA_7_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_7)[i*4+1] = __xlx_inA_7_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_7)[i*4+2] = __xlx_inA_7_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_7)[i*4+3] = __xlx_inA_7_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_8
  sc_bv<32>*__xlx_inA_8_output_buffer = new sc_bv<32>[__xlx_size_param_inA_8];
  for (int i = 0; i < __xlx_size_param_inA_8; ++i) {
    __xlx_inA_8_output_buffer[i] = __xlx_inA_8__input_buffer[i+__xlx_offset_param_inA_8];
  }
  for (int i = 0; i < __xlx_size_param_inA_8; ++i) {
    ((char*)__xlx_apatb_param_inA_8)[i*4+0] = __xlx_inA_8_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_8)[i*4+1] = __xlx_inA_8_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_8)[i*4+2] = __xlx_inA_8_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_8)[i*4+3] = __xlx_inA_8_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_9
  sc_bv<32>*__xlx_inA_9_output_buffer = new sc_bv<32>[__xlx_size_param_inA_9];
  for (int i = 0; i < __xlx_size_param_inA_9; ++i) {
    __xlx_inA_9_output_buffer[i] = __xlx_inA_9__input_buffer[i+__xlx_offset_param_inA_9];
  }
  for (int i = 0; i < __xlx_size_param_inA_9; ++i) {
    ((char*)__xlx_apatb_param_inA_9)[i*4+0] = __xlx_inA_9_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_9)[i*4+1] = __xlx_inA_9_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_9)[i*4+2] = __xlx_inA_9_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_9)[i*4+3] = __xlx_inA_9_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_10
  sc_bv<32>*__xlx_inA_10_output_buffer = new sc_bv<32>[__xlx_size_param_inA_10];
  for (int i = 0; i < __xlx_size_param_inA_10; ++i) {
    __xlx_inA_10_output_buffer[i] = __xlx_inA_10__input_buffer[i+__xlx_offset_param_inA_10];
  }
  for (int i = 0; i < __xlx_size_param_inA_10; ++i) {
    ((char*)__xlx_apatb_param_inA_10)[i*4+0] = __xlx_inA_10_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_10)[i*4+1] = __xlx_inA_10_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_10)[i*4+2] = __xlx_inA_10_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_10)[i*4+3] = __xlx_inA_10_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_11
  sc_bv<32>*__xlx_inA_11_output_buffer = new sc_bv<32>[__xlx_size_param_inA_11];
  for (int i = 0; i < __xlx_size_param_inA_11; ++i) {
    __xlx_inA_11_output_buffer[i] = __xlx_inA_11__input_buffer[i+__xlx_offset_param_inA_11];
  }
  for (int i = 0; i < __xlx_size_param_inA_11; ++i) {
    ((char*)__xlx_apatb_param_inA_11)[i*4+0] = __xlx_inA_11_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_11)[i*4+1] = __xlx_inA_11_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_11)[i*4+2] = __xlx_inA_11_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_11)[i*4+3] = __xlx_inA_11_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_12
  sc_bv<32>*__xlx_inA_12_output_buffer = new sc_bv<32>[__xlx_size_param_inA_12];
  for (int i = 0; i < __xlx_size_param_inA_12; ++i) {
    __xlx_inA_12_output_buffer[i] = __xlx_inA_12__input_buffer[i+__xlx_offset_param_inA_12];
  }
  for (int i = 0; i < __xlx_size_param_inA_12; ++i) {
    ((char*)__xlx_apatb_param_inA_12)[i*4+0] = __xlx_inA_12_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_12)[i*4+1] = __xlx_inA_12_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_12)[i*4+2] = __xlx_inA_12_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_12)[i*4+3] = __xlx_inA_12_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_13
  sc_bv<32>*__xlx_inA_13_output_buffer = new sc_bv<32>[__xlx_size_param_inA_13];
  for (int i = 0; i < __xlx_size_param_inA_13; ++i) {
    __xlx_inA_13_output_buffer[i] = __xlx_inA_13__input_buffer[i+__xlx_offset_param_inA_13];
  }
  for (int i = 0; i < __xlx_size_param_inA_13; ++i) {
    ((char*)__xlx_apatb_param_inA_13)[i*4+0] = __xlx_inA_13_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_13)[i*4+1] = __xlx_inA_13_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_13)[i*4+2] = __xlx_inA_13_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_13)[i*4+3] = __xlx_inA_13_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_14
  sc_bv<32>*__xlx_inA_14_output_buffer = new sc_bv<32>[__xlx_size_param_inA_14];
  for (int i = 0; i < __xlx_size_param_inA_14; ++i) {
    __xlx_inA_14_output_buffer[i] = __xlx_inA_14__input_buffer[i+__xlx_offset_param_inA_14];
  }
  for (int i = 0; i < __xlx_size_param_inA_14; ++i) {
    ((char*)__xlx_apatb_param_inA_14)[i*4+0] = __xlx_inA_14_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_14)[i*4+1] = __xlx_inA_14_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_14)[i*4+2] = __xlx_inA_14_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_14)[i*4+3] = __xlx_inA_14_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_15
  sc_bv<32>*__xlx_inA_15_output_buffer = new sc_bv<32>[__xlx_size_param_inA_15];
  for (int i = 0; i < __xlx_size_param_inA_15; ++i) {
    __xlx_inA_15_output_buffer[i] = __xlx_inA_15__input_buffer[i+__xlx_offset_param_inA_15];
  }
  for (int i = 0; i < __xlx_size_param_inA_15; ++i) {
    ((char*)__xlx_apatb_param_inA_15)[i*4+0] = __xlx_inA_15_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_15)[i*4+1] = __xlx_inA_15_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_15)[i*4+2] = __xlx_inA_15_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_15)[i*4+3] = __xlx_inA_15_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_16
  sc_bv<32>*__xlx_inA_16_output_buffer = new sc_bv<32>[__xlx_size_param_inA_16];
  for (int i = 0; i < __xlx_size_param_inA_16; ++i) {
    __xlx_inA_16_output_buffer[i] = __xlx_inA_16__input_buffer[i+__xlx_offset_param_inA_16];
  }
  for (int i = 0; i < __xlx_size_param_inA_16; ++i) {
    ((char*)__xlx_apatb_param_inA_16)[i*4+0] = __xlx_inA_16_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_16)[i*4+1] = __xlx_inA_16_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_16)[i*4+2] = __xlx_inA_16_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_16)[i*4+3] = __xlx_inA_16_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_17
  sc_bv<32>*__xlx_inA_17_output_buffer = new sc_bv<32>[__xlx_size_param_inA_17];
  for (int i = 0; i < __xlx_size_param_inA_17; ++i) {
    __xlx_inA_17_output_buffer[i] = __xlx_inA_17__input_buffer[i+__xlx_offset_param_inA_17];
  }
  for (int i = 0; i < __xlx_size_param_inA_17; ++i) {
    ((char*)__xlx_apatb_param_inA_17)[i*4+0] = __xlx_inA_17_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_17)[i*4+1] = __xlx_inA_17_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_17)[i*4+2] = __xlx_inA_17_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_17)[i*4+3] = __xlx_inA_17_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_18
  sc_bv<32>*__xlx_inA_18_output_buffer = new sc_bv<32>[__xlx_size_param_inA_18];
  for (int i = 0; i < __xlx_size_param_inA_18; ++i) {
    __xlx_inA_18_output_buffer[i] = __xlx_inA_18__input_buffer[i+__xlx_offset_param_inA_18];
  }
  for (int i = 0; i < __xlx_size_param_inA_18; ++i) {
    ((char*)__xlx_apatb_param_inA_18)[i*4+0] = __xlx_inA_18_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_18)[i*4+1] = __xlx_inA_18_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_18)[i*4+2] = __xlx_inA_18_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_18)[i*4+3] = __xlx_inA_18_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_19
  sc_bv<32>*__xlx_inA_19_output_buffer = new sc_bv<32>[__xlx_size_param_inA_19];
  for (int i = 0; i < __xlx_size_param_inA_19; ++i) {
    __xlx_inA_19_output_buffer[i] = __xlx_inA_19__input_buffer[i+__xlx_offset_param_inA_19];
  }
  for (int i = 0; i < __xlx_size_param_inA_19; ++i) {
    ((char*)__xlx_apatb_param_inA_19)[i*4+0] = __xlx_inA_19_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_19)[i*4+1] = __xlx_inA_19_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_19)[i*4+2] = __xlx_inA_19_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_19)[i*4+3] = __xlx_inA_19_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_20
  sc_bv<32>*__xlx_inA_20_output_buffer = new sc_bv<32>[__xlx_size_param_inA_20];
  for (int i = 0; i < __xlx_size_param_inA_20; ++i) {
    __xlx_inA_20_output_buffer[i] = __xlx_inA_20__input_buffer[i+__xlx_offset_param_inA_20];
  }
  for (int i = 0; i < __xlx_size_param_inA_20; ++i) {
    ((char*)__xlx_apatb_param_inA_20)[i*4+0] = __xlx_inA_20_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_20)[i*4+1] = __xlx_inA_20_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_20)[i*4+2] = __xlx_inA_20_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_20)[i*4+3] = __xlx_inA_20_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_21
  sc_bv<32>*__xlx_inA_21_output_buffer = new sc_bv<32>[__xlx_size_param_inA_21];
  for (int i = 0; i < __xlx_size_param_inA_21; ++i) {
    __xlx_inA_21_output_buffer[i] = __xlx_inA_21__input_buffer[i+__xlx_offset_param_inA_21];
  }
  for (int i = 0; i < __xlx_size_param_inA_21; ++i) {
    ((char*)__xlx_apatb_param_inA_21)[i*4+0] = __xlx_inA_21_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_21)[i*4+1] = __xlx_inA_21_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_21)[i*4+2] = __xlx_inA_21_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_21)[i*4+3] = __xlx_inA_21_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_22
  sc_bv<32>*__xlx_inA_22_output_buffer = new sc_bv<32>[__xlx_size_param_inA_22];
  for (int i = 0; i < __xlx_size_param_inA_22; ++i) {
    __xlx_inA_22_output_buffer[i] = __xlx_inA_22__input_buffer[i+__xlx_offset_param_inA_22];
  }
  for (int i = 0; i < __xlx_size_param_inA_22; ++i) {
    ((char*)__xlx_apatb_param_inA_22)[i*4+0] = __xlx_inA_22_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_22)[i*4+1] = __xlx_inA_22_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_22)[i*4+2] = __xlx_inA_22_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_22)[i*4+3] = __xlx_inA_22_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inA_23
  sc_bv<32>*__xlx_inA_23_output_buffer = new sc_bv<32>[__xlx_size_param_inA_23];
  for (int i = 0; i < __xlx_size_param_inA_23; ++i) {
    __xlx_inA_23_output_buffer[i] = __xlx_inA_23__input_buffer[i+__xlx_offset_param_inA_23];
  }
  for (int i = 0; i < __xlx_size_param_inA_23; ++i) {
    ((char*)__xlx_apatb_param_inA_23)[i*4+0] = __xlx_inA_23_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inA_23)[i*4+1] = __xlx_inA_23_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inA_23)[i*4+2] = __xlx_inA_23_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inA_23)[i*4+3] = __xlx_inA_23_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_0
  sc_bv<32>*__xlx_inB_0_output_buffer = new sc_bv<32>[__xlx_size_param_inB_0];
  for (int i = 0; i < __xlx_size_param_inB_0; ++i) {
    __xlx_inB_0_output_buffer[i] = __xlx_inB_0__input_buffer[i+__xlx_offset_param_inB_0];
  }
  for (int i = 0; i < __xlx_size_param_inB_0; ++i) {
    ((char*)__xlx_apatb_param_inB_0)[i*4+0] = __xlx_inB_0_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_0)[i*4+1] = __xlx_inB_0_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_0)[i*4+2] = __xlx_inB_0_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_0)[i*4+3] = __xlx_inB_0_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_1
  sc_bv<32>*__xlx_inB_1_output_buffer = new sc_bv<32>[__xlx_size_param_inB_1];
  for (int i = 0; i < __xlx_size_param_inB_1; ++i) {
    __xlx_inB_1_output_buffer[i] = __xlx_inB_1__input_buffer[i+__xlx_offset_param_inB_1];
  }
  for (int i = 0; i < __xlx_size_param_inB_1; ++i) {
    ((char*)__xlx_apatb_param_inB_1)[i*4+0] = __xlx_inB_1_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_1)[i*4+1] = __xlx_inB_1_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_1)[i*4+2] = __xlx_inB_1_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_1)[i*4+3] = __xlx_inB_1_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_2
  sc_bv<32>*__xlx_inB_2_output_buffer = new sc_bv<32>[__xlx_size_param_inB_2];
  for (int i = 0; i < __xlx_size_param_inB_2; ++i) {
    __xlx_inB_2_output_buffer[i] = __xlx_inB_2__input_buffer[i+__xlx_offset_param_inB_2];
  }
  for (int i = 0; i < __xlx_size_param_inB_2; ++i) {
    ((char*)__xlx_apatb_param_inB_2)[i*4+0] = __xlx_inB_2_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_2)[i*4+1] = __xlx_inB_2_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_2)[i*4+2] = __xlx_inB_2_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_2)[i*4+3] = __xlx_inB_2_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_3
  sc_bv<32>*__xlx_inB_3_output_buffer = new sc_bv<32>[__xlx_size_param_inB_3];
  for (int i = 0; i < __xlx_size_param_inB_3; ++i) {
    __xlx_inB_3_output_buffer[i] = __xlx_inB_3__input_buffer[i+__xlx_offset_param_inB_3];
  }
  for (int i = 0; i < __xlx_size_param_inB_3; ++i) {
    ((char*)__xlx_apatb_param_inB_3)[i*4+0] = __xlx_inB_3_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_3)[i*4+1] = __xlx_inB_3_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_3)[i*4+2] = __xlx_inB_3_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_3)[i*4+3] = __xlx_inB_3_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_4
  sc_bv<32>*__xlx_inB_4_output_buffer = new sc_bv<32>[__xlx_size_param_inB_4];
  for (int i = 0; i < __xlx_size_param_inB_4; ++i) {
    __xlx_inB_4_output_buffer[i] = __xlx_inB_4__input_buffer[i+__xlx_offset_param_inB_4];
  }
  for (int i = 0; i < __xlx_size_param_inB_4; ++i) {
    ((char*)__xlx_apatb_param_inB_4)[i*4+0] = __xlx_inB_4_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_4)[i*4+1] = __xlx_inB_4_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_4)[i*4+2] = __xlx_inB_4_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_4)[i*4+3] = __xlx_inB_4_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_5
  sc_bv<32>*__xlx_inB_5_output_buffer = new sc_bv<32>[__xlx_size_param_inB_5];
  for (int i = 0; i < __xlx_size_param_inB_5; ++i) {
    __xlx_inB_5_output_buffer[i] = __xlx_inB_5__input_buffer[i+__xlx_offset_param_inB_5];
  }
  for (int i = 0; i < __xlx_size_param_inB_5; ++i) {
    ((char*)__xlx_apatb_param_inB_5)[i*4+0] = __xlx_inB_5_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_5)[i*4+1] = __xlx_inB_5_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_5)[i*4+2] = __xlx_inB_5_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_5)[i*4+3] = __xlx_inB_5_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_6
  sc_bv<32>*__xlx_inB_6_output_buffer = new sc_bv<32>[__xlx_size_param_inB_6];
  for (int i = 0; i < __xlx_size_param_inB_6; ++i) {
    __xlx_inB_6_output_buffer[i] = __xlx_inB_6__input_buffer[i+__xlx_offset_param_inB_6];
  }
  for (int i = 0; i < __xlx_size_param_inB_6; ++i) {
    ((char*)__xlx_apatb_param_inB_6)[i*4+0] = __xlx_inB_6_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_6)[i*4+1] = __xlx_inB_6_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_6)[i*4+2] = __xlx_inB_6_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_6)[i*4+3] = __xlx_inB_6_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_7
  sc_bv<32>*__xlx_inB_7_output_buffer = new sc_bv<32>[__xlx_size_param_inB_7];
  for (int i = 0; i < __xlx_size_param_inB_7; ++i) {
    __xlx_inB_7_output_buffer[i] = __xlx_inB_7__input_buffer[i+__xlx_offset_param_inB_7];
  }
  for (int i = 0; i < __xlx_size_param_inB_7; ++i) {
    ((char*)__xlx_apatb_param_inB_7)[i*4+0] = __xlx_inB_7_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_7)[i*4+1] = __xlx_inB_7_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_7)[i*4+2] = __xlx_inB_7_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_7)[i*4+3] = __xlx_inB_7_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_8
  sc_bv<32>*__xlx_inB_8_output_buffer = new sc_bv<32>[__xlx_size_param_inB_8];
  for (int i = 0; i < __xlx_size_param_inB_8; ++i) {
    __xlx_inB_8_output_buffer[i] = __xlx_inB_8__input_buffer[i+__xlx_offset_param_inB_8];
  }
  for (int i = 0; i < __xlx_size_param_inB_8; ++i) {
    ((char*)__xlx_apatb_param_inB_8)[i*4+0] = __xlx_inB_8_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_8)[i*4+1] = __xlx_inB_8_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_8)[i*4+2] = __xlx_inB_8_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_8)[i*4+3] = __xlx_inB_8_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_inB_9
  sc_bv<32>*__xlx_inB_9_output_buffer = new sc_bv<32>[__xlx_size_param_inB_9];
  for (int i = 0; i < __xlx_size_param_inB_9; ++i) {
    __xlx_inB_9_output_buffer[i] = __xlx_inB_9__input_buffer[i+__xlx_offset_param_inB_9];
  }
  for (int i = 0; i < __xlx_size_param_inB_9; ++i) {
    ((char*)__xlx_apatb_param_inB_9)[i*4+0] = __xlx_inB_9_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_inB_9)[i*4+1] = __xlx_inB_9_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_inB_9)[i*4+2] = __xlx_inB_9_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_inB_9)[i*4+3] = __xlx_inB_9_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_0
  sc_bv<32>*__xlx_out_0_output_buffer = new sc_bv<32>[__xlx_size_param_out_0];
  for (int i = 0; i < __xlx_size_param_out_0; ++i) {
    __xlx_out_0_output_buffer[i] = __xlx_out_0__input_buffer[i+__xlx_offset_param_out_0];
  }
  for (int i = 0; i < __xlx_size_param_out_0; ++i) {
    ((char*)__xlx_apatb_param_out_0)[i*4+0] = __xlx_out_0_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_0)[i*4+1] = __xlx_out_0_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_0)[i*4+2] = __xlx_out_0_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_0)[i*4+3] = __xlx_out_0_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_1
  sc_bv<32>*__xlx_out_1_output_buffer = new sc_bv<32>[__xlx_size_param_out_1];
  for (int i = 0; i < __xlx_size_param_out_1; ++i) {
    __xlx_out_1_output_buffer[i] = __xlx_out_1__input_buffer[i+__xlx_offset_param_out_1];
  }
  for (int i = 0; i < __xlx_size_param_out_1; ++i) {
    ((char*)__xlx_apatb_param_out_1)[i*4+0] = __xlx_out_1_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_1)[i*4+1] = __xlx_out_1_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_1)[i*4+2] = __xlx_out_1_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_1)[i*4+3] = __xlx_out_1_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_2
  sc_bv<32>*__xlx_out_2_output_buffer = new sc_bv<32>[__xlx_size_param_out_2];
  for (int i = 0; i < __xlx_size_param_out_2; ++i) {
    __xlx_out_2_output_buffer[i] = __xlx_out_2__input_buffer[i+__xlx_offset_param_out_2];
  }
  for (int i = 0; i < __xlx_size_param_out_2; ++i) {
    ((char*)__xlx_apatb_param_out_2)[i*4+0] = __xlx_out_2_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_2)[i*4+1] = __xlx_out_2_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_2)[i*4+2] = __xlx_out_2_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_2)[i*4+3] = __xlx_out_2_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_3
  sc_bv<32>*__xlx_out_3_output_buffer = new sc_bv<32>[__xlx_size_param_out_3];
  for (int i = 0; i < __xlx_size_param_out_3; ++i) {
    __xlx_out_3_output_buffer[i] = __xlx_out_3__input_buffer[i+__xlx_offset_param_out_3];
  }
  for (int i = 0; i < __xlx_size_param_out_3; ++i) {
    ((char*)__xlx_apatb_param_out_3)[i*4+0] = __xlx_out_3_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_3)[i*4+1] = __xlx_out_3_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_3)[i*4+2] = __xlx_out_3_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_3)[i*4+3] = __xlx_out_3_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_4
  sc_bv<32>*__xlx_out_4_output_buffer = new sc_bv<32>[__xlx_size_param_out_4];
  for (int i = 0; i < __xlx_size_param_out_4; ++i) {
    __xlx_out_4_output_buffer[i] = __xlx_out_4__input_buffer[i+__xlx_offset_param_out_4];
  }
  for (int i = 0; i < __xlx_size_param_out_4; ++i) {
    ((char*)__xlx_apatb_param_out_4)[i*4+0] = __xlx_out_4_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_4)[i*4+1] = __xlx_out_4_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_4)[i*4+2] = __xlx_out_4_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_4)[i*4+3] = __xlx_out_4_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_5
  sc_bv<32>*__xlx_out_5_output_buffer = new sc_bv<32>[__xlx_size_param_out_5];
  for (int i = 0; i < __xlx_size_param_out_5; ++i) {
    __xlx_out_5_output_buffer[i] = __xlx_out_5__input_buffer[i+__xlx_offset_param_out_5];
  }
  for (int i = 0; i < __xlx_size_param_out_5; ++i) {
    ((char*)__xlx_apatb_param_out_5)[i*4+0] = __xlx_out_5_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_5)[i*4+1] = __xlx_out_5_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_5)[i*4+2] = __xlx_out_5_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_5)[i*4+3] = __xlx_out_5_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_6
  sc_bv<32>*__xlx_out_6_output_buffer = new sc_bv<32>[__xlx_size_param_out_6];
  for (int i = 0; i < __xlx_size_param_out_6; ++i) {
    __xlx_out_6_output_buffer[i] = __xlx_out_6__input_buffer[i+__xlx_offset_param_out_6];
  }
  for (int i = 0; i < __xlx_size_param_out_6; ++i) {
    ((char*)__xlx_apatb_param_out_6)[i*4+0] = __xlx_out_6_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_6)[i*4+1] = __xlx_out_6_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_6)[i*4+2] = __xlx_out_6_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_6)[i*4+3] = __xlx_out_6_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_7
  sc_bv<32>*__xlx_out_7_output_buffer = new sc_bv<32>[__xlx_size_param_out_7];
  for (int i = 0; i < __xlx_size_param_out_7; ++i) {
    __xlx_out_7_output_buffer[i] = __xlx_out_7__input_buffer[i+__xlx_offset_param_out_7];
  }
  for (int i = 0; i < __xlx_size_param_out_7; ++i) {
    ((char*)__xlx_apatb_param_out_7)[i*4+0] = __xlx_out_7_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_7)[i*4+1] = __xlx_out_7_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_7)[i*4+2] = __xlx_out_7_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_7)[i*4+3] = __xlx_out_7_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_8
  sc_bv<32>*__xlx_out_8_output_buffer = new sc_bv<32>[__xlx_size_param_out_8];
  for (int i = 0; i < __xlx_size_param_out_8; ++i) {
    __xlx_out_8_output_buffer[i] = __xlx_out_8__input_buffer[i+__xlx_offset_param_out_8];
  }
  for (int i = 0; i < __xlx_size_param_out_8; ++i) {
    ((char*)__xlx_apatb_param_out_8)[i*4+0] = __xlx_out_8_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_8)[i*4+1] = __xlx_out_8_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_8)[i*4+2] = __xlx_out_8_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_8)[i*4+3] = __xlx_out_8_output_buffer[i].range(31, 24).to_uint();
  }
// print __xlx_apatb_param_out_9
  sc_bv<32>*__xlx_out_9_output_buffer = new sc_bv<32>[__xlx_size_param_out_9];
  for (int i = 0; i < __xlx_size_param_out_9; ++i) {
    __xlx_out_9_output_buffer[i] = __xlx_out_9__input_buffer[i+__xlx_offset_param_out_9];
  }
  for (int i = 0; i < __xlx_size_param_out_9; ++i) {
    ((char*)__xlx_apatb_param_out_9)[i*4+0] = __xlx_out_9_output_buffer[i].range(7, 0).to_uint();
    ((char*)__xlx_apatb_param_out_9)[i*4+1] = __xlx_out_9_output_buffer[i].range(15, 8).to_uint();
    ((char*)__xlx_apatb_param_out_9)[i*4+2] = __xlx_out_9_output_buffer[i].range(23, 16).to_uint();
    ((char*)__xlx_apatb_param_out_9)[i*4+3] = __xlx_out_9_output_buffer[i].range(31, 24).to_uint();
  }
}

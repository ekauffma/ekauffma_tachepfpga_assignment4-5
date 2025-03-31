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
#define AUTOTB_TVIN_inA "../tv/cdatafile/c.basic_arith_array_ap.autotvin_inA.dat"
#define AUTOTB_TVOUT_inA "../tv/cdatafile/c.basic_arith_array_ap.autotvout_inA.dat"
// wrapc file define:
#define AUTOTB_TVIN_inB "../tv/cdatafile/c.basic_arith_array_ap.autotvin_inB.dat"
#define AUTOTB_TVOUT_inB "../tv/cdatafile/c.basic_arith_array_ap.autotvout_inB.dat"
// wrapc file define:
#define AUTOTB_TVIN_inC "../tv/cdatafile/c.basic_arith_array_ap.autotvin_inC.dat"
#define AUTOTB_TVOUT_inC "../tv/cdatafile/c.basic_arith_array_ap.autotvout_inC.dat"
// wrapc file define:
#define AUTOTB_TVIN_inD "../tv/cdatafile/c.basic_arith_array_ap.autotvin_inD.dat"
#define AUTOTB_TVOUT_inD "../tv/cdatafile/c.basic_arith_array_ap.autotvout_inD.dat"
// wrapc file define:
#define AUTOTB_TVIN_out1 "../tv/cdatafile/c.basic_arith_array_ap.autotvin_out1.dat"
#define AUTOTB_TVOUT_out1 "../tv/cdatafile/c.basic_arith_array_ap.autotvout_out1.dat"
// wrapc file define:
#define AUTOTB_TVIN_out2 "../tv/cdatafile/c.basic_arith_array_ap.autotvin_out2.dat"
#define AUTOTB_TVOUT_out2 "../tv/cdatafile/c.basic_arith_array_ap.autotvout_out2.dat"
// wrapc file define:
#define AUTOTB_TVIN_out3 "../tv/cdatafile/c.basic_arith_array_ap.autotvin_out3.dat"
#define AUTOTB_TVOUT_out3 "../tv/cdatafile/c.basic_arith_array_ap.autotvout_out3.dat"
// wrapc file define:
#define AUTOTB_TVIN_out4 "../tv/cdatafile/c.basic_arith_array_ap.autotvin_out4.dat"
#define AUTOTB_TVOUT_out4 "../tv/cdatafile/c.basic_arith_array_ap.autotvout_out4.dat"
// wrapc file define:
#define AUTOTB_TVIN_size "../tv/cdatafile/c.basic_arith_array_ap.autotvin_size.dat"
#define AUTOTB_TVOUT_size "../tv/cdatafile/c.basic_arith_array_ap.autotvout_size.dat"

#define INTER_TCL "../tv/cdatafile/ref.tcl"

// tvout file define:
#define AUTOTB_TVOUT_PC_inA "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_inA.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inB "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_inB.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inC "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_inC.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_inD "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_inD.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out1 "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_out1.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out2 "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_out2.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out3 "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_out3.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_out4 "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_out4.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_size "../tv/rtldatafile/rtl.basic_arith_array_ap.autotvout_size.dat"

class INTER_TCL_FILE {
  public:
INTER_TCL_FILE(const char* name) {
  mName = name; 
  inA_depth = 0;
  inB_depth = 0;
  inC_depth = 0;
  inD_depth = 0;
  out1_depth = 0;
  out2_depth = 0;
  out3_depth = 0;
  out4_depth = 0;
  size_depth = 0;
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
  total_list << "{inA " << inA_depth << "}\n";
  total_list << "{inB " << inB_depth << "}\n";
  total_list << "{inC " << inC_depth << "}\n";
  total_list << "{inD " << inD_depth << "}\n";
  total_list << "{out1 " << out1_depth << "}\n";
  total_list << "{out2 " << out2_depth << "}\n";
  total_list << "{out3 " << out3_depth << "}\n";
  total_list << "{out4 " << out4_depth << "}\n";
  total_list << "{size " << size_depth << "}\n";
  return total_list.str();
}
void set_num (int num , int* class_num) {
  (*class_num) = (*class_num) > num ? (*class_num) : num;
}
void set_string(std::string list, std::string* class_list) {
  (*class_list) = list;
}
  public:
    int inA_depth;
    int inB_depth;
    int inC_depth;
    int inD_depth;
    int out1_depth;
    int out2_depth;
    int out3_depth;
    int out4_depth;
    int size_depth;
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
extern "C" void basic_arith_array_ap_hw_stub_wrapper(volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, volatile void *, int);

extern "C" void apatb_basic_arith_array_ap_hw(volatile void * __xlx_apatb_param_inA, volatile void * __xlx_apatb_param_inB, volatile void * __xlx_apatb_param_inC, volatile void * __xlx_apatb_param_inD, volatile void * __xlx_apatb_param_out1, volatile void * __xlx_apatb_param_out2, volatile void * __xlx_apatb_param_out3, volatile void * __xlx_apatb_param_out4, int __xlx_apatb_param_size) {
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
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out1);
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
          std::vector<sc_bv<18> > out1_pc_buffer(1);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out1");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out1_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {((char*)__xlx_apatb_param_out1)[0*3+0] = out1_pc_buffer[0].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out1)[0*3+1] = out1_pc_buffer[0].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out1)[0*3+2] = out1_pc_buffer[0].range(17, 16).to_int64();
}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out2);
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
          std::vector<sc_bv<13> > out2_pc_buffer(1);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out2");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out2_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {((char*)__xlx_apatb_param_out2)[0*2+0] = out2_pc_buffer[0].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out2)[0*2+1] = out2_pc_buffer[0].range(12, 8).to_int64();
}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out3);
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
          std::vector<sc_bv<22> > out3_pc_buffer(1);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out3");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out3_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {((char*)__xlx_apatb_param_out3)[0*3+0] = out3_pc_buffer[0].range(7, 0).to_int64();
((char*)__xlx_apatb_param_out3)[0*3+1] = out3_pc_buffer[0].range(15, 8).to_int64();
((char*)__xlx_apatb_param_out3)[0*3+2] = out3_pc_buffer[0].range(21, 16).to_int64();
}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_out4);
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
          std::vector<sc_bv<6> > out4_pc_buffer(1);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "out4");
  
            // push token into output port buffer
            if (AESL_token != "") {
              out4_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {((char*)__xlx_apatb_param_out4)[0*1+0] = out4_pc_buffer[0].range(5, 0).to_int64();
}
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
//inA
aesl_fh.touch(AUTOTB_TVIN_inA);
aesl_fh.touch(AUTOTB_TVOUT_inA);
//inB
aesl_fh.touch(AUTOTB_TVIN_inB);
aesl_fh.touch(AUTOTB_TVOUT_inB);
//inC
aesl_fh.touch(AUTOTB_TVIN_inC);
aesl_fh.touch(AUTOTB_TVOUT_inC);
//inD
aesl_fh.touch(AUTOTB_TVIN_inD);
aesl_fh.touch(AUTOTB_TVOUT_inD);
//out1
aesl_fh.touch(AUTOTB_TVIN_out1);
aesl_fh.touch(AUTOTB_TVOUT_out1);
//out2
aesl_fh.touch(AUTOTB_TVIN_out2);
aesl_fh.touch(AUTOTB_TVOUT_out2);
//out3
aesl_fh.touch(AUTOTB_TVIN_out3);
aesl_fh.touch(AUTOTB_TVOUT_out3);
//out4
aesl_fh.touch(AUTOTB_TVIN_out4);
aesl_fh.touch(AUTOTB_TVOUT_out4);
//size
aesl_fh.touch(AUTOTB_TVIN_size);
aesl_fh.touch(AUTOTB_TVOUT_size);
CodeState = DUMP_INPUTS;
// print inA Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inA, __xlx_sprintf_buffer.data());
  {
    sc_bv<6> __xlx_tmp_lv = *((char*)__xlx_apatb_param_inA);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inA, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.inA_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inA, __xlx_sprintf_buffer.data());
}
// print inB Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inB, __xlx_sprintf_buffer.data());
  {
    sc_bv<12> __xlx_tmp_lv = *((short*)__xlx_apatb_param_inB);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inB, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.inB_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inB, __xlx_sprintf_buffer.data());
}
// print inC Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inC, __xlx_sprintf_buffer.data());
  {
    sc_bv<22> __xlx_tmp_lv = *((int*)__xlx_apatb_param_inC);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inC, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.inC_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inC, __xlx_sprintf_buffer.data());
}
// print inD Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_inD, __xlx_sprintf_buffer.data());
  {
    sc_bv<33> __xlx_tmp_lv = *((long long*)__xlx_apatb_param_inD);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_inD, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.inD_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_inD, __xlx_sprintf_buffer.data());
}
// print out1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out1, __xlx_sprintf_buffer.data());
  {
    sc_bv<18> __xlx_tmp_lv = *((int*)__xlx_apatb_param_out1);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out1, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out1, __xlx_sprintf_buffer.data());
}
// print out2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out2, __xlx_sprintf_buffer.data());
  {
    sc_bv<13> __xlx_tmp_lv = *((short*)__xlx_apatb_param_out2);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out2, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out2, __xlx_sprintf_buffer.data());
}
// print out3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out3, __xlx_sprintf_buffer.data());
  {
    sc_bv<22> __xlx_tmp_lv = *((int*)__xlx_apatb_param_out3);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out3, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out3, __xlx_sprintf_buffer.data());
}
// print out4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_out4, __xlx_sprintf_buffer.data());
  {
    sc_bv<6> __xlx_tmp_lv = *((char*)__xlx_apatb_param_out4);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_out4, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_out4, __xlx_sprintf_buffer.data());
}
// print size Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_size, __xlx_sprintf_buffer.data());
  {
    sc_bv<32> __xlx_tmp_lv = *((int*)&__xlx_apatb_param_size);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVIN_size, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.size_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_size, __xlx_sprintf_buffer.data());
}
CodeState = CALL_C_DUT;
basic_arith_array_ap_hw_stub_wrapper(__xlx_apatb_param_inA, __xlx_apatb_param_inB, __xlx_apatb_param_inC, __xlx_apatb_param_inD, __xlx_apatb_param_out1, __xlx_apatb_param_out2, __xlx_apatb_param_out3, __xlx_apatb_param_out4, __xlx_apatb_param_size);
CodeState = DUMP_OUTPUTS;
// print out1 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out1, __xlx_sprintf_buffer.data());
  {
    sc_bv<18> __xlx_tmp_lv = *((int*)__xlx_apatb_param_out1);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out1, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out1_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out1, __xlx_sprintf_buffer.data());
}
// print out2 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out2, __xlx_sprintf_buffer.data());
  {
    sc_bv<13> __xlx_tmp_lv = *((short*)__xlx_apatb_param_out2);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out2, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out2_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out2, __xlx_sprintf_buffer.data());
}
// print out3 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out3, __xlx_sprintf_buffer.data());
  {
    sc_bv<22> __xlx_tmp_lv = *((int*)__xlx_apatb_param_out3);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out3, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out3_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out3, __xlx_sprintf_buffer.data());
}
// print out4 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_out4, __xlx_sprintf_buffer.data());
  {
    sc_bv<6> __xlx_tmp_lv = *((char*)__xlx_apatb_param_out4);

    std::string s(__xlx_tmp_lv.to_string(SC_HEX));
    aesl_fh.write(AUTOTB_TVOUT_out4, s.append("\n")); 
  }
  tcl_file.set_num(1, &tcl_file.out4_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_out4, __xlx_sprintf_buffer.data());
}
CodeState = DELETE_CHAR_BUFFERS;
AESL_transaction++;
tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
}

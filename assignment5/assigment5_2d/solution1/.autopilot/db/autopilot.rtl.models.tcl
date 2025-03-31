set SynModuleInfo {
  {SRCNAME arr_mult_2d MODELNAME arr_mult_2d RTLNAME arr_mult_2d IS_TOP 1
    SUBMODULES {
      {MODELNAME mul_10s_10s_10_1_1 RTLNAME arr_mult_2d_mul_10s_10s_10_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME mac_muladd_10s_10s_10ns_10_4_1 RTLNAME arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1 BINDTYPE op TYPE add IMPL dsp LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME control_s_axi RTLNAME arr_mult_2d_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME flow_control_loop_pipe RTLNAME arr_mult_2d_flow_control_loop_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME arr_mult_2d_flow_control_loop_pipe_U}
    }
  }
}

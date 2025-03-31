set moduleName basic_arith_array_ap
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {basic_arith_array_ap}
set C_modelType { void 0 }
set C_modelArgList {
	{ inA int 6 regular {pointer 0}  }
	{ inB int 12 regular {pointer 0}  }
	{ inC int 22 regular {pointer 0}  }
	{ inD int 33 regular {pointer 0}  }
	{ out1 int 18 regular {pointer 1}  }
	{ out2 int 13 regular {pointer 1}  }
	{ out3 int 22 regular {pointer 1}  }
	{ out4 int 6 regular {pointer 1}  }
	{ size int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inA", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "inB", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "inC", "interface" : "wire", "bitwidth" : 22, "direction" : "READONLY"} , 
 	{ "Name" : "inD", "interface" : "wire", "bitwidth" : 33, "direction" : "READONLY"} , 
 	{ "Name" : "out1", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out2", "interface" : "wire", "bitwidth" : 13, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out3", "interface" : "wire", "bitwidth" : 22, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out4", "interface" : "wire", "bitwidth" : 6, "direction" : "WRITEONLY"} , 
 	{ "Name" : "size", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ inA sc_in sc_lv 6 signal 0 } 
	{ inB sc_in sc_lv 12 signal 1 } 
	{ inC sc_in sc_lv 22 signal 2 } 
	{ inD sc_in sc_lv 33 signal 3 } 
	{ out1 sc_out sc_lv 18 signal 4 } 
	{ out1_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ out2 sc_out sc_lv 13 signal 5 } 
	{ out2_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ out3 sc_out sc_lv 22 signal 6 } 
	{ out3_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ out4 sc_out sc_lv 6 signal 7 } 
	{ out4_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ size sc_in sc_lv 32 signal 8 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "inA", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "inA", "role": "default" }} , 
 	{ "name": "inB", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "inB", "role": "default" }} , 
 	{ "name": "inC", "direction": "in", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "inC", "role": "default" }} , 
 	{ "name": "inD", "direction": "in", "datatype": "sc_lv", "bitwidth":33, "type": "signal", "bundle":{"name": "inD", "role": "default" }} , 
 	{ "name": "out1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "out1", "role": "default" }} , 
 	{ "name": "out1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out1", "role": "ap_vld" }} , 
 	{ "name": "out2", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "out2", "role": "default" }} , 
 	{ "name": "out2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out2", "role": "ap_vld" }} , 
 	{ "name": "out3", "direction": "out", "datatype": "sc_lv", "bitwidth":22, "type": "signal", "bundle":{"name": "out3", "role": "default" }} , 
 	{ "name": "out3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out3", "role": "ap_vld" }} , 
 	{ "name": "out4", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "out4", "role": "default" }} , 
 	{ "name": "out4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out4", "role": "ap_vld" }} , 
 	{ "name": "size", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "size", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "basic_arith_array_ap",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "60",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "inA", "Type" : "None", "Direction" : "I"},
			{"Name" : "inB", "Type" : "None", "Direction" : "I"},
			{"Name" : "inC", "Type" : "None", "Direction" : "I"},
			{"Name" : "inD", "Type" : "None", "Direction" : "I"},
			{"Name" : "out1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out4", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "size", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_14_1", "PipelineType" : "pipeline",
				"LoopDec" : {"FSMBitwidth" : "6", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter36", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "PreState" : ["ap_ST_fsm_state4"], "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter36", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "PostState" : ["ap_ST_fsm_state42"]}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sdiv_22ns_6s_22_26_1_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.srem_33ns_6s_6_37_1_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_mul_12s_6s_18_4_1_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	basic_arith_array_ap {
		inA {Type I LastRead 0 FirstWrite -1}
		inB {Type I LastRead 0 FirstWrite -1}
		inC {Type I LastRead 3 FirstWrite -1}
		inD {Type I LastRead 3 FirstWrite -1}
		out1 {Type O LastRead -1 FirstWrite 4}
		out2 {Type O LastRead -1 FirstWrite 4}
		out3 {Type O LastRead -1 FirstWrite 29}
		out4 {Type O LastRead -1 FirstWrite 40}
		size {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "41", "Max" : "60"}
	, {"Name" : "Interval", "Min" : "42", "Max" : "61"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	inA { ap_none {  { inA in_data 0 6 } } }
	inB { ap_none {  { inB in_data 0 12 } } }
	inC { ap_none {  { inC in_data 0 22 } } }
	inD { ap_none {  { inD in_data 0 33 } } }
	out1 { ap_vld {  { out1 out_data 1 18 }  { out1_ap_vld out_vld 1 1 } } }
	out2 { ap_vld {  { out2 out_data 1 13 }  { out2_ap_vld out_vld 1 1 } } }
	out3 { ap_vld {  { out3 out_data 1 22 }  { out3_ap_vld out_vld 1 1 } } }
	out4 { ap_vld {  { out4 out_data 1 6 }  { out4_ap_vld out_vld 1 1 } } }
	size { ap_none {  { size in_data 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}

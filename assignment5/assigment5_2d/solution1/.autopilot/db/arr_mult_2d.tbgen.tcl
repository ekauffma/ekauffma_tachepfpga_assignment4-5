set moduleName arr_mult_2d
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
set C_modelName {arr_mult_2d}
set C_modelType { void 0 }
set C_modelArgList {
	{ gmem int 32 regular {axi_master 2}  }
	{ inA int 64 regular {axi_slave 0}  }
	{ inB int 64 regular {axi_slave 0}  }
	{ out_r int 64 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[ {"cElement": [{"cName": "inA","offset": { "type": "dynamic","port_name": "inA","bundle": "control"},"direction": "READONLY"},{"cName": "inB","offset": { "type": "dynamic","port_name": "inB","bundle": "control"},"direction": "READONLY"},{"cName": "out_r","offset": { "type": "dynamic","port_name": "out_r"},"direction": "WRITEONLY"}]}]} , 
 	{ "Name" : "inA", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "inB", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} , 
 	{ "Name" : "out_r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":51}} ]}
# RTL Port declarations: 
set portNum 65
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_gmem_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_gmem_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_gmem_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_BUSER sc_in sc_lv 1 signal 0 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"arr_mult_2d","role":"start","value":"0","valid_bit":"0"},{"name":"arr_mult_2d","role":"continue","value":"0","valid_bit":"4"},{"name":"arr_mult_2d","role":"auto_start","value":"0","valid_bit":"7"},{"name":"inA","role":"data","value":"16"},{"name":"inB","role":"data","value":"28"},{"name":"out_r","role":"data","value":"40"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"arr_mult_2d","role":"start","value":"0","valid_bit":"0"},{"name":"arr_mult_2d","role":"done","value":"0","valid_bit":"1"},{"name":"arr_mult_2d","role":"idle","value":"0","valid_bit":"2"},{"name":"arr_mult_2d","role":"ready","value":"0","valid_bit":"3"},{"name":"arr_mult_2d","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_gmem_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gmem_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gmem_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gmem_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWID" }} , 
 	{ "name": "m_axi_gmem_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gmem_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gmem_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gmem_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gmem_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gmem_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gmem_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gmem_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gmem_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gmem_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WVALID" }} , 
 	{ "name": "m_axi_gmem_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WREADY" }} , 
 	{ "name": "m_axi_gmem_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "WDATA" }} , 
 	{ "name": "m_axi_gmem_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gmem_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WLAST" }} , 
 	{ "name": "m_axi_gmem_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WID" }} , 
 	{ "name": "m_axi_gmem_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WUSER" }} , 
 	{ "name": "m_axi_gmem_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gmem_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gmem_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gmem_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARID" }} , 
 	{ "name": "m_axi_gmem_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gmem_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gmem_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gmem_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gmem_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gmem_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gmem_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gmem_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gmem_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gmem_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RVALID" }} , 
 	{ "name": "m_axi_gmem_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RREADY" }} , 
 	{ "name": "m_axi_gmem_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "RDATA" }} , 
 	{ "name": "m_axi_gmem_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RLAST" }} , 
 	{ "name": "m_axi_gmem_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RID" }} , 
 	{ "name": "m_axi_gmem_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RUSER" }} , 
 	{ "name": "m_axi_gmem_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "RRESP" }} , 
 	{ "name": "m_axi_gmem_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BVALID" }} , 
 	{ "name": "m_axi_gmem_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BREADY" }} , 
 	{ "name": "m_axi_gmem_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "BRESP" }} , 
 	{ "name": "m_axi_gmem_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BID" }} , 
 	{ "name": "m_axi_gmem_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "27", "28"],
		"CDFG" : "arr_mult_2d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9623", "EstimateLatencyMax" : "9623",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86", "Port" : "gmem", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "inA", "Type" : "None", "Direction" : "I"},
			{"Name" : "inB", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"],
		"CDFG" : "arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9615", "EstimateLatencyMax" : "9615",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln18", "Type" : "None", "Direction" : "I"},
			{"Name" : "inA", "Type" : "None", "Direction" : "I"},
			{"Name" : "inB", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_18_1_VITIS_LOOP_19_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "48", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage13", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage13_subdone", "QuitState" : "ap_ST_fsm_pp0_stage13", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage13_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U7", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mul_10s_10s_10_1_1_U8", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U9", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U10", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U11", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U12", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U13", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U14", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U15", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U16", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U17", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U18", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U19", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U20", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U21", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U22", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U23", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.mac_muladd_10s_10s_10ns_10_4_1_U24", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2_fu_86.flow_control_loop_pipe_sequential_init_U", "Parent" : "1"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.control_s_axi_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gmem_m_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	arr_mult_2d {
		gmem {Type IO LastRead 55 FirstWrite 61}
		inA {Type I LastRead 0 FirstWrite -1}
		inB {Type I LastRead 0 FirstWrite -1}
		out_r {Type I LastRead 0 FirstWrite -1}}
	arr_mult_2d_Pipeline_VITIS_LOOP_18_1_VITIS_LOOP_19_2 {
		gmem {Type IO LastRead 55 FirstWrite 61}
		sext_ln18 {Type I LastRead 0 FirstWrite -1}
		inA {Type I LastRead 0 FirstWrite -1}
		inB {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "9623", "Max" : "9623"}
	, {"Name" : "Interval", "Min" : "9624", "Max" : "9624"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	gmem { m_axi {  { m_axi_gmem_AWVALID VALID 1 1 }  { m_axi_gmem_AWREADY READY 0 1 }  { m_axi_gmem_AWADDR ADDR 1 64 }  { m_axi_gmem_AWID ID 1 1 }  { m_axi_gmem_AWLEN LEN 1 8 }  { m_axi_gmem_AWSIZE SIZE 1 3 }  { m_axi_gmem_AWBURST BURST 1 2 }  { m_axi_gmem_AWLOCK LOCK 1 2 }  { m_axi_gmem_AWCACHE CACHE 1 4 }  { m_axi_gmem_AWPROT PROT 1 3 }  { m_axi_gmem_AWQOS QOS 1 4 }  { m_axi_gmem_AWREGION REGION 1 4 }  { m_axi_gmem_AWUSER USER 1 1 }  { m_axi_gmem_WVALID VALID 1 1 }  { m_axi_gmem_WREADY READY 0 1 }  { m_axi_gmem_WDATA DATA 1 32 }  { m_axi_gmem_WSTRB STRB 1 4 }  { m_axi_gmem_WLAST LAST 1 1 }  { m_axi_gmem_WID ID 1 1 }  { m_axi_gmem_WUSER USER 1 1 }  { m_axi_gmem_ARVALID VALID 1 1 }  { m_axi_gmem_ARREADY READY 0 1 }  { m_axi_gmem_ARADDR ADDR 1 64 }  { m_axi_gmem_ARID ID 1 1 }  { m_axi_gmem_ARLEN LEN 1 8 }  { m_axi_gmem_ARSIZE SIZE 1 3 }  { m_axi_gmem_ARBURST BURST 1 2 }  { m_axi_gmem_ARLOCK LOCK 1 2 }  { m_axi_gmem_ARCACHE CACHE 1 4 }  { m_axi_gmem_ARPROT PROT 1 3 }  { m_axi_gmem_ARQOS QOS 1 4 }  { m_axi_gmem_ARREGION REGION 1 4 }  { m_axi_gmem_ARUSER USER 1 1 }  { m_axi_gmem_RVALID VALID 0 1 }  { m_axi_gmem_RREADY READY 1 1 }  { m_axi_gmem_RDATA DATA 0 32 }  { m_axi_gmem_RLAST LAST 0 1 }  { m_axi_gmem_RID ID 0 1 }  { m_axi_gmem_RUSER USER 0 1 }  { m_axi_gmem_RRESP RESP 0 2 }  { m_axi_gmem_BVALID VALID 0 1 }  { m_axi_gmem_BREADY READY 1 1 }  { m_axi_gmem_BRESP RESP 0 2 }  { m_axi_gmem_BID ID 0 1 }  { m_axi_gmem_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ gmem { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ gmem 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ gmem 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
set moduleName arr_mult_2d
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
set C_modelName {arr_mult_2d}
set C_modelType { void 0 }
set C_modelArgList {
	{ inA_0 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_1 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_2 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_3 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_4 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_5 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_6 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_7 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_8 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_9 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_10 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_11 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_12 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_13 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_14 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_15 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_16 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_17 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_18 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_19 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_20 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_21 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_22 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inA_23 int 32 regular {bram 20 { 1 3 } 1 1 }  }
	{ inB_0 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_1 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_2 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_3 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_4 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_5 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_6 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_7 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_8 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ inB_9 int 32 regular {bram 24 { 1 1 } 1 1 }  }
	{ out_0 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_1 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_2 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_3 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_4 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_5 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_6 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_7 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_8 int 32 regular {bram 20 { 0 3 } 0 1 }  }
	{ out_9 int 32 regular {bram 20 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inA_0", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_1", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_2", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_3", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_4", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_5", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_6", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_7", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_8", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_9", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_10", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_11", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_12", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_13", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_14", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_15", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_16", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_17", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_18", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_19", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_20", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_21", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_22", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inA_23", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_0", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_1", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_2", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_3", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_4", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_5", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_6", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_7", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_8", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "inB_9", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "out_0", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_1", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_2", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_3", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_4", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_5", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_6", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_7", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_8", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_9", "interface" : "bram", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 398
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ inA_0_Addr_A sc_out sc_lv 32 signal 0 } 
	{ inA_0_EN_A sc_out sc_logic 1 signal 0 } 
	{ inA_0_WEN_A sc_out sc_lv 4 signal 0 } 
	{ inA_0_Din_A sc_out sc_lv 32 signal 0 } 
	{ inA_0_Dout_A sc_in sc_lv 32 signal 0 } 
	{ inA_0_Clk_A sc_out sc_logic 1 signal 0 } 
	{ inA_0_Rst_A sc_out sc_logic 1 signal 0 } 
	{ inA_1_Addr_A sc_out sc_lv 32 signal 1 } 
	{ inA_1_EN_A sc_out sc_logic 1 signal 1 } 
	{ inA_1_WEN_A sc_out sc_lv 4 signal 1 } 
	{ inA_1_Din_A sc_out sc_lv 32 signal 1 } 
	{ inA_1_Dout_A sc_in sc_lv 32 signal 1 } 
	{ inA_1_Clk_A sc_out sc_logic 1 signal 1 } 
	{ inA_1_Rst_A sc_out sc_logic 1 signal 1 } 
	{ inA_2_Addr_A sc_out sc_lv 32 signal 2 } 
	{ inA_2_EN_A sc_out sc_logic 1 signal 2 } 
	{ inA_2_WEN_A sc_out sc_lv 4 signal 2 } 
	{ inA_2_Din_A sc_out sc_lv 32 signal 2 } 
	{ inA_2_Dout_A sc_in sc_lv 32 signal 2 } 
	{ inA_2_Clk_A sc_out sc_logic 1 signal 2 } 
	{ inA_2_Rst_A sc_out sc_logic 1 signal 2 } 
	{ inA_3_Addr_A sc_out sc_lv 32 signal 3 } 
	{ inA_3_EN_A sc_out sc_logic 1 signal 3 } 
	{ inA_3_WEN_A sc_out sc_lv 4 signal 3 } 
	{ inA_3_Din_A sc_out sc_lv 32 signal 3 } 
	{ inA_3_Dout_A sc_in sc_lv 32 signal 3 } 
	{ inA_3_Clk_A sc_out sc_logic 1 signal 3 } 
	{ inA_3_Rst_A sc_out sc_logic 1 signal 3 } 
	{ inA_4_Addr_A sc_out sc_lv 32 signal 4 } 
	{ inA_4_EN_A sc_out sc_logic 1 signal 4 } 
	{ inA_4_WEN_A sc_out sc_lv 4 signal 4 } 
	{ inA_4_Din_A sc_out sc_lv 32 signal 4 } 
	{ inA_4_Dout_A sc_in sc_lv 32 signal 4 } 
	{ inA_4_Clk_A sc_out sc_logic 1 signal 4 } 
	{ inA_4_Rst_A sc_out sc_logic 1 signal 4 } 
	{ inA_5_Addr_A sc_out sc_lv 32 signal 5 } 
	{ inA_5_EN_A sc_out sc_logic 1 signal 5 } 
	{ inA_5_WEN_A sc_out sc_lv 4 signal 5 } 
	{ inA_5_Din_A sc_out sc_lv 32 signal 5 } 
	{ inA_5_Dout_A sc_in sc_lv 32 signal 5 } 
	{ inA_5_Clk_A sc_out sc_logic 1 signal 5 } 
	{ inA_5_Rst_A sc_out sc_logic 1 signal 5 } 
	{ inA_6_Addr_A sc_out sc_lv 32 signal 6 } 
	{ inA_6_EN_A sc_out sc_logic 1 signal 6 } 
	{ inA_6_WEN_A sc_out sc_lv 4 signal 6 } 
	{ inA_6_Din_A sc_out sc_lv 32 signal 6 } 
	{ inA_6_Dout_A sc_in sc_lv 32 signal 6 } 
	{ inA_6_Clk_A sc_out sc_logic 1 signal 6 } 
	{ inA_6_Rst_A sc_out sc_logic 1 signal 6 } 
	{ inA_7_Addr_A sc_out sc_lv 32 signal 7 } 
	{ inA_7_EN_A sc_out sc_logic 1 signal 7 } 
	{ inA_7_WEN_A sc_out sc_lv 4 signal 7 } 
	{ inA_7_Din_A sc_out sc_lv 32 signal 7 } 
	{ inA_7_Dout_A sc_in sc_lv 32 signal 7 } 
	{ inA_7_Clk_A sc_out sc_logic 1 signal 7 } 
	{ inA_7_Rst_A sc_out sc_logic 1 signal 7 } 
	{ inA_8_Addr_A sc_out sc_lv 32 signal 8 } 
	{ inA_8_EN_A sc_out sc_logic 1 signal 8 } 
	{ inA_8_WEN_A sc_out sc_lv 4 signal 8 } 
	{ inA_8_Din_A sc_out sc_lv 32 signal 8 } 
	{ inA_8_Dout_A sc_in sc_lv 32 signal 8 } 
	{ inA_8_Clk_A sc_out sc_logic 1 signal 8 } 
	{ inA_8_Rst_A sc_out sc_logic 1 signal 8 } 
	{ inA_9_Addr_A sc_out sc_lv 32 signal 9 } 
	{ inA_9_EN_A sc_out sc_logic 1 signal 9 } 
	{ inA_9_WEN_A sc_out sc_lv 4 signal 9 } 
	{ inA_9_Din_A sc_out sc_lv 32 signal 9 } 
	{ inA_9_Dout_A sc_in sc_lv 32 signal 9 } 
	{ inA_9_Clk_A sc_out sc_logic 1 signal 9 } 
	{ inA_9_Rst_A sc_out sc_logic 1 signal 9 } 
	{ inA_10_Addr_A sc_out sc_lv 32 signal 10 } 
	{ inA_10_EN_A sc_out sc_logic 1 signal 10 } 
	{ inA_10_WEN_A sc_out sc_lv 4 signal 10 } 
	{ inA_10_Din_A sc_out sc_lv 32 signal 10 } 
	{ inA_10_Dout_A sc_in sc_lv 32 signal 10 } 
	{ inA_10_Clk_A sc_out sc_logic 1 signal 10 } 
	{ inA_10_Rst_A sc_out sc_logic 1 signal 10 } 
	{ inA_11_Addr_A sc_out sc_lv 32 signal 11 } 
	{ inA_11_EN_A sc_out sc_logic 1 signal 11 } 
	{ inA_11_WEN_A sc_out sc_lv 4 signal 11 } 
	{ inA_11_Din_A sc_out sc_lv 32 signal 11 } 
	{ inA_11_Dout_A sc_in sc_lv 32 signal 11 } 
	{ inA_11_Clk_A sc_out sc_logic 1 signal 11 } 
	{ inA_11_Rst_A sc_out sc_logic 1 signal 11 } 
	{ inA_12_Addr_A sc_out sc_lv 32 signal 12 } 
	{ inA_12_EN_A sc_out sc_logic 1 signal 12 } 
	{ inA_12_WEN_A sc_out sc_lv 4 signal 12 } 
	{ inA_12_Din_A sc_out sc_lv 32 signal 12 } 
	{ inA_12_Dout_A sc_in sc_lv 32 signal 12 } 
	{ inA_12_Clk_A sc_out sc_logic 1 signal 12 } 
	{ inA_12_Rst_A sc_out sc_logic 1 signal 12 } 
	{ inA_13_Addr_A sc_out sc_lv 32 signal 13 } 
	{ inA_13_EN_A sc_out sc_logic 1 signal 13 } 
	{ inA_13_WEN_A sc_out sc_lv 4 signal 13 } 
	{ inA_13_Din_A sc_out sc_lv 32 signal 13 } 
	{ inA_13_Dout_A sc_in sc_lv 32 signal 13 } 
	{ inA_13_Clk_A sc_out sc_logic 1 signal 13 } 
	{ inA_13_Rst_A sc_out sc_logic 1 signal 13 } 
	{ inA_14_Addr_A sc_out sc_lv 32 signal 14 } 
	{ inA_14_EN_A sc_out sc_logic 1 signal 14 } 
	{ inA_14_WEN_A sc_out sc_lv 4 signal 14 } 
	{ inA_14_Din_A sc_out sc_lv 32 signal 14 } 
	{ inA_14_Dout_A sc_in sc_lv 32 signal 14 } 
	{ inA_14_Clk_A sc_out sc_logic 1 signal 14 } 
	{ inA_14_Rst_A sc_out sc_logic 1 signal 14 } 
	{ inA_15_Addr_A sc_out sc_lv 32 signal 15 } 
	{ inA_15_EN_A sc_out sc_logic 1 signal 15 } 
	{ inA_15_WEN_A sc_out sc_lv 4 signal 15 } 
	{ inA_15_Din_A sc_out sc_lv 32 signal 15 } 
	{ inA_15_Dout_A sc_in sc_lv 32 signal 15 } 
	{ inA_15_Clk_A sc_out sc_logic 1 signal 15 } 
	{ inA_15_Rst_A sc_out sc_logic 1 signal 15 } 
	{ inA_16_Addr_A sc_out sc_lv 32 signal 16 } 
	{ inA_16_EN_A sc_out sc_logic 1 signal 16 } 
	{ inA_16_WEN_A sc_out sc_lv 4 signal 16 } 
	{ inA_16_Din_A sc_out sc_lv 32 signal 16 } 
	{ inA_16_Dout_A sc_in sc_lv 32 signal 16 } 
	{ inA_16_Clk_A sc_out sc_logic 1 signal 16 } 
	{ inA_16_Rst_A sc_out sc_logic 1 signal 16 } 
	{ inA_17_Addr_A sc_out sc_lv 32 signal 17 } 
	{ inA_17_EN_A sc_out sc_logic 1 signal 17 } 
	{ inA_17_WEN_A sc_out sc_lv 4 signal 17 } 
	{ inA_17_Din_A sc_out sc_lv 32 signal 17 } 
	{ inA_17_Dout_A sc_in sc_lv 32 signal 17 } 
	{ inA_17_Clk_A sc_out sc_logic 1 signal 17 } 
	{ inA_17_Rst_A sc_out sc_logic 1 signal 17 } 
	{ inA_18_Addr_A sc_out sc_lv 32 signal 18 } 
	{ inA_18_EN_A sc_out sc_logic 1 signal 18 } 
	{ inA_18_WEN_A sc_out sc_lv 4 signal 18 } 
	{ inA_18_Din_A sc_out sc_lv 32 signal 18 } 
	{ inA_18_Dout_A sc_in sc_lv 32 signal 18 } 
	{ inA_18_Clk_A sc_out sc_logic 1 signal 18 } 
	{ inA_18_Rst_A sc_out sc_logic 1 signal 18 } 
	{ inA_19_Addr_A sc_out sc_lv 32 signal 19 } 
	{ inA_19_EN_A sc_out sc_logic 1 signal 19 } 
	{ inA_19_WEN_A sc_out sc_lv 4 signal 19 } 
	{ inA_19_Din_A sc_out sc_lv 32 signal 19 } 
	{ inA_19_Dout_A sc_in sc_lv 32 signal 19 } 
	{ inA_19_Clk_A sc_out sc_logic 1 signal 19 } 
	{ inA_19_Rst_A sc_out sc_logic 1 signal 19 } 
	{ inA_20_Addr_A sc_out sc_lv 32 signal 20 } 
	{ inA_20_EN_A sc_out sc_logic 1 signal 20 } 
	{ inA_20_WEN_A sc_out sc_lv 4 signal 20 } 
	{ inA_20_Din_A sc_out sc_lv 32 signal 20 } 
	{ inA_20_Dout_A sc_in sc_lv 32 signal 20 } 
	{ inA_20_Clk_A sc_out sc_logic 1 signal 20 } 
	{ inA_20_Rst_A sc_out sc_logic 1 signal 20 } 
	{ inA_21_Addr_A sc_out sc_lv 32 signal 21 } 
	{ inA_21_EN_A sc_out sc_logic 1 signal 21 } 
	{ inA_21_WEN_A sc_out sc_lv 4 signal 21 } 
	{ inA_21_Din_A sc_out sc_lv 32 signal 21 } 
	{ inA_21_Dout_A sc_in sc_lv 32 signal 21 } 
	{ inA_21_Clk_A sc_out sc_logic 1 signal 21 } 
	{ inA_21_Rst_A sc_out sc_logic 1 signal 21 } 
	{ inA_22_Addr_A sc_out sc_lv 32 signal 22 } 
	{ inA_22_EN_A sc_out sc_logic 1 signal 22 } 
	{ inA_22_WEN_A sc_out sc_lv 4 signal 22 } 
	{ inA_22_Din_A sc_out sc_lv 32 signal 22 } 
	{ inA_22_Dout_A sc_in sc_lv 32 signal 22 } 
	{ inA_22_Clk_A sc_out sc_logic 1 signal 22 } 
	{ inA_22_Rst_A sc_out sc_logic 1 signal 22 } 
	{ inA_23_Addr_A sc_out sc_lv 32 signal 23 } 
	{ inA_23_EN_A sc_out sc_logic 1 signal 23 } 
	{ inA_23_WEN_A sc_out sc_lv 4 signal 23 } 
	{ inA_23_Din_A sc_out sc_lv 32 signal 23 } 
	{ inA_23_Dout_A sc_in sc_lv 32 signal 23 } 
	{ inA_23_Clk_A sc_out sc_logic 1 signal 23 } 
	{ inA_23_Rst_A sc_out sc_logic 1 signal 23 } 
	{ inB_0_Addr_A sc_out sc_lv 32 signal 24 } 
	{ inB_0_EN_A sc_out sc_logic 1 signal 24 } 
	{ inB_0_WEN_A sc_out sc_lv 4 signal 24 } 
	{ inB_0_Din_A sc_out sc_lv 32 signal 24 } 
	{ inB_0_Dout_A sc_in sc_lv 32 signal 24 } 
	{ inB_0_Clk_A sc_out sc_logic 1 signal 24 } 
	{ inB_0_Rst_A sc_out sc_logic 1 signal 24 } 
	{ inB_0_Addr_B sc_out sc_lv 32 signal 24 } 
	{ inB_0_EN_B sc_out sc_logic 1 signal 24 } 
	{ inB_0_WEN_B sc_out sc_lv 4 signal 24 } 
	{ inB_0_Din_B sc_out sc_lv 32 signal 24 } 
	{ inB_0_Dout_B sc_in sc_lv 32 signal 24 } 
	{ inB_0_Clk_B sc_out sc_logic 1 signal 24 } 
	{ inB_0_Rst_B sc_out sc_logic 1 signal 24 } 
	{ inB_1_Addr_A sc_out sc_lv 32 signal 25 } 
	{ inB_1_EN_A sc_out sc_logic 1 signal 25 } 
	{ inB_1_WEN_A sc_out sc_lv 4 signal 25 } 
	{ inB_1_Din_A sc_out sc_lv 32 signal 25 } 
	{ inB_1_Dout_A sc_in sc_lv 32 signal 25 } 
	{ inB_1_Clk_A sc_out sc_logic 1 signal 25 } 
	{ inB_1_Rst_A sc_out sc_logic 1 signal 25 } 
	{ inB_1_Addr_B sc_out sc_lv 32 signal 25 } 
	{ inB_1_EN_B sc_out sc_logic 1 signal 25 } 
	{ inB_1_WEN_B sc_out sc_lv 4 signal 25 } 
	{ inB_1_Din_B sc_out sc_lv 32 signal 25 } 
	{ inB_1_Dout_B sc_in sc_lv 32 signal 25 } 
	{ inB_1_Clk_B sc_out sc_logic 1 signal 25 } 
	{ inB_1_Rst_B sc_out sc_logic 1 signal 25 } 
	{ inB_2_Addr_A sc_out sc_lv 32 signal 26 } 
	{ inB_2_EN_A sc_out sc_logic 1 signal 26 } 
	{ inB_2_WEN_A sc_out sc_lv 4 signal 26 } 
	{ inB_2_Din_A sc_out sc_lv 32 signal 26 } 
	{ inB_2_Dout_A sc_in sc_lv 32 signal 26 } 
	{ inB_2_Clk_A sc_out sc_logic 1 signal 26 } 
	{ inB_2_Rst_A sc_out sc_logic 1 signal 26 } 
	{ inB_2_Addr_B sc_out sc_lv 32 signal 26 } 
	{ inB_2_EN_B sc_out sc_logic 1 signal 26 } 
	{ inB_2_WEN_B sc_out sc_lv 4 signal 26 } 
	{ inB_2_Din_B sc_out sc_lv 32 signal 26 } 
	{ inB_2_Dout_B sc_in sc_lv 32 signal 26 } 
	{ inB_2_Clk_B sc_out sc_logic 1 signal 26 } 
	{ inB_2_Rst_B sc_out sc_logic 1 signal 26 } 
	{ inB_3_Addr_A sc_out sc_lv 32 signal 27 } 
	{ inB_3_EN_A sc_out sc_logic 1 signal 27 } 
	{ inB_3_WEN_A sc_out sc_lv 4 signal 27 } 
	{ inB_3_Din_A sc_out sc_lv 32 signal 27 } 
	{ inB_3_Dout_A sc_in sc_lv 32 signal 27 } 
	{ inB_3_Clk_A sc_out sc_logic 1 signal 27 } 
	{ inB_3_Rst_A sc_out sc_logic 1 signal 27 } 
	{ inB_3_Addr_B sc_out sc_lv 32 signal 27 } 
	{ inB_3_EN_B sc_out sc_logic 1 signal 27 } 
	{ inB_3_WEN_B sc_out sc_lv 4 signal 27 } 
	{ inB_3_Din_B sc_out sc_lv 32 signal 27 } 
	{ inB_3_Dout_B sc_in sc_lv 32 signal 27 } 
	{ inB_3_Clk_B sc_out sc_logic 1 signal 27 } 
	{ inB_3_Rst_B sc_out sc_logic 1 signal 27 } 
	{ inB_4_Addr_A sc_out sc_lv 32 signal 28 } 
	{ inB_4_EN_A sc_out sc_logic 1 signal 28 } 
	{ inB_4_WEN_A sc_out sc_lv 4 signal 28 } 
	{ inB_4_Din_A sc_out sc_lv 32 signal 28 } 
	{ inB_4_Dout_A sc_in sc_lv 32 signal 28 } 
	{ inB_4_Clk_A sc_out sc_logic 1 signal 28 } 
	{ inB_4_Rst_A sc_out sc_logic 1 signal 28 } 
	{ inB_4_Addr_B sc_out sc_lv 32 signal 28 } 
	{ inB_4_EN_B sc_out sc_logic 1 signal 28 } 
	{ inB_4_WEN_B sc_out sc_lv 4 signal 28 } 
	{ inB_4_Din_B sc_out sc_lv 32 signal 28 } 
	{ inB_4_Dout_B sc_in sc_lv 32 signal 28 } 
	{ inB_4_Clk_B sc_out sc_logic 1 signal 28 } 
	{ inB_4_Rst_B sc_out sc_logic 1 signal 28 } 
	{ inB_5_Addr_A sc_out sc_lv 32 signal 29 } 
	{ inB_5_EN_A sc_out sc_logic 1 signal 29 } 
	{ inB_5_WEN_A sc_out sc_lv 4 signal 29 } 
	{ inB_5_Din_A sc_out sc_lv 32 signal 29 } 
	{ inB_5_Dout_A sc_in sc_lv 32 signal 29 } 
	{ inB_5_Clk_A sc_out sc_logic 1 signal 29 } 
	{ inB_5_Rst_A sc_out sc_logic 1 signal 29 } 
	{ inB_5_Addr_B sc_out sc_lv 32 signal 29 } 
	{ inB_5_EN_B sc_out sc_logic 1 signal 29 } 
	{ inB_5_WEN_B sc_out sc_lv 4 signal 29 } 
	{ inB_5_Din_B sc_out sc_lv 32 signal 29 } 
	{ inB_5_Dout_B sc_in sc_lv 32 signal 29 } 
	{ inB_5_Clk_B sc_out sc_logic 1 signal 29 } 
	{ inB_5_Rst_B sc_out sc_logic 1 signal 29 } 
	{ inB_6_Addr_A sc_out sc_lv 32 signal 30 } 
	{ inB_6_EN_A sc_out sc_logic 1 signal 30 } 
	{ inB_6_WEN_A sc_out sc_lv 4 signal 30 } 
	{ inB_6_Din_A sc_out sc_lv 32 signal 30 } 
	{ inB_6_Dout_A sc_in sc_lv 32 signal 30 } 
	{ inB_6_Clk_A sc_out sc_logic 1 signal 30 } 
	{ inB_6_Rst_A sc_out sc_logic 1 signal 30 } 
	{ inB_6_Addr_B sc_out sc_lv 32 signal 30 } 
	{ inB_6_EN_B sc_out sc_logic 1 signal 30 } 
	{ inB_6_WEN_B sc_out sc_lv 4 signal 30 } 
	{ inB_6_Din_B sc_out sc_lv 32 signal 30 } 
	{ inB_6_Dout_B sc_in sc_lv 32 signal 30 } 
	{ inB_6_Clk_B sc_out sc_logic 1 signal 30 } 
	{ inB_6_Rst_B sc_out sc_logic 1 signal 30 } 
	{ inB_7_Addr_A sc_out sc_lv 32 signal 31 } 
	{ inB_7_EN_A sc_out sc_logic 1 signal 31 } 
	{ inB_7_WEN_A sc_out sc_lv 4 signal 31 } 
	{ inB_7_Din_A sc_out sc_lv 32 signal 31 } 
	{ inB_7_Dout_A sc_in sc_lv 32 signal 31 } 
	{ inB_7_Clk_A sc_out sc_logic 1 signal 31 } 
	{ inB_7_Rst_A sc_out sc_logic 1 signal 31 } 
	{ inB_7_Addr_B sc_out sc_lv 32 signal 31 } 
	{ inB_7_EN_B sc_out sc_logic 1 signal 31 } 
	{ inB_7_WEN_B sc_out sc_lv 4 signal 31 } 
	{ inB_7_Din_B sc_out sc_lv 32 signal 31 } 
	{ inB_7_Dout_B sc_in sc_lv 32 signal 31 } 
	{ inB_7_Clk_B sc_out sc_logic 1 signal 31 } 
	{ inB_7_Rst_B sc_out sc_logic 1 signal 31 } 
	{ inB_8_Addr_A sc_out sc_lv 32 signal 32 } 
	{ inB_8_EN_A sc_out sc_logic 1 signal 32 } 
	{ inB_8_WEN_A sc_out sc_lv 4 signal 32 } 
	{ inB_8_Din_A sc_out sc_lv 32 signal 32 } 
	{ inB_8_Dout_A sc_in sc_lv 32 signal 32 } 
	{ inB_8_Clk_A sc_out sc_logic 1 signal 32 } 
	{ inB_8_Rst_A sc_out sc_logic 1 signal 32 } 
	{ inB_8_Addr_B sc_out sc_lv 32 signal 32 } 
	{ inB_8_EN_B sc_out sc_logic 1 signal 32 } 
	{ inB_8_WEN_B sc_out sc_lv 4 signal 32 } 
	{ inB_8_Din_B sc_out sc_lv 32 signal 32 } 
	{ inB_8_Dout_B sc_in sc_lv 32 signal 32 } 
	{ inB_8_Clk_B sc_out sc_logic 1 signal 32 } 
	{ inB_8_Rst_B sc_out sc_logic 1 signal 32 } 
	{ inB_9_Addr_A sc_out sc_lv 32 signal 33 } 
	{ inB_9_EN_A sc_out sc_logic 1 signal 33 } 
	{ inB_9_WEN_A sc_out sc_lv 4 signal 33 } 
	{ inB_9_Din_A sc_out sc_lv 32 signal 33 } 
	{ inB_9_Dout_A sc_in sc_lv 32 signal 33 } 
	{ inB_9_Clk_A sc_out sc_logic 1 signal 33 } 
	{ inB_9_Rst_A sc_out sc_logic 1 signal 33 } 
	{ inB_9_Addr_B sc_out sc_lv 32 signal 33 } 
	{ inB_9_EN_B sc_out sc_logic 1 signal 33 } 
	{ inB_9_WEN_B sc_out sc_lv 4 signal 33 } 
	{ inB_9_Din_B sc_out sc_lv 32 signal 33 } 
	{ inB_9_Dout_B sc_in sc_lv 32 signal 33 } 
	{ inB_9_Clk_B sc_out sc_logic 1 signal 33 } 
	{ inB_9_Rst_B sc_out sc_logic 1 signal 33 } 
	{ out_0_Addr_A sc_out sc_lv 32 signal 34 } 
	{ out_0_EN_A sc_out sc_logic 1 signal 34 } 
	{ out_0_WEN_A sc_out sc_lv 4 signal 34 } 
	{ out_0_Din_A sc_out sc_lv 32 signal 34 } 
	{ out_0_Dout_A sc_in sc_lv 32 signal 34 } 
	{ out_0_Clk_A sc_out sc_logic 1 signal 34 } 
	{ out_0_Rst_A sc_out sc_logic 1 signal 34 } 
	{ out_1_Addr_A sc_out sc_lv 32 signal 35 } 
	{ out_1_EN_A sc_out sc_logic 1 signal 35 } 
	{ out_1_WEN_A sc_out sc_lv 4 signal 35 } 
	{ out_1_Din_A sc_out sc_lv 32 signal 35 } 
	{ out_1_Dout_A sc_in sc_lv 32 signal 35 } 
	{ out_1_Clk_A sc_out sc_logic 1 signal 35 } 
	{ out_1_Rst_A sc_out sc_logic 1 signal 35 } 
	{ out_2_Addr_A sc_out sc_lv 32 signal 36 } 
	{ out_2_EN_A sc_out sc_logic 1 signal 36 } 
	{ out_2_WEN_A sc_out sc_lv 4 signal 36 } 
	{ out_2_Din_A sc_out sc_lv 32 signal 36 } 
	{ out_2_Dout_A sc_in sc_lv 32 signal 36 } 
	{ out_2_Clk_A sc_out sc_logic 1 signal 36 } 
	{ out_2_Rst_A sc_out sc_logic 1 signal 36 } 
	{ out_3_Addr_A sc_out sc_lv 32 signal 37 } 
	{ out_3_EN_A sc_out sc_logic 1 signal 37 } 
	{ out_3_WEN_A sc_out sc_lv 4 signal 37 } 
	{ out_3_Din_A sc_out sc_lv 32 signal 37 } 
	{ out_3_Dout_A sc_in sc_lv 32 signal 37 } 
	{ out_3_Clk_A sc_out sc_logic 1 signal 37 } 
	{ out_3_Rst_A sc_out sc_logic 1 signal 37 } 
	{ out_4_Addr_A sc_out sc_lv 32 signal 38 } 
	{ out_4_EN_A sc_out sc_logic 1 signal 38 } 
	{ out_4_WEN_A sc_out sc_lv 4 signal 38 } 
	{ out_4_Din_A sc_out sc_lv 32 signal 38 } 
	{ out_4_Dout_A sc_in sc_lv 32 signal 38 } 
	{ out_4_Clk_A sc_out sc_logic 1 signal 38 } 
	{ out_4_Rst_A sc_out sc_logic 1 signal 38 } 
	{ out_5_Addr_A sc_out sc_lv 32 signal 39 } 
	{ out_5_EN_A sc_out sc_logic 1 signal 39 } 
	{ out_5_WEN_A sc_out sc_lv 4 signal 39 } 
	{ out_5_Din_A sc_out sc_lv 32 signal 39 } 
	{ out_5_Dout_A sc_in sc_lv 32 signal 39 } 
	{ out_5_Clk_A sc_out sc_logic 1 signal 39 } 
	{ out_5_Rst_A sc_out sc_logic 1 signal 39 } 
	{ out_6_Addr_A sc_out sc_lv 32 signal 40 } 
	{ out_6_EN_A sc_out sc_logic 1 signal 40 } 
	{ out_6_WEN_A sc_out sc_lv 4 signal 40 } 
	{ out_6_Din_A sc_out sc_lv 32 signal 40 } 
	{ out_6_Dout_A sc_in sc_lv 32 signal 40 } 
	{ out_6_Clk_A sc_out sc_logic 1 signal 40 } 
	{ out_6_Rst_A sc_out sc_logic 1 signal 40 } 
	{ out_7_Addr_A sc_out sc_lv 32 signal 41 } 
	{ out_7_EN_A sc_out sc_logic 1 signal 41 } 
	{ out_7_WEN_A sc_out sc_lv 4 signal 41 } 
	{ out_7_Din_A sc_out sc_lv 32 signal 41 } 
	{ out_7_Dout_A sc_in sc_lv 32 signal 41 } 
	{ out_7_Clk_A sc_out sc_logic 1 signal 41 } 
	{ out_7_Rst_A sc_out sc_logic 1 signal 41 } 
	{ out_8_Addr_A sc_out sc_lv 32 signal 42 } 
	{ out_8_EN_A sc_out sc_logic 1 signal 42 } 
	{ out_8_WEN_A sc_out sc_lv 4 signal 42 } 
	{ out_8_Din_A sc_out sc_lv 32 signal 42 } 
	{ out_8_Dout_A sc_in sc_lv 32 signal 42 } 
	{ out_8_Clk_A sc_out sc_logic 1 signal 42 } 
	{ out_8_Rst_A sc_out sc_logic 1 signal 42 } 
	{ out_9_Addr_A sc_out sc_lv 32 signal 43 } 
	{ out_9_EN_A sc_out sc_logic 1 signal 43 } 
	{ out_9_WEN_A sc_out sc_lv 4 signal 43 } 
	{ out_9_Din_A sc_out sc_lv 32 signal 43 } 
	{ out_9_Dout_A sc_in sc_lv 32 signal 43 } 
	{ out_9_Clk_A sc_out sc_logic 1 signal 43 } 
	{ out_9_Rst_A sc_out sc_logic 1 signal 43 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"arr_mult_2d","role":"start","value":"0","valid_bit":"0"},{"name":"arr_mult_2d","role":"continue","value":"0","valid_bit":"4"},{"name":"arr_mult_2d","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"arr_mult_2d","role":"start","value":"0","valid_bit":"0"},{"name":"arr_mult_2d","role":"done","value":"0","valid_bit":"1"},{"name":"arr_mult_2d","role":"idle","value":"0","valid_bit":"2"},{"name":"arr_mult_2d","role":"ready","value":"0","valid_bit":"3"},{"name":"arr_mult_2d","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "inA_0_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_0", "role": "Addr_A" }} , 
 	{ "name": "inA_0_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_0", "role": "EN_A" }} , 
 	{ "name": "inA_0_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_0", "role": "WEN_A" }} , 
 	{ "name": "inA_0_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_0", "role": "Din_A" }} , 
 	{ "name": "inA_0_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_0", "role": "Dout_A" }} , 
 	{ "name": "inA_0_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_0", "role": "Clk_A" }} , 
 	{ "name": "inA_0_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_0", "role": "Rst_A" }} , 
 	{ "name": "inA_1_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_1", "role": "Addr_A" }} , 
 	{ "name": "inA_1_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_1", "role": "EN_A" }} , 
 	{ "name": "inA_1_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_1", "role": "WEN_A" }} , 
 	{ "name": "inA_1_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_1", "role": "Din_A" }} , 
 	{ "name": "inA_1_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_1", "role": "Dout_A" }} , 
 	{ "name": "inA_1_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_1", "role": "Clk_A" }} , 
 	{ "name": "inA_1_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_1", "role": "Rst_A" }} , 
 	{ "name": "inA_2_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_2", "role": "Addr_A" }} , 
 	{ "name": "inA_2_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_2", "role": "EN_A" }} , 
 	{ "name": "inA_2_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_2", "role": "WEN_A" }} , 
 	{ "name": "inA_2_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_2", "role": "Din_A" }} , 
 	{ "name": "inA_2_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_2", "role": "Dout_A" }} , 
 	{ "name": "inA_2_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_2", "role": "Clk_A" }} , 
 	{ "name": "inA_2_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_2", "role": "Rst_A" }} , 
 	{ "name": "inA_3_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_3", "role": "Addr_A" }} , 
 	{ "name": "inA_3_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_3", "role": "EN_A" }} , 
 	{ "name": "inA_3_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_3", "role": "WEN_A" }} , 
 	{ "name": "inA_3_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_3", "role": "Din_A" }} , 
 	{ "name": "inA_3_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_3", "role": "Dout_A" }} , 
 	{ "name": "inA_3_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_3", "role": "Clk_A" }} , 
 	{ "name": "inA_3_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_3", "role": "Rst_A" }} , 
 	{ "name": "inA_4_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_4", "role": "Addr_A" }} , 
 	{ "name": "inA_4_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_4", "role": "EN_A" }} , 
 	{ "name": "inA_4_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_4", "role": "WEN_A" }} , 
 	{ "name": "inA_4_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_4", "role": "Din_A" }} , 
 	{ "name": "inA_4_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_4", "role": "Dout_A" }} , 
 	{ "name": "inA_4_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_4", "role": "Clk_A" }} , 
 	{ "name": "inA_4_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_4", "role": "Rst_A" }} , 
 	{ "name": "inA_5_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_5", "role": "Addr_A" }} , 
 	{ "name": "inA_5_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_5", "role": "EN_A" }} , 
 	{ "name": "inA_5_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_5", "role": "WEN_A" }} , 
 	{ "name": "inA_5_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_5", "role": "Din_A" }} , 
 	{ "name": "inA_5_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_5", "role": "Dout_A" }} , 
 	{ "name": "inA_5_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_5", "role": "Clk_A" }} , 
 	{ "name": "inA_5_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_5", "role": "Rst_A" }} , 
 	{ "name": "inA_6_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_6", "role": "Addr_A" }} , 
 	{ "name": "inA_6_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_6", "role": "EN_A" }} , 
 	{ "name": "inA_6_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_6", "role": "WEN_A" }} , 
 	{ "name": "inA_6_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_6", "role": "Din_A" }} , 
 	{ "name": "inA_6_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_6", "role": "Dout_A" }} , 
 	{ "name": "inA_6_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_6", "role": "Clk_A" }} , 
 	{ "name": "inA_6_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_6", "role": "Rst_A" }} , 
 	{ "name": "inA_7_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_7", "role": "Addr_A" }} , 
 	{ "name": "inA_7_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_7", "role": "EN_A" }} , 
 	{ "name": "inA_7_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_7", "role": "WEN_A" }} , 
 	{ "name": "inA_7_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_7", "role": "Din_A" }} , 
 	{ "name": "inA_7_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_7", "role": "Dout_A" }} , 
 	{ "name": "inA_7_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_7", "role": "Clk_A" }} , 
 	{ "name": "inA_7_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_7", "role": "Rst_A" }} , 
 	{ "name": "inA_8_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_8", "role": "Addr_A" }} , 
 	{ "name": "inA_8_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_8", "role": "EN_A" }} , 
 	{ "name": "inA_8_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_8", "role": "WEN_A" }} , 
 	{ "name": "inA_8_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_8", "role": "Din_A" }} , 
 	{ "name": "inA_8_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_8", "role": "Dout_A" }} , 
 	{ "name": "inA_8_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_8", "role": "Clk_A" }} , 
 	{ "name": "inA_8_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_8", "role": "Rst_A" }} , 
 	{ "name": "inA_9_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_9", "role": "Addr_A" }} , 
 	{ "name": "inA_9_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_9", "role": "EN_A" }} , 
 	{ "name": "inA_9_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_9", "role": "WEN_A" }} , 
 	{ "name": "inA_9_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_9", "role": "Din_A" }} , 
 	{ "name": "inA_9_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_9", "role": "Dout_A" }} , 
 	{ "name": "inA_9_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_9", "role": "Clk_A" }} , 
 	{ "name": "inA_9_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_9", "role": "Rst_A" }} , 
 	{ "name": "inA_10_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_10", "role": "Addr_A" }} , 
 	{ "name": "inA_10_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_10", "role": "EN_A" }} , 
 	{ "name": "inA_10_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_10", "role": "WEN_A" }} , 
 	{ "name": "inA_10_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_10", "role": "Din_A" }} , 
 	{ "name": "inA_10_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_10", "role": "Dout_A" }} , 
 	{ "name": "inA_10_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_10", "role": "Clk_A" }} , 
 	{ "name": "inA_10_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_10", "role": "Rst_A" }} , 
 	{ "name": "inA_11_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_11", "role": "Addr_A" }} , 
 	{ "name": "inA_11_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_11", "role": "EN_A" }} , 
 	{ "name": "inA_11_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_11", "role": "WEN_A" }} , 
 	{ "name": "inA_11_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_11", "role": "Din_A" }} , 
 	{ "name": "inA_11_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_11", "role": "Dout_A" }} , 
 	{ "name": "inA_11_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_11", "role": "Clk_A" }} , 
 	{ "name": "inA_11_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_11", "role": "Rst_A" }} , 
 	{ "name": "inA_12_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_12", "role": "Addr_A" }} , 
 	{ "name": "inA_12_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_12", "role": "EN_A" }} , 
 	{ "name": "inA_12_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_12", "role": "WEN_A" }} , 
 	{ "name": "inA_12_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_12", "role": "Din_A" }} , 
 	{ "name": "inA_12_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_12", "role": "Dout_A" }} , 
 	{ "name": "inA_12_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_12", "role": "Clk_A" }} , 
 	{ "name": "inA_12_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_12", "role": "Rst_A" }} , 
 	{ "name": "inA_13_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_13", "role": "Addr_A" }} , 
 	{ "name": "inA_13_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_13", "role": "EN_A" }} , 
 	{ "name": "inA_13_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_13", "role": "WEN_A" }} , 
 	{ "name": "inA_13_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_13", "role": "Din_A" }} , 
 	{ "name": "inA_13_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_13", "role": "Dout_A" }} , 
 	{ "name": "inA_13_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_13", "role": "Clk_A" }} , 
 	{ "name": "inA_13_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_13", "role": "Rst_A" }} , 
 	{ "name": "inA_14_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_14", "role": "Addr_A" }} , 
 	{ "name": "inA_14_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_14", "role": "EN_A" }} , 
 	{ "name": "inA_14_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_14", "role": "WEN_A" }} , 
 	{ "name": "inA_14_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_14", "role": "Din_A" }} , 
 	{ "name": "inA_14_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_14", "role": "Dout_A" }} , 
 	{ "name": "inA_14_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_14", "role": "Clk_A" }} , 
 	{ "name": "inA_14_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_14", "role": "Rst_A" }} , 
 	{ "name": "inA_15_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_15", "role": "Addr_A" }} , 
 	{ "name": "inA_15_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_15", "role": "EN_A" }} , 
 	{ "name": "inA_15_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_15", "role": "WEN_A" }} , 
 	{ "name": "inA_15_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_15", "role": "Din_A" }} , 
 	{ "name": "inA_15_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_15", "role": "Dout_A" }} , 
 	{ "name": "inA_15_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_15", "role": "Clk_A" }} , 
 	{ "name": "inA_15_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_15", "role": "Rst_A" }} , 
 	{ "name": "inA_16_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_16", "role": "Addr_A" }} , 
 	{ "name": "inA_16_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_16", "role": "EN_A" }} , 
 	{ "name": "inA_16_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_16", "role": "WEN_A" }} , 
 	{ "name": "inA_16_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_16", "role": "Din_A" }} , 
 	{ "name": "inA_16_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_16", "role": "Dout_A" }} , 
 	{ "name": "inA_16_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_16", "role": "Clk_A" }} , 
 	{ "name": "inA_16_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_16", "role": "Rst_A" }} , 
 	{ "name": "inA_17_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_17", "role": "Addr_A" }} , 
 	{ "name": "inA_17_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_17", "role": "EN_A" }} , 
 	{ "name": "inA_17_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_17", "role": "WEN_A" }} , 
 	{ "name": "inA_17_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_17", "role": "Din_A" }} , 
 	{ "name": "inA_17_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_17", "role": "Dout_A" }} , 
 	{ "name": "inA_17_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_17", "role": "Clk_A" }} , 
 	{ "name": "inA_17_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_17", "role": "Rst_A" }} , 
 	{ "name": "inA_18_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_18", "role": "Addr_A" }} , 
 	{ "name": "inA_18_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_18", "role": "EN_A" }} , 
 	{ "name": "inA_18_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_18", "role": "WEN_A" }} , 
 	{ "name": "inA_18_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_18", "role": "Din_A" }} , 
 	{ "name": "inA_18_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_18", "role": "Dout_A" }} , 
 	{ "name": "inA_18_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_18", "role": "Clk_A" }} , 
 	{ "name": "inA_18_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_18", "role": "Rst_A" }} , 
 	{ "name": "inA_19_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_19", "role": "Addr_A" }} , 
 	{ "name": "inA_19_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_19", "role": "EN_A" }} , 
 	{ "name": "inA_19_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_19", "role": "WEN_A" }} , 
 	{ "name": "inA_19_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_19", "role": "Din_A" }} , 
 	{ "name": "inA_19_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_19", "role": "Dout_A" }} , 
 	{ "name": "inA_19_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_19", "role": "Clk_A" }} , 
 	{ "name": "inA_19_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_19", "role": "Rst_A" }} , 
 	{ "name": "inA_20_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_20", "role": "Addr_A" }} , 
 	{ "name": "inA_20_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_20", "role": "EN_A" }} , 
 	{ "name": "inA_20_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_20", "role": "WEN_A" }} , 
 	{ "name": "inA_20_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_20", "role": "Din_A" }} , 
 	{ "name": "inA_20_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_20", "role": "Dout_A" }} , 
 	{ "name": "inA_20_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_20", "role": "Clk_A" }} , 
 	{ "name": "inA_20_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_20", "role": "Rst_A" }} , 
 	{ "name": "inA_21_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_21", "role": "Addr_A" }} , 
 	{ "name": "inA_21_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_21", "role": "EN_A" }} , 
 	{ "name": "inA_21_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_21", "role": "WEN_A" }} , 
 	{ "name": "inA_21_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_21", "role": "Din_A" }} , 
 	{ "name": "inA_21_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_21", "role": "Dout_A" }} , 
 	{ "name": "inA_21_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_21", "role": "Clk_A" }} , 
 	{ "name": "inA_21_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_21", "role": "Rst_A" }} , 
 	{ "name": "inA_22_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_22", "role": "Addr_A" }} , 
 	{ "name": "inA_22_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_22", "role": "EN_A" }} , 
 	{ "name": "inA_22_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_22", "role": "WEN_A" }} , 
 	{ "name": "inA_22_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_22", "role": "Din_A" }} , 
 	{ "name": "inA_22_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_22", "role": "Dout_A" }} , 
 	{ "name": "inA_22_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_22", "role": "Clk_A" }} , 
 	{ "name": "inA_22_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_22", "role": "Rst_A" }} , 
 	{ "name": "inA_23_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_23", "role": "Addr_A" }} , 
 	{ "name": "inA_23_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_23", "role": "EN_A" }} , 
 	{ "name": "inA_23_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inA_23", "role": "WEN_A" }} , 
 	{ "name": "inA_23_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_23", "role": "Din_A" }} , 
 	{ "name": "inA_23_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_23", "role": "Dout_A" }} , 
 	{ "name": "inA_23_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_23", "role": "Clk_A" }} , 
 	{ "name": "inA_23_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inA_23", "role": "Rst_A" }} , 
 	{ "name": "inB_0_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Addr_A" }} , 
 	{ "name": "inB_0_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "EN_A" }} , 
 	{ "name": "inB_0_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_0", "role": "WEN_A" }} , 
 	{ "name": "inB_0_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Din_A" }} , 
 	{ "name": "inB_0_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Dout_A" }} , 
 	{ "name": "inB_0_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "Clk_A" }} , 
 	{ "name": "inB_0_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "Rst_A" }} , 
 	{ "name": "inB_0_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Addr_B" }} , 
 	{ "name": "inB_0_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "EN_B" }} , 
 	{ "name": "inB_0_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_0", "role": "WEN_B" }} , 
 	{ "name": "inB_0_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Din_B" }} , 
 	{ "name": "inB_0_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0", "role": "Dout_B" }} , 
 	{ "name": "inB_0_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "Clk_B" }} , 
 	{ "name": "inB_0_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_0", "role": "Rst_B" }} , 
 	{ "name": "inB_1_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Addr_A" }} , 
 	{ "name": "inB_1_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "EN_A" }} , 
 	{ "name": "inB_1_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_1", "role": "WEN_A" }} , 
 	{ "name": "inB_1_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Din_A" }} , 
 	{ "name": "inB_1_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Dout_A" }} , 
 	{ "name": "inB_1_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "Clk_A" }} , 
 	{ "name": "inB_1_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "Rst_A" }} , 
 	{ "name": "inB_1_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Addr_B" }} , 
 	{ "name": "inB_1_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "EN_B" }} , 
 	{ "name": "inB_1_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_1", "role": "WEN_B" }} , 
 	{ "name": "inB_1_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Din_B" }} , 
 	{ "name": "inB_1_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1", "role": "Dout_B" }} , 
 	{ "name": "inB_1_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "Clk_B" }} , 
 	{ "name": "inB_1_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_1", "role": "Rst_B" }} , 
 	{ "name": "inB_2_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Addr_A" }} , 
 	{ "name": "inB_2_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "EN_A" }} , 
 	{ "name": "inB_2_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_2", "role": "WEN_A" }} , 
 	{ "name": "inB_2_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Din_A" }} , 
 	{ "name": "inB_2_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Dout_A" }} , 
 	{ "name": "inB_2_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "Clk_A" }} , 
 	{ "name": "inB_2_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "Rst_A" }} , 
 	{ "name": "inB_2_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Addr_B" }} , 
 	{ "name": "inB_2_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "EN_B" }} , 
 	{ "name": "inB_2_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_2", "role": "WEN_B" }} , 
 	{ "name": "inB_2_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Din_B" }} , 
 	{ "name": "inB_2_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2", "role": "Dout_B" }} , 
 	{ "name": "inB_2_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "Clk_B" }} , 
 	{ "name": "inB_2_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_2", "role": "Rst_B" }} , 
 	{ "name": "inB_3_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Addr_A" }} , 
 	{ "name": "inB_3_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "EN_A" }} , 
 	{ "name": "inB_3_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_3", "role": "WEN_A" }} , 
 	{ "name": "inB_3_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Din_A" }} , 
 	{ "name": "inB_3_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Dout_A" }} , 
 	{ "name": "inB_3_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "Clk_A" }} , 
 	{ "name": "inB_3_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "Rst_A" }} , 
 	{ "name": "inB_3_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Addr_B" }} , 
 	{ "name": "inB_3_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "EN_B" }} , 
 	{ "name": "inB_3_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_3", "role": "WEN_B" }} , 
 	{ "name": "inB_3_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Din_B" }} , 
 	{ "name": "inB_3_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3", "role": "Dout_B" }} , 
 	{ "name": "inB_3_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "Clk_B" }} , 
 	{ "name": "inB_3_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_3", "role": "Rst_B" }} , 
 	{ "name": "inB_4_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Addr_A" }} , 
 	{ "name": "inB_4_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "EN_A" }} , 
 	{ "name": "inB_4_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_4", "role": "WEN_A" }} , 
 	{ "name": "inB_4_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Din_A" }} , 
 	{ "name": "inB_4_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Dout_A" }} , 
 	{ "name": "inB_4_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "Clk_A" }} , 
 	{ "name": "inB_4_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "Rst_A" }} , 
 	{ "name": "inB_4_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Addr_B" }} , 
 	{ "name": "inB_4_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "EN_B" }} , 
 	{ "name": "inB_4_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_4", "role": "WEN_B" }} , 
 	{ "name": "inB_4_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Din_B" }} , 
 	{ "name": "inB_4_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4", "role": "Dout_B" }} , 
 	{ "name": "inB_4_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "Clk_B" }} , 
 	{ "name": "inB_4_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_4", "role": "Rst_B" }} , 
 	{ "name": "inB_5_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Addr_A" }} , 
 	{ "name": "inB_5_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "EN_A" }} , 
 	{ "name": "inB_5_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_5", "role": "WEN_A" }} , 
 	{ "name": "inB_5_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Din_A" }} , 
 	{ "name": "inB_5_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Dout_A" }} , 
 	{ "name": "inB_5_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "Clk_A" }} , 
 	{ "name": "inB_5_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "Rst_A" }} , 
 	{ "name": "inB_5_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Addr_B" }} , 
 	{ "name": "inB_5_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "EN_B" }} , 
 	{ "name": "inB_5_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_5", "role": "WEN_B" }} , 
 	{ "name": "inB_5_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Din_B" }} , 
 	{ "name": "inB_5_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5", "role": "Dout_B" }} , 
 	{ "name": "inB_5_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "Clk_B" }} , 
 	{ "name": "inB_5_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_5", "role": "Rst_B" }} , 
 	{ "name": "inB_6_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Addr_A" }} , 
 	{ "name": "inB_6_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "EN_A" }} , 
 	{ "name": "inB_6_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_6", "role": "WEN_A" }} , 
 	{ "name": "inB_6_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Din_A" }} , 
 	{ "name": "inB_6_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Dout_A" }} , 
 	{ "name": "inB_6_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "Clk_A" }} , 
 	{ "name": "inB_6_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "Rst_A" }} , 
 	{ "name": "inB_6_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Addr_B" }} , 
 	{ "name": "inB_6_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "EN_B" }} , 
 	{ "name": "inB_6_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_6", "role": "WEN_B" }} , 
 	{ "name": "inB_6_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Din_B" }} , 
 	{ "name": "inB_6_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6", "role": "Dout_B" }} , 
 	{ "name": "inB_6_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "Clk_B" }} , 
 	{ "name": "inB_6_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_6", "role": "Rst_B" }} , 
 	{ "name": "inB_7_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Addr_A" }} , 
 	{ "name": "inB_7_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "EN_A" }} , 
 	{ "name": "inB_7_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_7", "role": "WEN_A" }} , 
 	{ "name": "inB_7_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Din_A" }} , 
 	{ "name": "inB_7_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Dout_A" }} , 
 	{ "name": "inB_7_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "Clk_A" }} , 
 	{ "name": "inB_7_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "Rst_A" }} , 
 	{ "name": "inB_7_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Addr_B" }} , 
 	{ "name": "inB_7_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "EN_B" }} , 
 	{ "name": "inB_7_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_7", "role": "WEN_B" }} , 
 	{ "name": "inB_7_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Din_B" }} , 
 	{ "name": "inB_7_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7", "role": "Dout_B" }} , 
 	{ "name": "inB_7_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "Clk_B" }} , 
 	{ "name": "inB_7_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_7", "role": "Rst_B" }} , 
 	{ "name": "inB_8_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Addr_A" }} , 
 	{ "name": "inB_8_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "EN_A" }} , 
 	{ "name": "inB_8_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_8", "role": "WEN_A" }} , 
 	{ "name": "inB_8_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Din_A" }} , 
 	{ "name": "inB_8_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Dout_A" }} , 
 	{ "name": "inB_8_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "Clk_A" }} , 
 	{ "name": "inB_8_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "Rst_A" }} , 
 	{ "name": "inB_8_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Addr_B" }} , 
 	{ "name": "inB_8_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "EN_B" }} , 
 	{ "name": "inB_8_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_8", "role": "WEN_B" }} , 
 	{ "name": "inB_8_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Din_B" }} , 
 	{ "name": "inB_8_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8", "role": "Dout_B" }} , 
 	{ "name": "inB_8_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "Clk_B" }} , 
 	{ "name": "inB_8_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_8", "role": "Rst_B" }} , 
 	{ "name": "inB_9_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Addr_A" }} , 
 	{ "name": "inB_9_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "EN_A" }} , 
 	{ "name": "inB_9_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_9", "role": "WEN_A" }} , 
 	{ "name": "inB_9_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Din_A" }} , 
 	{ "name": "inB_9_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Dout_A" }} , 
 	{ "name": "inB_9_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "Clk_A" }} , 
 	{ "name": "inB_9_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "Rst_A" }} , 
 	{ "name": "inB_9_Addr_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Addr_B" }} , 
 	{ "name": "inB_9_EN_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "EN_B" }} , 
 	{ "name": "inB_9_WEN_B", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inB_9", "role": "WEN_B" }} , 
 	{ "name": "inB_9_Din_B", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Din_B" }} , 
 	{ "name": "inB_9_Dout_B", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9", "role": "Dout_B" }} , 
 	{ "name": "inB_9_Clk_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "Clk_B" }} , 
 	{ "name": "inB_9_Rst_B", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inB_9", "role": "Rst_B" }} , 
 	{ "name": "out_0_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0", "role": "Addr_A" }} , 
 	{ "name": "out_0_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "EN_A" }} , 
 	{ "name": "out_0_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_0", "role": "WEN_A" }} , 
 	{ "name": "out_0_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0", "role": "Din_A" }} , 
 	{ "name": "out_0_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0", "role": "Dout_A" }} , 
 	{ "name": "out_0_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "Clk_A" }} , 
 	{ "name": "out_0_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "Rst_A" }} , 
 	{ "name": "out_1_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1", "role": "Addr_A" }} , 
 	{ "name": "out_1_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "EN_A" }} , 
 	{ "name": "out_1_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_1", "role": "WEN_A" }} , 
 	{ "name": "out_1_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1", "role": "Din_A" }} , 
 	{ "name": "out_1_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1", "role": "Dout_A" }} , 
 	{ "name": "out_1_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "Clk_A" }} , 
 	{ "name": "out_1_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "Rst_A" }} , 
 	{ "name": "out_2_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2", "role": "Addr_A" }} , 
 	{ "name": "out_2_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "EN_A" }} , 
 	{ "name": "out_2_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_2", "role": "WEN_A" }} , 
 	{ "name": "out_2_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2", "role": "Din_A" }} , 
 	{ "name": "out_2_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2", "role": "Dout_A" }} , 
 	{ "name": "out_2_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "Clk_A" }} , 
 	{ "name": "out_2_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "Rst_A" }} , 
 	{ "name": "out_3_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3", "role": "Addr_A" }} , 
 	{ "name": "out_3_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "EN_A" }} , 
 	{ "name": "out_3_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_3", "role": "WEN_A" }} , 
 	{ "name": "out_3_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3", "role": "Din_A" }} , 
 	{ "name": "out_3_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3", "role": "Dout_A" }} , 
 	{ "name": "out_3_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "Clk_A" }} , 
 	{ "name": "out_3_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "Rst_A" }} , 
 	{ "name": "out_4_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4", "role": "Addr_A" }} , 
 	{ "name": "out_4_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "EN_A" }} , 
 	{ "name": "out_4_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_4", "role": "WEN_A" }} , 
 	{ "name": "out_4_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4", "role": "Din_A" }} , 
 	{ "name": "out_4_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4", "role": "Dout_A" }} , 
 	{ "name": "out_4_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "Clk_A" }} , 
 	{ "name": "out_4_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "Rst_A" }} , 
 	{ "name": "out_5_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5", "role": "Addr_A" }} , 
 	{ "name": "out_5_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "EN_A" }} , 
 	{ "name": "out_5_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_5", "role": "WEN_A" }} , 
 	{ "name": "out_5_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5", "role": "Din_A" }} , 
 	{ "name": "out_5_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5", "role": "Dout_A" }} , 
 	{ "name": "out_5_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "Clk_A" }} , 
 	{ "name": "out_5_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "Rst_A" }} , 
 	{ "name": "out_6_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6", "role": "Addr_A" }} , 
 	{ "name": "out_6_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "EN_A" }} , 
 	{ "name": "out_6_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_6", "role": "WEN_A" }} , 
 	{ "name": "out_6_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6", "role": "Din_A" }} , 
 	{ "name": "out_6_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6", "role": "Dout_A" }} , 
 	{ "name": "out_6_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "Clk_A" }} , 
 	{ "name": "out_6_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "Rst_A" }} , 
 	{ "name": "out_7_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7", "role": "Addr_A" }} , 
 	{ "name": "out_7_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "EN_A" }} , 
 	{ "name": "out_7_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_7", "role": "WEN_A" }} , 
 	{ "name": "out_7_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7", "role": "Din_A" }} , 
 	{ "name": "out_7_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7", "role": "Dout_A" }} , 
 	{ "name": "out_7_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "Clk_A" }} , 
 	{ "name": "out_7_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "Rst_A" }} , 
 	{ "name": "out_8_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_8", "role": "Addr_A" }} , 
 	{ "name": "out_8_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_8", "role": "EN_A" }} , 
 	{ "name": "out_8_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_8", "role": "WEN_A" }} , 
 	{ "name": "out_8_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_8", "role": "Din_A" }} , 
 	{ "name": "out_8_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_8", "role": "Dout_A" }} , 
 	{ "name": "out_8_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_8", "role": "Clk_A" }} , 
 	{ "name": "out_8_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_8", "role": "Rst_A" }} , 
 	{ "name": "out_9_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_9", "role": "Addr_A" }} , 
 	{ "name": "out_9_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_9", "role": "EN_A" }} , 
 	{ "name": "out_9_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_9", "role": "WEN_A" }} , 
 	{ "name": "out_9_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_9", "role": "Din_A" }} , 
 	{ "name": "out_9_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_9", "role": "Dout_A" }} , 
 	{ "name": "out_9_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_9", "role": "Clk_A" }} , 
 	{ "name": "out_9_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_9", "role": "Rst_A" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"],
		"CDFG" : "arr_mult_2d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2403", "EstimateLatencyMax" : "2403",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "inA_0", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_1", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_2", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_3", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_4", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_5", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_6", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_7", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_8", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_9", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_10", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_11", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_12", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_13", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_14", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_15", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_16", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_17", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_18", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_19", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_20", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_21", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_22", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inA_23", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_0", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_1", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_2", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_3", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_4", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_5", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_6", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_7", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_8", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "inB_9", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_1", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_2", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_3", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_4", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_5", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_6", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_7", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_8", "Type" : "Bram", "Direction" : "O"},
			{"Name" : "out_9", "Type" : "Bram", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_21_1_VITIS_LOOP_22_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "12", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U1", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U2", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U3", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U4", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U5", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U6", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U7", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U8", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U9", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U10", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U11", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U12", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U13", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U14", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U15", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U16", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U17", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U18", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U19", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U20", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U21", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U22", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_10s_10s_10_1_1_U23", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mac_muladd_10s_10s_10ns_10_4_1_U24", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	arr_mult_2d {
		inA_0 {Type I LastRead 0 FirstWrite -1}
		inA_1 {Type I LastRead 0 FirstWrite -1}
		inA_2 {Type I LastRead 0 FirstWrite -1}
		inA_3 {Type I LastRead 0 FirstWrite -1}
		inA_4 {Type I LastRead 0 FirstWrite -1}
		inA_5 {Type I LastRead 0 FirstWrite -1}
		inA_6 {Type I LastRead 0 FirstWrite -1}
		inA_7 {Type I LastRead 0 FirstWrite -1}
		inA_8 {Type I LastRead 0 FirstWrite -1}
		inA_9 {Type I LastRead 0 FirstWrite -1}
		inA_10 {Type I LastRead 0 FirstWrite -1}
		inA_11 {Type I LastRead 0 FirstWrite -1}
		inA_12 {Type I LastRead 0 FirstWrite -1}
		inA_13 {Type I LastRead 0 FirstWrite -1}
		inA_14 {Type I LastRead 0 FirstWrite -1}
		inA_15 {Type I LastRead 0 FirstWrite -1}
		inA_16 {Type I LastRead 0 FirstWrite -1}
		inA_17 {Type I LastRead 0 FirstWrite -1}
		inA_18 {Type I LastRead 0 FirstWrite -1}
		inA_19 {Type I LastRead 0 FirstWrite -1}
		inA_20 {Type I LastRead 0 FirstWrite -1}
		inA_21 {Type I LastRead 0 FirstWrite -1}
		inA_22 {Type I LastRead 0 FirstWrite -1}
		inA_23 {Type I LastRead 0 FirstWrite -1}
		inB_0 {Type I LastRead 12 FirstWrite -1}
		inB_1 {Type I LastRead 12 FirstWrite -1}
		inB_2 {Type I LastRead 12 FirstWrite -1}
		inB_3 {Type I LastRead 12 FirstWrite -1}
		inB_4 {Type I LastRead 12 FirstWrite -1}
		inB_5 {Type I LastRead 12 FirstWrite -1}
		inB_6 {Type I LastRead 12 FirstWrite -1}
		inB_7 {Type I LastRead 12 FirstWrite -1}
		inB_8 {Type I LastRead 12 FirstWrite -1}
		inB_9 {Type I LastRead 12 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 13}
		out_1 {Type O LastRead -1 FirstWrite 13}
		out_2 {Type O LastRead -1 FirstWrite 13}
		out_3 {Type O LastRead -1 FirstWrite 13}
		out_4 {Type O LastRead -1 FirstWrite 13}
		out_5 {Type O LastRead -1 FirstWrite 13}
		out_6 {Type O LastRead -1 FirstWrite 13}
		out_7 {Type O LastRead -1 FirstWrite 13}
		out_8 {Type O LastRead -1 FirstWrite 13}
		out_9 {Type O LastRead -1 FirstWrite 13}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2403", "Max" : "2403"}
	, {"Name" : "Interval", "Min" : "2404", "Max" : "2404"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	inA_0 { bram {  { inA_0_Addr_A MemPortADDR2 1 32 }  { inA_0_EN_A MemPortCE2 1 1 }  { inA_0_WEN_A MemPortWE2 1 4 }  { inA_0_Din_A MemPortDIN2 1 32 }  { inA_0_Dout_A MemPortDOUT2 0 32 }  { inA_0_Clk_A mem_clk 1 1 }  { inA_0_Rst_A mem_rst 1 1 } } }
	inA_1 { bram {  { inA_1_Addr_A MemPortADDR2 1 32 }  { inA_1_EN_A MemPortCE2 1 1 }  { inA_1_WEN_A MemPortWE2 1 4 }  { inA_1_Din_A MemPortDIN2 1 32 }  { inA_1_Dout_A MemPortDOUT2 0 32 }  { inA_1_Clk_A mem_clk 1 1 }  { inA_1_Rst_A mem_rst 1 1 } } }
	inA_2 { bram {  { inA_2_Addr_A MemPortADDR2 1 32 }  { inA_2_EN_A MemPortCE2 1 1 }  { inA_2_WEN_A MemPortWE2 1 4 }  { inA_2_Din_A MemPortDIN2 1 32 }  { inA_2_Dout_A MemPortDOUT2 0 32 }  { inA_2_Clk_A mem_clk 1 1 }  { inA_2_Rst_A mem_rst 1 1 } } }
	inA_3 { bram {  { inA_3_Addr_A MemPortADDR2 1 32 }  { inA_3_EN_A MemPortCE2 1 1 }  { inA_3_WEN_A MemPortWE2 1 4 }  { inA_3_Din_A MemPortDIN2 1 32 }  { inA_3_Dout_A MemPortDOUT2 0 32 }  { inA_3_Clk_A mem_clk 1 1 }  { inA_3_Rst_A mem_rst 1 1 } } }
	inA_4 { bram {  { inA_4_Addr_A MemPortADDR2 1 32 }  { inA_4_EN_A MemPortCE2 1 1 }  { inA_4_WEN_A MemPortWE2 1 4 }  { inA_4_Din_A MemPortDIN2 1 32 }  { inA_4_Dout_A MemPortDOUT2 0 32 }  { inA_4_Clk_A mem_clk 1 1 }  { inA_4_Rst_A mem_rst 1 1 } } }
	inA_5 { bram {  { inA_5_Addr_A MemPortADDR2 1 32 }  { inA_5_EN_A MemPortCE2 1 1 }  { inA_5_WEN_A MemPortWE2 1 4 }  { inA_5_Din_A MemPortDIN2 1 32 }  { inA_5_Dout_A MemPortDOUT2 0 32 }  { inA_5_Clk_A mem_clk 1 1 }  { inA_5_Rst_A mem_rst 1 1 } } }
	inA_6 { bram {  { inA_6_Addr_A MemPortADDR2 1 32 }  { inA_6_EN_A MemPortCE2 1 1 }  { inA_6_WEN_A MemPortWE2 1 4 }  { inA_6_Din_A MemPortDIN2 1 32 }  { inA_6_Dout_A MemPortDOUT2 0 32 }  { inA_6_Clk_A mem_clk 1 1 }  { inA_6_Rst_A mem_rst 1 1 } } }
	inA_7 { bram {  { inA_7_Addr_A MemPortADDR2 1 32 }  { inA_7_EN_A MemPortCE2 1 1 }  { inA_7_WEN_A MemPortWE2 1 4 }  { inA_7_Din_A MemPortDIN2 1 32 }  { inA_7_Dout_A MemPortDOUT2 0 32 }  { inA_7_Clk_A mem_clk 1 1 }  { inA_7_Rst_A mem_rst 1 1 } } }
	inA_8 { bram {  { inA_8_Addr_A MemPortADDR2 1 32 }  { inA_8_EN_A MemPortCE2 1 1 }  { inA_8_WEN_A MemPortWE2 1 4 }  { inA_8_Din_A MemPortDIN2 1 32 }  { inA_8_Dout_A MemPortDOUT2 0 32 }  { inA_8_Clk_A mem_clk 1 1 }  { inA_8_Rst_A mem_rst 1 1 } } }
	inA_9 { bram {  { inA_9_Addr_A MemPortADDR2 1 32 }  { inA_9_EN_A MemPortCE2 1 1 }  { inA_9_WEN_A MemPortWE2 1 4 }  { inA_9_Din_A MemPortDIN2 1 32 }  { inA_9_Dout_A MemPortDOUT2 0 32 }  { inA_9_Clk_A mem_clk 1 1 }  { inA_9_Rst_A mem_rst 1 1 } } }
	inA_10 { bram {  { inA_10_Addr_A MemPortADDR2 1 32 }  { inA_10_EN_A MemPortCE2 1 1 }  { inA_10_WEN_A MemPortWE2 1 4 }  { inA_10_Din_A MemPortDIN2 1 32 }  { inA_10_Dout_A MemPortDOUT2 0 32 }  { inA_10_Clk_A mem_clk 1 1 }  { inA_10_Rst_A mem_rst 1 1 } } }
	inA_11 { bram {  { inA_11_Addr_A MemPortADDR2 1 32 }  { inA_11_EN_A MemPortCE2 1 1 }  { inA_11_WEN_A MemPortWE2 1 4 }  { inA_11_Din_A MemPortDIN2 1 32 }  { inA_11_Dout_A MemPortDOUT2 0 32 }  { inA_11_Clk_A mem_clk 1 1 }  { inA_11_Rst_A mem_rst 1 1 } } }
	inA_12 { bram {  { inA_12_Addr_A MemPortADDR2 1 32 }  { inA_12_EN_A MemPortCE2 1 1 }  { inA_12_WEN_A MemPortWE2 1 4 }  { inA_12_Din_A MemPortDIN2 1 32 }  { inA_12_Dout_A MemPortDOUT2 0 32 }  { inA_12_Clk_A mem_clk 1 1 }  { inA_12_Rst_A mem_rst 1 1 } } }
	inA_13 { bram {  { inA_13_Addr_A MemPortADDR2 1 32 }  { inA_13_EN_A MemPortCE2 1 1 }  { inA_13_WEN_A MemPortWE2 1 4 }  { inA_13_Din_A MemPortDIN2 1 32 }  { inA_13_Dout_A MemPortDOUT2 0 32 }  { inA_13_Clk_A mem_clk 1 1 }  { inA_13_Rst_A mem_rst 1 1 } } }
	inA_14 { bram {  { inA_14_Addr_A MemPortADDR2 1 32 }  { inA_14_EN_A MemPortCE2 1 1 }  { inA_14_WEN_A MemPortWE2 1 4 }  { inA_14_Din_A MemPortDIN2 1 32 }  { inA_14_Dout_A MemPortDOUT2 0 32 }  { inA_14_Clk_A mem_clk 1 1 }  { inA_14_Rst_A mem_rst 1 1 } } }
	inA_15 { bram {  { inA_15_Addr_A MemPortADDR2 1 32 }  { inA_15_EN_A MemPortCE2 1 1 }  { inA_15_WEN_A MemPortWE2 1 4 }  { inA_15_Din_A MemPortDIN2 1 32 }  { inA_15_Dout_A MemPortDOUT2 0 32 }  { inA_15_Clk_A mem_clk 1 1 }  { inA_15_Rst_A mem_rst 1 1 } } }
	inA_16 { bram {  { inA_16_Addr_A MemPortADDR2 1 32 }  { inA_16_EN_A MemPortCE2 1 1 }  { inA_16_WEN_A MemPortWE2 1 4 }  { inA_16_Din_A MemPortDIN2 1 32 }  { inA_16_Dout_A MemPortDOUT2 0 32 }  { inA_16_Clk_A mem_clk 1 1 }  { inA_16_Rst_A mem_rst 1 1 } } }
	inA_17 { bram {  { inA_17_Addr_A MemPortADDR2 1 32 }  { inA_17_EN_A MemPortCE2 1 1 }  { inA_17_WEN_A MemPortWE2 1 4 }  { inA_17_Din_A MemPortDIN2 1 32 }  { inA_17_Dout_A MemPortDOUT2 0 32 }  { inA_17_Clk_A mem_clk 1 1 }  { inA_17_Rst_A mem_rst 1 1 } } }
	inA_18 { bram {  { inA_18_Addr_A MemPortADDR2 1 32 }  { inA_18_EN_A MemPortCE2 1 1 }  { inA_18_WEN_A MemPortWE2 1 4 }  { inA_18_Din_A MemPortDIN2 1 32 }  { inA_18_Dout_A MemPortDOUT2 0 32 }  { inA_18_Clk_A mem_clk 1 1 }  { inA_18_Rst_A mem_rst 1 1 } } }
	inA_19 { bram {  { inA_19_Addr_A MemPortADDR2 1 32 }  { inA_19_EN_A MemPortCE2 1 1 }  { inA_19_WEN_A MemPortWE2 1 4 }  { inA_19_Din_A MemPortDIN2 1 32 }  { inA_19_Dout_A MemPortDOUT2 0 32 }  { inA_19_Clk_A mem_clk 1 1 }  { inA_19_Rst_A mem_rst 1 1 } } }
	inA_20 { bram {  { inA_20_Addr_A MemPortADDR2 1 32 }  { inA_20_EN_A MemPortCE2 1 1 }  { inA_20_WEN_A MemPortWE2 1 4 }  { inA_20_Din_A MemPortDIN2 1 32 }  { inA_20_Dout_A MemPortDOUT2 0 32 }  { inA_20_Clk_A mem_clk 1 1 }  { inA_20_Rst_A mem_rst 1 1 } } }
	inA_21 { bram {  { inA_21_Addr_A MemPortADDR2 1 32 }  { inA_21_EN_A MemPortCE2 1 1 }  { inA_21_WEN_A MemPortWE2 1 4 }  { inA_21_Din_A MemPortDIN2 1 32 }  { inA_21_Dout_A MemPortDOUT2 0 32 }  { inA_21_Clk_A mem_clk 1 1 }  { inA_21_Rst_A mem_rst 1 1 } } }
	inA_22 { bram {  { inA_22_Addr_A MemPortADDR2 1 32 }  { inA_22_EN_A MemPortCE2 1 1 }  { inA_22_WEN_A MemPortWE2 1 4 }  { inA_22_Din_A MemPortDIN2 1 32 }  { inA_22_Dout_A MemPortDOUT2 0 32 }  { inA_22_Clk_A mem_clk 1 1 }  { inA_22_Rst_A mem_rst 1 1 } } }
	inA_23 { bram {  { inA_23_Addr_A MemPortADDR2 1 32 }  { inA_23_EN_A MemPortCE2 1 1 }  { inA_23_WEN_A MemPortWE2 1 4 }  { inA_23_Din_A MemPortDIN2 1 32 }  { inA_23_Dout_A MemPortDOUT2 0 32 }  { inA_23_Clk_A mem_clk 1 1 }  { inA_23_Rst_A mem_rst 1 1 } } }
	inB_0 { bram {  { inB_0_Addr_A MemPortADDR2 1 32 }  { inB_0_EN_A MemPortCE2 1 1 }  { inB_0_WEN_A MemPortWE2 1 4 }  { inB_0_Din_A MemPortDIN2 1 32 }  { inB_0_Dout_A MemPortDOUT2 0 32 }  { inB_0_Clk_A mem_clk 1 1 }  { inB_0_Rst_A mem_rst 1 1 }  { inB_0_Addr_B MemPortADDR2 1 32 }  { inB_0_EN_B MemPortCE2 1 1 }  { inB_0_WEN_B MemPortWE2 1 4 }  { inB_0_Din_B MemPortDIN2 1 32 }  { inB_0_Dout_B MemPortDOUT2 0 32 }  { inB_0_Clk_B mem_clk 1 1 }  { inB_0_Rst_B mem_rst 1 1 } } }
	inB_1 { bram {  { inB_1_Addr_A MemPortADDR2 1 32 }  { inB_1_EN_A MemPortCE2 1 1 }  { inB_1_WEN_A MemPortWE2 1 4 }  { inB_1_Din_A MemPortDIN2 1 32 }  { inB_1_Dout_A MemPortDOUT2 0 32 }  { inB_1_Clk_A mem_clk 1 1 }  { inB_1_Rst_A mem_rst 1 1 }  { inB_1_Addr_B MemPortADDR2 1 32 }  { inB_1_EN_B MemPortCE2 1 1 }  { inB_1_WEN_B MemPortWE2 1 4 }  { inB_1_Din_B MemPortDIN2 1 32 }  { inB_1_Dout_B MemPortDOUT2 0 32 }  { inB_1_Clk_B mem_clk 1 1 }  { inB_1_Rst_B mem_rst 1 1 } } }
	inB_2 { bram {  { inB_2_Addr_A MemPortADDR2 1 32 }  { inB_2_EN_A MemPortCE2 1 1 }  { inB_2_WEN_A MemPortWE2 1 4 }  { inB_2_Din_A MemPortDIN2 1 32 }  { inB_2_Dout_A MemPortDOUT2 0 32 }  { inB_2_Clk_A mem_clk 1 1 }  { inB_2_Rst_A mem_rst 1 1 }  { inB_2_Addr_B MemPortADDR2 1 32 }  { inB_2_EN_B MemPortCE2 1 1 }  { inB_2_WEN_B MemPortWE2 1 4 }  { inB_2_Din_B MemPortDIN2 1 32 }  { inB_2_Dout_B MemPortDOUT2 0 32 }  { inB_2_Clk_B mem_clk 1 1 }  { inB_2_Rst_B mem_rst 1 1 } } }
	inB_3 { bram {  { inB_3_Addr_A MemPortADDR2 1 32 }  { inB_3_EN_A MemPortCE2 1 1 }  { inB_3_WEN_A MemPortWE2 1 4 }  { inB_3_Din_A MemPortDIN2 1 32 }  { inB_3_Dout_A MemPortDOUT2 0 32 }  { inB_3_Clk_A mem_clk 1 1 }  { inB_3_Rst_A mem_rst 1 1 }  { inB_3_Addr_B MemPortADDR2 1 32 }  { inB_3_EN_B MemPortCE2 1 1 }  { inB_3_WEN_B MemPortWE2 1 4 }  { inB_3_Din_B MemPortDIN2 1 32 }  { inB_3_Dout_B MemPortDOUT2 0 32 }  { inB_3_Clk_B mem_clk 1 1 }  { inB_3_Rst_B mem_rst 1 1 } } }
	inB_4 { bram {  { inB_4_Addr_A MemPortADDR2 1 32 }  { inB_4_EN_A MemPortCE2 1 1 }  { inB_4_WEN_A MemPortWE2 1 4 }  { inB_4_Din_A MemPortDIN2 1 32 }  { inB_4_Dout_A MemPortDOUT2 0 32 }  { inB_4_Clk_A mem_clk 1 1 }  { inB_4_Rst_A mem_rst 1 1 }  { inB_4_Addr_B MemPortADDR2 1 32 }  { inB_4_EN_B MemPortCE2 1 1 }  { inB_4_WEN_B MemPortWE2 1 4 }  { inB_4_Din_B MemPortDIN2 1 32 }  { inB_4_Dout_B MemPortDOUT2 0 32 }  { inB_4_Clk_B mem_clk 1 1 }  { inB_4_Rst_B mem_rst 1 1 } } }
	inB_5 { bram {  { inB_5_Addr_A MemPortADDR2 1 32 }  { inB_5_EN_A MemPortCE2 1 1 }  { inB_5_WEN_A MemPortWE2 1 4 }  { inB_5_Din_A MemPortDIN2 1 32 }  { inB_5_Dout_A MemPortDOUT2 0 32 }  { inB_5_Clk_A mem_clk 1 1 }  { inB_5_Rst_A mem_rst 1 1 }  { inB_5_Addr_B MemPortADDR2 1 32 }  { inB_5_EN_B MemPortCE2 1 1 }  { inB_5_WEN_B MemPortWE2 1 4 }  { inB_5_Din_B MemPortDIN2 1 32 }  { inB_5_Dout_B MemPortDOUT2 0 32 }  { inB_5_Clk_B mem_clk 1 1 }  { inB_5_Rst_B mem_rst 1 1 } } }
	inB_6 { bram {  { inB_6_Addr_A MemPortADDR2 1 32 }  { inB_6_EN_A MemPortCE2 1 1 }  { inB_6_WEN_A MemPortWE2 1 4 }  { inB_6_Din_A MemPortDIN2 1 32 }  { inB_6_Dout_A MemPortDOUT2 0 32 }  { inB_6_Clk_A mem_clk 1 1 }  { inB_6_Rst_A mem_rst 1 1 }  { inB_6_Addr_B MemPortADDR2 1 32 }  { inB_6_EN_B MemPortCE2 1 1 }  { inB_6_WEN_B MemPortWE2 1 4 }  { inB_6_Din_B MemPortDIN2 1 32 }  { inB_6_Dout_B MemPortDOUT2 0 32 }  { inB_6_Clk_B mem_clk 1 1 }  { inB_6_Rst_B mem_rst 1 1 } } }
	inB_7 { bram {  { inB_7_Addr_A MemPortADDR2 1 32 }  { inB_7_EN_A MemPortCE2 1 1 }  { inB_7_WEN_A MemPortWE2 1 4 }  { inB_7_Din_A MemPortDIN2 1 32 }  { inB_7_Dout_A MemPortDOUT2 0 32 }  { inB_7_Clk_A mem_clk 1 1 }  { inB_7_Rst_A mem_rst 1 1 }  { inB_7_Addr_B MemPortADDR2 1 32 }  { inB_7_EN_B MemPortCE2 1 1 }  { inB_7_WEN_B MemPortWE2 1 4 }  { inB_7_Din_B MemPortDIN2 1 32 }  { inB_7_Dout_B MemPortDOUT2 0 32 }  { inB_7_Clk_B mem_clk 1 1 }  { inB_7_Rst_B mem_rst 1 1 } } }
	inB_8 { bram {  { inB_8_Addr_A MemPortADDR2 1 32 }  { inB_8_EN_A MemPortCE2 1 1 }  { inB_8_WEN_A MemPortWE2 1 4 }  { inB_8_Din_A MemPortDIN2 1 32 }  { inB_8_Dout_A MemPortDOUT2 0 32 }  { inB_8_Clk_A mem_clk 1 1 }  { inB_8_Rst_A mem_rst 1 1 }  { inB_8_Addr_B MemPortADDR2 1 32 }  { inB_8_EN_B MemPortCE2 1 1 }  { inB_8_WEN_B MemPortWE2 1 4 }  { inB_8_Din_B MemPortDIN2 1 32 }  { inB_8_Dout_B MemPortDOUT2 0 32 }  { inB_8_Clk_B mem_clk 1 1 }  { inB_8_Rst_B mem_rst 1 1 } } }
	inB_9 { bram {  { inB_9_Addr_A MemPortADDR2 1 32 }  { inB_9_EN_A MemPortCE2 1 1 }  { inB_9_WEN_A MemPortWE2 1 4 }  { inB_9_Din_A MemPortDIN2 1 32 }  { inB_9_Dout_A MemPortDOUT2 0 32 }  { inB_9_Clk_A mem_clk 1 1 }  { inB_9_Rst_A mem_rst 1 1 }  { inB_9_Addr_B MemPortADDR2 1 32 }  { inB_9_EN_B MemPortCE2 1 1 }  { inB_9_WEN_B MemPortWE2 1 4 }  { inB_9_Din_B MemPortDIN2 1 32 }  { inB_9_Dout_B MemPortDOUT2 0 32 }  { inB_9_Clk_B mem_clk 1 1 }  { inB_9_Rst_B mem_rst 1 1 } } }
	out_0 { bram {  { out_0_Addr_A MemPortADDR2 1 32 }  { out_0_EN_A MemPortCE2 1 1 }  { out_0_WEN_A MemPortWE2 1 4 }  { out_0_Din_A MemPortDIN2 1 32 }  { out_0_Dout_A MemPortDOUT2 0 32 }  { out_0_Clk_A mem_clk 1 1 }  { out_0_Rst_A mem_rst 1 1 } } }
	out_1 { bram {  { out_1_Addr_A MemPortADDR2 1 32 }  { out_1_EN_A MemPortCE2 1 1 }  { out_1_WEN_A MemPortWE2 1 4 }  { out_1_Din_A MemPortDIN2 1 32 }  { out_1_Dout_A MemPortDOUT2 0 32 }  { out_1_Clk_A mem_clk 1 1 }  { out_1_Rst_A mem_rst 1 1 } } }
	out_2 { bram {  { out_2_Addr_A MemPortADDR2 1 32 }  { out_2_EN_A MemPortCE2 1 1 }  { out_2_WEN_A MemPortWE2 1 4 }  { out_2_Din_A MemPortDIN2 1 32 }  { out_2_Dout_A MemPortDOUT2 0 32 }  { out_2_Clk_A mem_clk 1 1 }  { out_2_Rst_A mem_rst 1 1 } } }
	out_3 { bram {  { out_3_Addr_A MemPortADDR2 1 32 }  { out_3_EN_A MemPortCE2 1 1 }  { out_3_WEN_A MemPortWE2 1 4 }  { out_3_Din_A MemPortDIN2 1 32 }  { out_3_Dout_A MemPortDOUT2 0 32 }  { out_3_Clk_A mem_clk 1 1 }  { out_3_Rst_A mem_rst 1 1 } } }
	out_4 { bram {  { out_4_Addr_A MemPortADDR2 1 32 }  { out_4_EN_A MemPortCE2 1 1 }  { out_4_WEN_A MemPortWE2 1 4 }  { out_4_Din_A MemPortDIN2 1 32 }  { out_4_Dout_A MemPortDOUT2 0 32 }  { out_4_Clk_A mem_clk 1 1 }  { out_4_Rst_A mem_rst 1 1 } } }
	out_5 { bram {  { out_5_Addr_A MemPortADDR2 1 32 }  { out_5_EN_A MemPortCE2 1 1 }  { out_5_WEN_A MemPortWE2 1 4 }  { out_5_Din_A MemPortDIN2 1 32 }  { out_5_Dout_A MemPortDOUT2 0 32 }  { out_5_Clk_A mem_clk 1 1 }  { out_5_Rst_A mem_rst 1 1 } } }
	out_6 { bram {  { out_6_Addr_A MemPortADDR2 1 32 }  { out_6_EN_A MemPortCE2 1 1 }  { out_6_WEN_A MemPortWE2 1 4 }  { out_6_Din_A MemPortDIN2 1 32 }  { out_6_Dout_A MemPortDOUT2 0 32 }  { out_6_Clk_A mem_clk 1 1 }  { out_6_Rst_A mem_rst 1 1 } } }
	out_7 { bram {  { out_7_Addr_A MemPortADDR2 1 32 }  { out_7_EN_A MemPortCE2 1 1 }  { out_7_WEN_A MemPortWE2 1 4 }  { out_7_Din_A MemPortDIN2 1 32 }  { out_7_Dout_A MemPortDOUT2 0 32 }  { out_7_Clk_A mem_clk 1 1 }  { out_7_Rst_A mem_rst 1 1 } } }
	out_8 { bram {  { out_8_Addr_A MemPortADDR2 1 32 }  { out_8_EN_A MemPortCE2 1 1 }  { out_8_WEN_A MemPortWE2 1 4 }  { out_8_Din_A MemPortDIN2 1 32 }  { out_8_Dout_A MemPortDOUT2 0 32 }  { out_8_Clk_A mem_clk 1 1 }  { out_8_Rst_A mem_rst 1 1 } } }
	out_9 { bram {  { out_9_Addr_A MemPortADDR2 1 32 }  { out_9_EN_A MemPortCE2 1 1 }  { out_9_WEN_A MemPortWE2 1 4 }  { out_9_Din_A MemPortDIN2 1 32 }  { out_9_Dout_A MemPortDOUT2 0 32 }  { out_9_Clk_A mem_clk 1 1 }  { out_9_Rst_A mem_rst 1 1 } } }
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

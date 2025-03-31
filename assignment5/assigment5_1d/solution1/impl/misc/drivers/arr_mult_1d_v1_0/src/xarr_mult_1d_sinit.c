// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xarr_mult_1d.h"

extern XArr_mult_1d_Config XArr_mult_1d_ConfigTable[];

XArr_mult_1d_Config *XArr_mult_1d_LookupConfig(u16 DeviceId) {
	XArr_mult_1d_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XARR_MULT_1D_NUM_INSTANCES; Index++) {
		if (XArr_mult_1d_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XArr_mult_1d_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XArr_mult_1d_Initialize(XArr_mult_1d *InstancePtr, u16 DeviceId) {
	XArr_mult_1d_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XArr_mult_1d_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XArr_mult_1d_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif


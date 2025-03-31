// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xarr_mult_2d.h"

extern XArr_mult_2d_Config XArr_mult_2d_ConfigTable[];

XArr_mult_2d_Config *XArr_mult_2d_LookupConfig(u16 DeviceId) {
	XArr_mult_2d_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XARR_MULT_2D_NUM_INSTANCES; Index++) {
		if (XArr_mult_2d_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XArr_mult_2d_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XArr_mult_2d_Initialize(XArr_mult_2d *InstancePtr, u16 DeviceId) {
	XArr_mult_2d_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XArr_mult_2d_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XArr_mult_2d_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif


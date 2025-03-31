// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xarr_mult_2d.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XArr_mult_2d_CfgInitialize(XArr_mult_2d *InstancePtr, XArr_mult_2d_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XArr_mult_2d_Start(XArr_mult_2d *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL) & 0x80;
    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XArr_mult_2d_IsDone(XArr_mult_2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XArr_mult_2d_IsIdle(XArr_mult_2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XArr_mult_2d_IsReady(XArr_mult_2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XArr_mult_2d_EnableAutoRestart(XArr_mult_2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XArr_mult_2d_DisableAutoRestart(XArr_mult_2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_AP_CTRL, 0);
}

void XArr_mult_2d_InterruptGlobalEnable(XArr_mult_2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_GIE, 1);
}

void XArr_mult_2d_InterruptGlobalDisable(XArr_mult_2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_GIE, 0);
}

void XArr_mult_2d_InterruptEnable(XArr_mult_2d *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_IER);
    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_IER, Register | Mask);
}

void XArr_mult_2d_InterruptDisable(XArr_mult_2d *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_IER);
    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_IER, Register & (~Mask));
}

void XArr_mult_2d_InterruptClear(XArr_mult_2d *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XArr_mult_2d_WriteReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_ISR, Mask);
}

u32 XArr_mult_2d_InterruptGetEnabled(XArr_mult_2d *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_IER);
}

u32 XArr_mult_2d_InterruptGetStatus(XArr_mult_2d *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XArr_mult_2d_ReadReg(InstancePtr->Control_BaseAddress, XARR_MULT_2D_CONTROL_ADDR_ISR);
}


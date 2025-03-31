// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XARR_MULT_2D_H
#define XARR_MULT_2D_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xarr_mult_2d_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XArr_mult_2d_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XArr_mult_2d;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XArr_mult_2d_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XArr_mult_2d_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XArr_mult_2d_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XArr_mult_2d_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XArr_mult_2d_Initialize(XArr_mult_2d *InstancePtr, u16 DeviceId);
XArr_mult_2d_Config* XArr_mult_2d_LookupConfig(u16 DeviceId);
int XArr_mult_2d_CfgInitialize(XArr_mult_2d *InstancePtr, XArr_mult_2d_Config *ConfigPtr);
#else
int XArr_mult_2d_Initialize(XArr_mult_2d *InstancePtr, const char* InstanceName);
int XArr_mult_2d_Release(XArr_mult_2d *InstancePtr);
#endif

void XArr_mult_2d_Start(XArr_mult_2d *InstancePtr);
u32 XArr_mult_2d_IsDone(XArr_mult_2d *InstancePtr);
u32 XArr_mult_2d_IsIdle(XArr_mult_2d *InstancePtr);
u32 XArr_mult_2d_IsReady(XArr_mult_2d *InstancePtr);
void XArr_mult_2d_EnableAutoRestart(XArr_mult_2d *InstancePtr);
void XArr_mult_2d_DisableAutoRestart(XArr_mult_2d *InstancePtr);


void XArr_mult_2d_InterruptGlobalEnable(XArr_mult_2d *InstancePtr);
void XArr_mult_2d_InterruptGlobalDisable(XArr_mult_2d *InstancePtr);
void XArr_mult_2d_InterruptEnable(XArr_mult_2d *InstancePtr, u32 Mask);
void XArr_mult_2d_InterruptDisable(XArr_mult_2d *InstancePtr, u32 Mask);
void XArr_mult_2d_InterruptClear(XArr_mult_2d *InstancePtr, u32 Mask);
u32 XArr_mult_2d_InterruptGetEnabled(XArr_mult_2d *InstancePtr);
u32 XArr_mult_2d_InterruptGetStatus(XArr_mult_2d *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif

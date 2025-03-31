; ModuleID = '/afs/hep.wisc.edu/user/ekauffma/tachep/ekauffma_tachepfpga_assignment4-5/assignment4/assignment4_aptypes/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%struct.ap_int.0 = type { %struct.ap_int_base.1 }
%struct.ap_int_base.1 = type { %struct.ssdm_int.2 }
%struct.ssdm_int.2 = type { i12 }
%struct.ap_int.6 = type { %struct.ap_int_base.7 }
%struct.ap_int_base.7 = type { %struct.ssdm_int.8 }
%struct.ssdm_int.8 = type { i33 }
%struct.ap_int.9 = type { %struct.ap_int_base.10 }
%struct.ap_int_base.10 = type { %struct.ssdm_int.11 }
%struct.ssdm_int.11 = type { i18 }
%struct.ap_int.12 = type { %struct.ap_int_base.13 }
%struct.ap_int_base.13 = type { %struct.ssdm_int.14 }
%struct.ssdm_int.14 = type { i13 }
%struct.ap_int.3 = type { %struct.ap_int_base.4 }
%struct.ap_int_base.4 = type { %struct.ssdm_int.5 }
%struct.ssdm_int.5 = type { i22 }
%struct.ap_int = type { %struct.ap_int_base }
%struct.ap_int_base = type { %struct.ssdm_int }
%struct.ssdm_int = type { i6 }

; Function Attrs: argmemonly noinline
define void @apatb_basic_arith_array_ap_ir(%struct.ap_int* %inA, %struct.ap_int.0* %inB, %struct.ap_int.3* %inC, %struct.ap_int.6* %inD, %struct.ap_int.9* %out1, %struct.ap_int.12* %out2, %struct.ap_int.3* %out3, %struct.ap_int* %out4, i32 %size) local_unnamed_addr #0 {
entry:
  %inA_copy1 = alloca i6, align 512
  %inB_copy2 = alloca i12, align 512
  %inC_copy3 = alloca i22, align 512
  %inD_copy4 = alloca i33, align 512
  %out1_copy5 = alloca i18, align 512
  %out2_copy6 = alloca i13, align 512
  %out3_copy7 = alloca i22, align 512
  %out4_copy8 = alloca i6, align 512
  call fastcc void @copy_in(%struct.ap_int* %inA, i6* nonnull align 512 %inA_copy1, %struct.ap_int.0* %inB, i12* nonnull align 512 %inB_copy2, %struct.ap_int.3* %inC, i22* nonnull align 512 %inC_copy3, %struct.ap_int.6* %inD, i33* nonnull align 512 %inD_copy4, %struct.ap_int.9* %out1, i18* nonnull align 512 %out1_copy5, %struct.ap_int.12* %out2, i13* nonnull align 512 %out2_copy6, %struct.ap_int.3* %out3, i22* nonnull align 512 %out3_copy7, %struct.ap_int* %out4, i6* nonnull align 512 %out4_copy8)
  call void @apatb_basic_arith_array_ap_hw(i6* %inA_copy1, i12* %inB_copy2, i22* %inC_copy3, i33* %inD_copy4, i18* %out1_copy5, i13* %out2_copy6, i22* %out3_copy7, i6* %out4_copy8, i32 %size)
  call fastcc void @copy_out(%struct.ap_int* %inA, i6* nonnull align 512 %inA_copy1, %struct.ap_int.0* %inB, i12* nonnull align 512 %inB_copy2, %struct.ap_int.3* %inC, i22* nonnull align 512 %inC_copy3, %struct.ap_int.6* %inD, i33* nonnull align 512 %inD_copy4, %struct.ap_int.9* %out1, i18* nonnull align 512 %out1_copy5, %struct.ap_int.12* %out2, i13* nonnull align 512 %out2_copy6, %struct.ap_int.3* %out3, i22* nonnull align 512 %out3_copy7, %struct.ap_int* %out4, i6* nonnull align 512 %out4_copy8)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in(%struct.ap_int* readonly, i6* noalias align 512, %struct.ap_int.0* readonly, i12* noalias align 512, %struct.ap_int.3* readonly, i22* noalias align 512, %struct.ap_int.6* readonly, i33* noalias align 512, %struct.ap_int.9* readonly, i18* noalias align 512, %struct.ap_int.12* readonly, i13* noalias align 512, %struct.ap_int.3* readonly, i22* noalias align 512, %struct.ap_int* readonly, i6* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.ap_int(i6* align 512 %1, %struct.ap_int* %0)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.0.49(i12* align 512 %3, %struct.ap_int.0* %2)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.3(i22* align 512 %5, %struct.ap_int.3* %4)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.6.38(i33* align 512 %7, %struct.ap_int.6* %6)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.9(i18* align 512 %9, %struct.ap_int.9* %8)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.12.24(i13* align 512 %11, %struct.ap_int.12* %10)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.3(i22* align 512 %13, %struct.ap_int.3* %12)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int(i6* align 512 %15, %struct.ap_int* %14)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.0(%struct.ap_int.0* noalias, i12* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int.0* %0, null
  %3 = icmp eq i12* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.0, %struct.ap_int.0* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i12* %1 to i16*
  %7 = load i16, i16* %6
  %8 = trunc i16 %7 to i12
  store i12 %8, i12* %5, align 2
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.6(%struct.ap_int.6* noalias, i33* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int.6* %0, null
  %3 = icmp eq i33* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.6, %struct.ap_int.6* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i33* %1 to i40*
  %7 = load i40, i40* %6
  %8 = trunc i40 %7 to i33
  store i33 %8, i33* %5, align 8
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.9(i18* noalias align 512, %struct.ap_int.9* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i18* %0, null
  %3 = icmp eq %struct.ap_int.9* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.9, %struct.ap_int.9* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i18* %5 to i24*
  %7 = load i24, i24* %6
  %8 = trunc i24 %7 to i18
  store i18 %8, i18* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.12(%struct.ap_int.12* noalias, i13* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int.12* %0, null
  %3 = icmp eq i13* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.12, %struct.ap_int.12* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i13* %1 to i16*
  %7 = load i16, i16* %6
  %8 = trunc i16 %7 to i13
  store i13 %8, i13* %5, align 2
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out(%struct.ap_int*, i6* noalias readonly align 512, %struct.ap_int.0*, i12* noalias readonly align 512, %struct.ap_int.3*, i22* noalias readonly align 512, %struct.ap_int.6*, i33* noalias readonly align 512, %struct.ap_int.9*, i18* noalias readonly align 512, %struct.ap_int.12*, i13* noalias readonly align 512, %struct.ap_int.3*, i22* noalias readonly align 512, %struct.ap_int*, i6* noalias readonly align 512) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.11(%struct.ap_int* %0, i6* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.0(%struct.ap_int.0* %2, i12* align 512 %3)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.3.15(%struct.ap_int.3* %4, i22* align 512 %5)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.6(%struct.ap_int.6* %6, i33* align 512 %7)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.9.31(%struct.ap_int.9* %8, i18* align 512 %9)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.12(%struct.ap_int.12* %10, i13* align 512 %11)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.3.15(%struct.ap_int.3* %12, i22* align 512 %13)
  call fastcc void @onebyonecpy_hls.p0struct.ap_int.11(%struct.ap_int* %14, i6* align 512 %15)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int(i6* noalias align 512, %struct.ap_int* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i6* %0, null
  %3 = icmp eq %struct.ap_int* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int, %struct.ap_int* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i6* %5 to i8*
  %7 = load i8, i8* %6
  %8 = trunc i8 %7 to i6
  store i6 %8, i6* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.11(%struct.ap_int* noalias, i6* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int* %0, null
  %3 = icmp eq i6* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int, %struct.ap_int* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i6* %1 to i8*
  %7 = load i8, i8* %6
  %8 = trunc i8 %7 to i6
  store i6 %8, i6* %5, align 1
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.3.15(%struct.ap_int.3* noalias, i22* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int.3* %0, null
  %3 = icmp eq i22* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.3, %struct.ap_int.3* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i22* %1 to i24*
  %7 = load i24, i24* %6
  %8 = trunc i24 %7 to i22
  store i22 %8, i22* %5, align 4
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.3(i22* noalias align 512, %struct.ap_int.3* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i22* %0, null
  %3 = icmp eq %struct.ap_int.3* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.3, %struct.ap_int.3* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i22* %5 to i24*
  %7 = load i24, i24* %6
  %8 = trunc i24 %7 to i22
  store i22 %8, i22* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.12.24(i13* noalias align 512, %struct.ap_int.12* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i13* %0, null
  %3 = icmp eq %struct.ap_int.12* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.12, %struct.ap_int.12* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i13* %5 to i16*
  %7 = load i16, i16* %6
  %8 = trunc i16 %7 to i13
  store i13 %8, i13* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.9.31(%struct.ap_int.9* noalias, i18* noalias readonly align 512) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.ap_int.9* %0, null
  %3 = icmp eq i18* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.9, %struct.ap_int.9* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i18* %1 to i24*
  %7 = load i24, i24* %6
  %8 = trunc i24 %7 to i18
  store i18 %8, i18* %5, align 4
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.6.38(i33* noalias align 512, %struct.ap_int.6* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i33* %0, null
  %3 = icmp eq %struct.ap_int.6* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.6, %struct.ap_int.6* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i33* %5 to i40*
  %7 = load i40, i40* %6
  %8 = trunc i40 %7 to i33
  store i33 %8, i33* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_int.0.49(i12* noalias align 512, %struct.ap_int.0* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i12* %0, null
  %3 = icmp eq %struct.ap_int.0* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_int.0, %struct.ap_int.0* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i12* %5 to i16*
  %7 = load i16, i16* %6
  %8 = trunc i16 %7 to i12
  store i12 %8, i12* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

declare void @apatb_basic_arith_array_ap_hw(i6*, i12*, i22*, i33*, i18*, i13*, i22*, i6*, i32)

define void @basic_arith_array_ap_hw_stub_wrapper(i6*, i12*, i22*, i33*, i18*, i13*, i22*, i6*, i32) #4 {
entry:
  %9 = alloca %struct.ap_int
  %10 = alloca %struct.ap_int.0
  %11 = alloca %struct.ap_int.3
  %12 = alloca %struct.ap_int.6
  %13 = alloca %struct.ap_int.9
  %14 = alloca %struct.ap_int.12
  %15 = alloca %struct.ap_int.3
  %16 = alloca %struct.ap_int
  call void @copy_out(%struct.ap_int* %9, i6* %0, %struct.ap_int.0* %10, i12* %1, %struct.ap_int.3* %11, i22* %2, %struct.ap_int.6* %12, i33* %3, %struct.ap_int.9* %13, i18* %4, %struct.ap_int.12* %14, i13* %5, %struct.ap_int.3* %15, i22* %6, %struct.ap_int* %16, i6* %7)
  call void @basic_arith_array_ap_hw_stub(%struct.ap_int* %9, %struct.ap_int.0* %10, %struct.ap_int.3* %11, %struct.ap_int.6* %12, %struct.ap_int.9* %13, %struct.ap_int.12* %14, %struct.ap_int.3* %15, %struct.ap_int* %16, i32 %8)
  call void @copy_in(%struct.ap_int* %9, i6* %0, %struct.ap_int.0* %10, i12* %1, %struct.ap_int.3* %11, i22* %2, %struct.ap_int.6* %12, i33* %3, %struct.ap_int.9* %13, i18* %4, %struct.ap_int.12* %14, i13* %5, %struct.ap_int.3* %15, i22* %6, %struct.ap_int* %16, i6* %7)
  ret void
}

declare void @basic_arith_array_ap_hw_stub(%struct.ap_int*, %struct.ap_int.0*, %struct.ap_int.3*, %struct.ap_int.6*, %struct.ap_int.9*, %struct.ap_int.12*, %struct.ap_int.3*, %struct.ap_int*, i32)

attributes #0 = { argmemonly noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline "fpga.wrapper.func"="copyout" }
attributes #4 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}

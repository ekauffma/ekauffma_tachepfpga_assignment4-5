#include "basic_arith_array_ap.h"

void basic_arith_array_ap(
    dinA_t inA[],
    dinB_t inB[],
    dinC_t inC[],
    dinD_t inD[],
    dout1_t out1[],
    dout2_t out2[],
    dout3_t out3[],
    dout4_t out4[],
    int size) {

    for(size_t i=0; i<size; i++) {
        #pragma HLS loop_tripcount min=1 max=ARRAY_SIZE
        out1[i] = inA[i] * inB[i];
        out2[i] = inB[i] + inA[i];
        out3[i] = inC[i] / inA[i];
        out4[i] = inD[i] % inA[i];
    }
}

#include "arr_mult_2d.h"

void arr_mult_2d(
    din_t inA[ROW_SIZE_A][SIZE_INTER],
    din_t inB[SIZE_INTER][COL_SIZE_B],
    dout_t out[ROW_SIZE_A][COL_SIZE_B]
) {
    #pragma HLS INTERFACE m_axi port=inA depth=1024
    #pragma HLS INTERFACE m_axi port=inB depth=1024
    #pragma HLS INTERFACE m_axi port=out depth=1024
    #pragma HLS INTERFACE s_axilite port=return
    #pragma HLS ARRAY_PARTITION variable=inA complete dim=2
    #pragma HLS ARRAY_PARTITION variable=inB complete dim=2
    #pragma HLS ARRAY_PARTITION variable=out complete dim=2

    ap_uint<10> result = 0;

    for (ap_uint<10> i = 0; i < ROW_SIZE_A; i++) {
        for (ap_uint<10> j = 0; j < COL_SIZE_B; j++) {
            for (ap_uint<10> k = 0; k < SIZE_INTER; k++) {
                result += inA[i][k] * inB[k][j]
            } 
            out[i][j] = result;
            result = 0;
        } 
    }
}

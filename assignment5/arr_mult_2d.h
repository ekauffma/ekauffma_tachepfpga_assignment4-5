#ifndef _ARR_MULT_2D_H_
#define _ARR_MULT_2D_H_

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define ROW_SIZE_A 20;
#define SIZE_INTER 24;
#define COL_SIZE_B 10;

typedef ap_int<22> din_t;
typedef ap_int<22> dout_t;

void arr_mult_2d(
    din_t inA[ROW_SIZE_A][SIZE_INTER],
    din_t inB[SIZE_INTER][COL_SIZE_B],
    dout_t out[ROW_SIZE_A][COL_SIZE_B]
);

#endif

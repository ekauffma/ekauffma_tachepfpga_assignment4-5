#include <cstdlib>
#include "basic_arith_array.h"

int main() {
    dinA_t inA[ARRAY_SIZE];
    dinB_t inB[ARRAY_SIZE];
    dinC_t inC[ARRAY_SIZE];
    dinD_t inD[ARRAY_SIZE];

    dout1_t out1[ARRAY_SIZE]
    dout2_t out2[ARRAY_SIZE]
    dout3_t out3[ARRAY_SIZE]
    dout4_t out4[ARRAY_SIZE]

    dout1_t out1_ref = 0;
    dout2_t out2_ref = 0;
    dout3_t out3_ref = 0;
    dout4_t out4_ref = 0;

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        inA[i] = i+2;
        inB[i] = (i+1)*4;
        inC[i] = (i+2)*3;
        inD[i] = i%5;
    }

    // make output reference file
    fref = fopen("result_basic_arith_arr_ref.dat", "w");
    for (size_t j = 0; j < ARRAY_SIZE; j++) {
        out1_ref = inA[j] * inB[j];
        out2_ref = inB[j] + inA[j];
        out3_ref = inC[j] / inA[j];
        out3_ref = inD[j] % inA[j];
        fprintf(
            fref, "%d*%d=%d; %d+%d=%d; %d/%d=%d; %d mod %d=%d;\n",
            inA[j], inB[j], out1_ref, 
            inB[j], inA[j], out2_ref,
            inC[j], inA[j], out3_ref,
            inD[j], inA[j], out4_ref
        );
    }
    fclose(fref);

    // fpga function call
    basic_arith_array(inA, inB, inC, inD, out1, out2, out3, out4, ARRAY_SIZE);
   
    fres = fopen("result_basic_arith_arr.dat", "w");
    for (size_t k = 0; k < ARRAY_SIZE; k++) {
        fprintf(
            fres, "%d*%d=%d; %d+%d=%d; %d/%d=%d; %d mod %d=%d;\n",
            inA[k], inB[k], out1[k], 
            inB[k], inA[k], out2[k],
            inC[k], inA[k], out3[k],
            inD[k], inA[k], out4[k]
        );
    }
    fclose(fres);

    // Compare the results file with the reference file
    retval = system("diff --brief -w result_basic_arith_array.dat result_basic_arith_array_ref.dat");
    if (retval != 0) {
        printf("Test failed  !!!\n");
        retval = 1;
    } else {
        printf("Test passed !\n");
    }

    // Return 0 if the test passes
    return retval;
}

#include <cstdlib>
#include "basic_arith_array_ap.h"

int main() {
    dinA_t inA[ARRAY_SIZE];
    dinB_t inB[ARRAY_SIZE];
    dinC_t inC[ARRAY_SIZE];
    dinD_t inD[ARRAY_SIZE];

    dout1_t out1[ARRAY_SIZE];
    dout2_t out2[ARRAY_SIZE];
    dout3_t out3[ARRAY_SIZE];
    dout4_t out4[ARRAY_SIZE];

    dout1_t out1_ref = 0;
    dout2_t out2_ref = 0;
    dout3_t out3_ref = 0;
    dout4_t out4_ref = 0;

    int retval = 0;

    FILE *fref, *fres;

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        inA[i] = i+2;
        inB[i] = (i+1)*4;
        inC[i] = (i+2)*3;
        inD[i] = i%5;
    }

    // make output reference file
    fref = fopen("result_basic_arith_array_ap_ref.dat", "w");
    for (size_t j = 0; j < ARRAY_SIZE; j++) {
        out1_ref = inA[j] * inB[j];
        out2_ref = inB[j] + inA[j];
        out3_ref = inC[j] / inA[j];
        out4_ref = inD[j] % inA[j];
        fprintf(
            fref, "%d*%d=%d; %d+%d=%d; %d/%d=%d; %d mod %d=%d;\n",
            inA[j].to_int(), inB[j].to_int(), out1_ref.to_int(), 
            inB[j].to_int(), inA[j].to_int(), out2_ref.to_int(),
            inC[j].to_int(), inA[j].to_int(), out3_ref.to_int(),
            inD[j].to_int(), inA[j].to_int(), out4_ref.to_int()
        );
    }
    fclose(fref);

    // fpga function call
    basic_arith_array_ap(inA, inB, inC, inD, out1, out2, out3, out4, ARRAY_SIZE);
   
    fres = fopen("result_basic_arith_array_ap.dat", "w");
    for (size_t k = 0; k < ARRAY_SIZE; k++) {
        fprintf(
            fres, "%d*%d=%d; %d+%d=%d; %d/%d=%d; %d mod %d=%d;\n",
            inA[k].to_int(), inB[k].to_int(), out1[k].to_int(), 
            inB[k].to_int(), inA[k].to_int(), out2[k].to_int(),
            inC[k].to_int(), inA[k].to_int(), out3[k].to_int(),
            inD[k].to_int(), inA[k].to_int(), out4[k].to_int()
        );
    }
    fclose(fres);

    // Compare the results file with the reference file
    retval = system("diff --brief -w result_basic_arith_array_ap.dat result_basic_arith_array_ap_ref.dat");
    if (retval != 0) {
        printf("Test failed  !!!\n");
        retval = 1;
    } else {
        printf("Test passed !\n");
    }

    // Return 0 if the test passes
    return retval;
}

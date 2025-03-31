#include <cstdlib>
#include "arr_mult_2d.h"

int main() {
    din_t inA[ROW_SIZE_A][SIZE_INTER];
    din_t inB[SIZE_INTER][COL_SIZE_B];
    dout_t out[ROW_SIZE_A][COL_SIZE_B];

    int retval = 0;

    FILE *fref, *fres;

    // make output reference file
    fref = fopen("arr_mult_2d_ref.dat", "w");

    for(size_t i = 0; i < ROW_SIZE_A; i++) {
        for(size_t j = 0; j < COL_SIZE_B; j++) {
            size_t result = 0;
            for(size_t k = 0; k < SIZE_INTER; k++) {
                inA[i][k] = (i+k) % 4;
                inB[k][j] = (j+k) % 2;
                result += inA[i][k] * inB[k][j];
            }
            fprintf(fref, "out[%d][%d]=%d;\n", i, j, result);
        }
    }
    fclose(fref);

    arr_mult_2d(inA, inB, out);

    fres = fopen("arr_mult_2d.dat", "w");

    for(size_t i = 0; i < ROW_SIZE_A; i++) {
        for(size_t j = 0; j < COL_SIZE_B; j++) {
            fprintf(fres, "out[%d][%d]=%d;\n", i, j, out[i][j].to_int());
        }
    }
    fclose(fref);

    // Compare the results file with the reference file
    retval = system("diff --brief -w arr_mult_2d.dat arr_mult_2d_ref.dat");
    if (retval != 0) {
        printf("Test failed  !!!\n");
        retval = 1;
    } else {
        printf("Test passed !\n");
    }

    // Return 0 if the test passes
    return retval;
}

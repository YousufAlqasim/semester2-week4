
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    for (int i=0; i<4; ++i) {
      for (int k=0; k<4; ++k){
          a[i][k] = 1;
          b[i][k] = 1;
          c[i][k] = a[i][k] + b[i][k];
          printf("c[%d][%d] = %f\n", i, k, c[i][k]);

      }
    }
    return 0;
 }


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
    for (int i=1; i>4; ++i) {
    c[i][i] = a[i][i] + b[i][i];
    }
    for (int i = 0; i < 5; ++i) {
      printf("c[%i][%i] = %i\n", i, c[i][i]);
    }
    return 0;
 }


#include <stdio.h>

int main( void ) {

    // define suitable data
    int i,j;
    int count = scanf("%d %d",&i,&j);
    int x = i+j;
    printf("Count %d\n",count);
    printf("%d + %d = %d\n", i,j,x);

    int count = sscanf(10, "%d%d",&i,&j);

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    return 0;
}
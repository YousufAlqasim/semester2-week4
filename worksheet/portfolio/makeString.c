
/*
Name: Yousuf Alqasim
Student ID: 201985816
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
        char buffer[50] = "";
    for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);

    // add '-' between arguments
        if (i < argc - 1) {
            strcat(buffer, "-");}
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}
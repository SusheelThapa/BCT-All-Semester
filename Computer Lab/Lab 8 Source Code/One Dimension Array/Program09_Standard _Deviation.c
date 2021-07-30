/*Program to compute standard deviation*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5 /*Defining a constant*/

#include "../Array.c"/*External file which have function to do operations in one d array*/

int main()
{
    /*Variable declaration*/
    int input[ARRAY_LENGTH];
    float sd;

    /*Calling function to take input*/
    inputOneDArray(input, ARRAY_LENGTH);

    system("cls");

    /*Calling function to calculate Standard Deviation*/
    sd = sdOneDArray(input, ARRAY_LENGTH);

    /*Printing the result*/
    printf("Standard Deviation is %f\n", sd);

    getch();
    return 0;
}
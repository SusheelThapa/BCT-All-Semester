/*Program to compute standard deviation*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5 /*Defining constant*/

#include "../Array.c" /*External files that contain function to do operation in one d array*/

int main()
{
    /*Variable Declaration*/
    float variance;
    int input[10];

    /*Calling function to take input*/
    inputOneDArray(input, ARRAY_LENGTH);

    system("cls");

    /*Calling function to calculated variance*/
    variance = varianceOneDArray(input, ARRAY_LENGTH);

    /*Printing result*/
    printf("Variance is %.2f", variance);

    getch();
    return 0;
}
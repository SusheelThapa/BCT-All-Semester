/*Program to compute range of one d array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 8 /*Defining constant*/

#include "../Array.c" /*External files that helps to do operation in one d array*/

int main()
{
    /*Variable declaration*/
    int input[ARRAY_LENGTH], small, large, range;

    /*Taking input from user*/
    inputOneDArray(input, ARRAY_LENGTH);

    /*Function call to find smallest value and storing value in small*/
    small = smallOneDArray(input, ARRAY_LENGTH);

    /*Function call to find largest value and storing value in large*/
    large = largeOneDArray(input, ARRAY_LENGTH);

    /*Calculating range*/
    range = (large - small);

    /*Printing result*/
    printf("Range of given data is %d", range);

    getch();
    return 0;
}
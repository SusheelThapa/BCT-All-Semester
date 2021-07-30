/*Program to compute median of number in array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 9 /*Defining a constant used in variable*/

#include "../Array.c" /*External files that help to do operation in one d array*/

int main()
{
    /*Array declartion*/
    int median[ARRAY_LENGTH];

    system("cls");

    /*Function call to take value of array from user*/
    inputOneDArray(median, ARRAY_LENGTH);

    /*Function call to sort the array in ascending order*/
    sortOneDArrayAscend(median, ARRAY_LENGTH);

    /*Function call to find the median of number present in the array and print the value of median*/
    printf("The median of array provided is %.2f.", medianOneDArray(median, ARRAY_LENGTH));

    getch();
    return 0;
}
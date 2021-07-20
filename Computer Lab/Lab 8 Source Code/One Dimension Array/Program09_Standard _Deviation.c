/*Program to compute standard deviation*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5

#include "../Array.c"

int main()
{
    int input[ARRAY_LENGTH];
    float sd;

    inputOneDArray(input, ARRAY_LENGTH);

    system("cls");

    sd = sdOneDArray(input, ARRAY_LENGTH);

    printf("Standard Deviation is %f\n", sd);

    getch();
    return 0;
}
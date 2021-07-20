/*Program to compute range of one d array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 8

#include "../Array.c"

int main()
{
    int input[ARRAY_LENGTH], small, large, range;

    inputOneDArray(input, ARRAY_LENGTH);

    small = smallOneDArray(input, ARRAY_LENGTH);

    large = largeOneDArray(input, ARRAY_LENGTH);

    range = (large - small);

    printf("Range of given data is %d", range);

    getch();
    return 0;
}
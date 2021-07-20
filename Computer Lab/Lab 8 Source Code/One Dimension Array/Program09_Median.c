/*Program to compute median of number in array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 9

#include "../Array.c"

int main()
{
    int median[ARRAY_LENGTH];

    system("cls");

    inputOneDArray(median, ARRAY_LENGTH);

    sortOneDArrayAscend(median, ARRAY_LENGTH);

    printf("The median of array provided is %.2f.", medianOneDArray(median, ARRAY_LENGTH));

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5

#include "../Array.c"
int main()
{
    float variance;
    int input[10];

    inputOneDArray(input, ARRAY_LENGTH);

    system("cls");

    variance = varianceOneDArray(input, ARRAY_LENGTH);

    printf("Variance is %.2f", variance);

    getch();
    return 0;
}
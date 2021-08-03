#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_LENGTH 5

int main()
{
    int input[ARRAY_LENGTH], *ptr_input, sum = 0;
    float sd, diverse, mean = 0.0;

    ptr_input = &input[0];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", (ptr_input + i));
    }

    system("cls");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        sum = sum + *(ptr_input + i);
    }
    mean = sum / (float)ARRAY_LENGTH;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        diverse = (mean - *(ptr_input + i)) * (mean - *(ptr_input + i)) + diverse;
    }

    sd = pow(diverse / ARRAY_LENGTH, 0.5);

    printf("Standard Deviation is %f\n", sd);

    getch();
    return 0;
}
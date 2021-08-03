#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5

int main()
{
    float variance;
    int input[10];
    float mean = 0.0;
    int sum = 0;

    int *ptr_input;

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
        variance = (mean - *(ptr_input + i)) * (mean - *(ptr_input + i)) + variance;
    }

    variance = variance / ARRAY_LENGTH;
    printf("Variance is %.2f", variance);

    getch();
    return 0;
}
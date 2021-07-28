/*Program to compute range of one d array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 8

int main()
{
    int input[ARRAY_LENGTH], small, large, range;
    int *ptr_input;

    ptr_input = &input[0];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", (ptr_input + i));
    }

    small = *(ptr_input);
    large = *(ptr_input);

    for (int i = 1; i < ARRAY_LENGTH; i++)
    {
        if (small > *(ptr_input + i))
        {
            small = *(ptr_input + i);
            printf("small = %d\n", small);
        }
    }

    for (int i = 1; i < ARRAY_LENGTH; i++)
    {
        if (large < *(ptr_input + i))
        {
            large = *(ptr_input + i);
        }
    }
    printf("large = %d\n", large);

    range = (large - small);

    printf("Range of given data is %d", range);

    getch();
    return 0;
}
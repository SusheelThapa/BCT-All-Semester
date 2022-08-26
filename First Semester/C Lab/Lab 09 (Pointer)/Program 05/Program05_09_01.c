
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 9

int main()
{
    int median[ARRAY_LENGTH];
    int *ptr_median;
    float result;

    ptr_median = &median[0];

    system("cls");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", (ptr_median + i));
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        for (int j = 0; j < ARRAY_LENGTH; j++)
        {
            if (*(ptr_median + i) < *(ptr_median + j))
            {
                *(ptr_median + i) = *(ptr_median + i) + *(ptr_median + j) - (*(ptr_median + j) = *(ptr_median + i));
            }
        }
    }

    float position_of_array = (ARRAY_LENGTH + 1) / 2.0;

    if (position_of_array - (int)position_of_array == 0.0)
    {
        result = *(ptr_median + (int)position_of_array - 1);
    }
    else
    {
        result = *(ptr_median + (int)position_of_array) + *(ptr_median + (int)position_of_array - 1) / 2.0;
    }
    printf("The median of array provided is %.2f.", result);

    getch();
    return 0;
}
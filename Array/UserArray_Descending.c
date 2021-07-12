/*
Sorting the element of array in descending order
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Array Creation*/
    int number_array[10];
    int sorted_array[10];

    system("cls");

    /*Taking input for array*/
    for (int i = 0; i < 10; i++)
    {
        printf("Value of %d element: ", i + 1);
        scanf("%d", &number_array[i]);
    }

    printf("\n<----------------------------->");
    /*Listing the value of array*/
    printf("\nValue in array: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", number_array[i]);
    }

    //Sorted Array
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (number_array[i] > number_array[j])
            {
                int temp = number_array[i];
                number_array[i] = number_array[j];
                number_array[j] = temp;
            }
        }
    }
    printf("\n<----------------------------->");

    printf("\nSorted Array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", number_array[i]);
    }

    getch();
    return 0;
}
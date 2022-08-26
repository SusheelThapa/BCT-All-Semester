/*
Pass a One D Array to function and sort it descending
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void input(int array[], int length)
{
    "Takes input from the user";

    for (int i = 0; i < length; i++)
    {
        printf("Value of %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void display(int array[], int length)
{
    "Display the provided One D Array";

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

void sort(int array[], int length)
{
    "Sorts the array in descending order";

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nAfter Sorting\n");
    display(array, length);
}

int main()
{
    int numbers[100], length;

    system("cls");

    printf("Size of array: ");
    scanf("%d", &length);

    input(numbers, length);

    printf("Before sorting:\n");
    display(numbers, length);

    sort(numbers, length);

    getch();
    return 0;
}

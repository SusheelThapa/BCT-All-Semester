/*Write a program to read the element of array in main() pass it to fucntion to sort the array in ascending/descending order. Display the sorted array from main().*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sortArray(int num[], char sort[5])
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (strcmp(sort, "Ascend") == 0)
            {
                if (num[i] > num[j])
                {
                }
                else
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
            else if (strcmp(sort, "Descend") == 0)
            {
                if (num[i] < num[j])
                {
                }
                else
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
    }
}

int main()
{
    int i, num[5], lowest, highest;

    system("cls");

    printf("Enter the members of array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &num[i]);
    }

    sortArray(num, "Ascend");
    printf("\nSorted in Ascending Order: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    sortArray(num, "Descend");
    printf("\n\nSorted in Descending Order: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    getch();
    return 0;
}
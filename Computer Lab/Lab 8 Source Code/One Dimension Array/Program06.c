/*Write a program to read the element of array in main() pass it to fucntion to sort the array in ascending/descending order. Display the sorted array from main().*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sortArray(int num[], char sort[5])
{
    "Sort the array in ascending or descending order based on second argument passed by user. Here, we use bubble sort algorithm.";

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
    /*Declaration of variable*/
    int i, num[5], lowest, highest;

    system("cls");

    /*Taking input from the user*/
    printf("Enter the members of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &num[i]);
    }

    sortArray(num, "Ascend"); /*Function call(pass by refrence) to sort array ascending order*/

    /*Printing the sorted array*/
    printf("\nSorted in Ascending Order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    sortArray(num, "Descend"); /*Function call(pass by refrence) to sort array descending order*/

    /*Printing the sorted array*/
    printf("\n\nSorted in Descending Order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    getch();
    return 0;
}
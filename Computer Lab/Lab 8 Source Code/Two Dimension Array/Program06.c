/*Write a program to read the members of 3X3 array in main(). Pass the array to function that finds the sum of diagnol elements and returns to main(). Display the returned values*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int diagnolSum(int num[3][3])
{
    "Calculates the sum of elements of diagnol elements";

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (i == j) ? (sum = sum + num[i][j]) : (sum = sum);
        }
    }
    
    return sum;
}

int main()
{
    int i, num[3][3], lowest, highest;

    system("cls");

    printf("Enter the members of array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("Sum of diagnol elements is %d", diagnolSum(num));
}
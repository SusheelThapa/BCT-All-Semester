/*Write a program to find the sum of individual rows of two dimensional array and assign them to a one dimensional array and display the content of the two dimensional array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int sum, numSum[10], num[10][10];
    system("cls");

    printf("Enter the members of array: ");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            num[i][j] = (i) * 10 + (j);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        sum = 0;
        for (int j = 0; j < 10; j++)
        {
            sum = sum + num[i][j];
        }
        numSum[i] = sum;
    }

    printf("Two Array: \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", num[i][j]);
        }
        printf("\n");
    }

    printf("\nSum Array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numSum[i]);
    }
    getch();
    return 0;
}
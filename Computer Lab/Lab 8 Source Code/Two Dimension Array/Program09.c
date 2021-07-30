/*Write a program to find the sum of individual rows of two dimensional array and assign them to a one dimensional array and display the content of the two dimensional array*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int sum, numSum[10], num[10][10];

    system("cls");

    /*Createa array with out own logic*/
    printf("Enter the members of array: ");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            num[i][j] = (i)*10 + (j);
        }
    }

    /*Calculating the sum of element of row and storing it in a one d array*/
    for (int i = 0; i < 10; i++)
    {
        sum = 0;
        for (int j = 0; j < 10; j++)
        {
            sum = sum + num[i][j];
        }
        numSum[i] = sum;
    }

    /*Printing the two d array*/
    printf("Two D Array: \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", num[i][j]);
        }
        printf("\n");
    }

    /*Printing the one d array which contain sum of elements of row*/
    printf("\nSum Array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numSum[i]);
    }
    getch();
    return 0;
}
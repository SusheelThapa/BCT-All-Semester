/*Write a progam to find the highest or lowest elements of an array of size 3X3*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable Declaration*/
    int i, num[3][3], lowest, highest;

    system("cls");

    /*Taking input from user*/
    printf("Enter the members of array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    /*Initialization of lowest and highest*/
    lowest = num[0][0];
    highest = num[0][0];

    /*Iterate over every element and find the highest and lowest storing into a variable*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (lowest < num[i][j]) ? (lowest = lowest) : (lowest = num[i][j]);
            (highest > num[i][j]) ? (highest = highest) : (highest = num[i][j]);
        }
    }

    /*Prints the result*/
    printf("\nHighest Number is %d", highest);
    printf("\n\nLowest Number is %d", lowest);

    getch();
    return 0;
}
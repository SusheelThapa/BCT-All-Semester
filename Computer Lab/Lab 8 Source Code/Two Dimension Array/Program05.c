/*Write a progam to find the highest or lowest elements of an array of size 3X3*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[3][3], lowest, highest;

    system("cls");

    printf("Enter the members of array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    lowest = num[0][0];
    highest = num[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (lowest < num[i][j]) ? (lowest = lowest) : (lowest = num[i][j]);
            (highest > num[i][j]) ? (highest = highest) : (highest = num[i][j]);
        }
    }

    printf("Highest Number is %d", highest);
    printf("Lowest Number is %d", lowest);

    getch();
    return 0;
}
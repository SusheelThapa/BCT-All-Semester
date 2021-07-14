/*Write a program to raise the power fo elements by 5*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int powerOfNumber(int base, int power)
{
    int value = 1;
    for (int i = 1; i <= power; i++)
    {
        value = base * value;
    }
    return value;
}

int main()
{
    int i, num[3][3];

    system("cls");

    /*Input*/
    printf("Enter the members of array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    /*Raising power*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            num[i][j] = powerOfNumber(num[i][j], 5);
        }
    }

    /*New Array*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
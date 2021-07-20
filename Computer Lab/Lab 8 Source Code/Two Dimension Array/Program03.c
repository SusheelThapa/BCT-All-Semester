/*Write a program find the sum of elements of an integers array of size 5 that are divisible by 10 not by 15*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[3][3], sum = 0;

    system("cls");

    printf("Enter the members of array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (num[i][j] % 7 == 0 && num[i][j] % 5 != 0) ? (sum = num[i][j] + sum) : (sum = sum);
        }
    }

    printf("The sum of number present in the array divisible by 7 not by 5 is %d", sum);

    getch();
    return 0;
}
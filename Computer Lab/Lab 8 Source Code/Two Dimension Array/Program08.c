/*Write program to generate a matrix of size 4 * 4 whose elements are given by the expression a(i,j) = 4^(-1(i+j))*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float powerOfNumber(float base, float power)
{
    float value = 1;
    for (float i = 1; i <= power; i++)
    {
        value = base * value;
    }
    return value;
}

float main()
{
    float num[4][4];

    system("cls");

    /*Raising power*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            num[i][j] = powerOfNumber(3, -(i + j + 2));
        }
    }

    /*New Array*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f ", num[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
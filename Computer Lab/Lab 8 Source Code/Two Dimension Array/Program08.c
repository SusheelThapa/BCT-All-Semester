/*Write program to generate a matrix of size 4 * 4 whose elements are given by the expression a(i,j) = 4^(-1(i+j))*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num[4][4];

    system("cls");

    /*Raising power*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            num[i][j] = pow(4,-1*(i+j+2));
        }
    }

    /*New Array*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.4f ", num[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int i, j, num[3][3];

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
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    getch();
}
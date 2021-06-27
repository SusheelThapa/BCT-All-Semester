/*
    N   
    E   E   
    P   P   P   
    A   A   A   A   
    L   L   L   L   L
    */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf("Sequence is :\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // printf("adfbavuerh");
            if (i == 1)
            {
                printf("N ");
            }
            else if (i == 2)
            {
                printf("E ");
            }
            else if (i == 3)
            {
                printf("P ");
            }
            else if (i == 4)
            {
                printf("A ");
            }
            else if (i == 5)
            {
                printf("L ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
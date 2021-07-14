#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    int i, num[6] = {4, 5, 3, 2, 12,8};

    system("cls");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }

    getch();
}
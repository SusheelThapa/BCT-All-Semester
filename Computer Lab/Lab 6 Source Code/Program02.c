/*Write a program to display the chessboard pattern.*/
/*Use \xdb for whiteand " " for black*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    printf("\t\tChessBoard\n\n");
    for (int i = 1; i <= 8; i++)
    {
        printf("\t\t");
        for (int j = 1; j <= 8; j++)
        {
            if ((i+j)%2==0)
            {
                printf(" ");
            }
            else
            {
                printf("\xdb");
            }
        }
            printf("\n");
    }
    getch();
    return 0;
}
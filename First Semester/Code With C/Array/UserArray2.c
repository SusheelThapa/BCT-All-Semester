/*
Input 2 dimensional array and display it
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int row, col, a[100][100];

    system("cls");

    printf("Row:");
    scanf("%d", &row);

    printf("Columns:");
    scanf("%d", &col);

    printf("Enter the element of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is : \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
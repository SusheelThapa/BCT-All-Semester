/*
WAP to perform transpose of a matrix of size mXn using a function named transpose
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void transpose(int matrix[][10], int rows, int cols)
{
    "Transpose the given matrix";

    int transpose[cols][rows];

    /*Store the transpose value in a new matrix*/
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    /*Copy the tranposed value to orginal matrix*/
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            matrix[i][j] = transpose[i][j];
        }
    }
}

int main()
{
    int matrix[10][10], rows, cols;

    system("cls");

    printf("Rows: \n");
    scanf("%d", &rows);
    printf("Columns: \n");
    scanf("%d", &cols);

    /*Taking Input*/
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of elements in %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    /*Printing Matrix*/
    printf("\nOrginal Matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    /*Calling Function*/
    transpose(matrix, rows, cols);

    /*Printing the transpose value*/
    printf("\nTranspose Matrix: \n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
/*
WAP to read two matrix A and matrix B of size mXn.Pass it to a function named add.This function should add all the corresponding elements of the matrices and display the result.You should give appropriate message to the user if addition of two matrix is not possible.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void takeInput(int array[][10], int cols, int rows)
{
    "Reads matrix value from user";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of element in %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}

void addMatrices(int matrix_one[][10], int matrix_two[][10], int matrix_sum[][10], int rows, int cols)
{
    "Add two matrices.. ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix_sum[i][j] = matrix_one[i][j] + matrix_two[i][j];
        }
    }
}

void displayMatrices(int matrix[][10], int rows, int cols)
{
    "Display the matrices...";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix_one[10][10], matrix_two[10][10], matrix_sum[10][10];
    int cols_one, rows_one, cols_two, rows_two;

    system("cls");

    /*Taking value of Matrix One*/
    printf("Reading Matrix One: \n");
    printf("Rows: ");
    scanf("%d", &rows_one);
    printf("Cols: ");
    scanf("%d", &cols_one);
    takeInput(matrix_one, rows_one, cols_one);

    /*Taking value of Matrix Two*/
    printf("Reading Matrix Two: \n");
    printf("Rows: ");
    scanf("%d", &rows_two);
    printf("Cols: ");
    scanf("%d", &cols_two);
    takeInput(matrix_two, rows_two, cols_two);

    /*Adding two Matrices if condition match*/
    if (rows_one == rows_two && cols_one == cols_two)
    {
        printf("Adding Two Matrices...\n");
        addMatrices(matrix_one, matrix_two, matrix_sum, rows_one, cols_one);
        displayMatrices(matrix_sum, rows_one, cols_one);
    }
    else
    {
        printf("\nMatrices of different order cannot be added");
    }

    getch();
    return 0;
}
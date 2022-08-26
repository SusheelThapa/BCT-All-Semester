/*WAP to read matrix A and matrix B of size mXn using a function called read_matrix. Pass it to a function named process_matrix. This function should perform the multiplication of the matrices and display the result using display_matrix. You should give appropriate message to the user if multiplication of two matrix is not possible.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void readMatrix(int array[][100], int cols, int rows)
{
    "Reads matrix value from user...";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of element in %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    system("cls");
}

void processMatrix(int matrix_one[][100], int matrix_two[][100], int matrix_result[][100], int rows, int common, int cols)
{
    "Multiply two matrices...";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix_result[i][j] = 0;
            for (int k = 0; k < common; k++)
            {
                matrix_result[i][j] += matrix_one[i][k] * matrix_two[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols)
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
    int matrix_one[100][100], matrix_two[100][100], matrix_multi[100][100];
    int cols_one, rows_one, cols_two, rows_two;

    system("cls");

    /*Taking value of Matrix One*/
    printf("Reading Matrix One: \n");
    printf("Rows: ");
    scanf("%d", &rows_one);
    printf("Cols: ");
    scanf("%d", &cols_one);
    readMatrix(matrix_one, rows_one, cols_one);

    /*Taking value of Matrix Two*/
    printf("Reading Matrix Two: \n");
    printf("Rows: ");
    scanf("%d", &rows_two);
    printf("Cols: ");
    scanf("%d", &cols_two);
    readMatrix(matrix_two, rows_two, cols_two);

    if (cols_one == rows_two)
    {
        processMatrix(matrix_one, matrix_two, matrix_multi, rows_one, cols_one, cols_two);
        displayMatrix(matrix_multi, rows_one, cols_two);
    }
    else if (cols_two == rows_one)
    {
        processMatrix(matrix_two, matrix_one, matrix_multi, rows_two, cols_two, cols_one);
        displayMatrix(matrix_multi, rows_two, cols_one);
    }
    else
    {
        printf("\nIt cannot be multiplied.");
    }

    getch();
    return 0;
}
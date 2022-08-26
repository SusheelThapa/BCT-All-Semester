/*
WAP to read a matrix A of size mXn. Pass it to a
return type function. This function should add all the
elements of the matrix and display the result in
main.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sumELementOfMatrix(int matrix[][10], int rows, int cols)
{
    "Calculates the sum of elements present in the array";

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    return sum;
}

int main()
{
    int array[10][10];
    int cols, rows;

    system("cls");

    printf("Rows:\n");
    scanf("%d", &rows);
    printf("Columns:\n");
    scanf("%d", &cols);

    printf("Reading Matrix..\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of elements in %d row and %d columns: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("The sum of element in matrix is %d", sumELementOfMatrix(array, rows, cols));

    getch();
    return 0;
}

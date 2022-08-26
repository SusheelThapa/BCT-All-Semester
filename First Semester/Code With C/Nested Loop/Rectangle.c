/*
    Program to print solid  rectangle star pattern. 
    Given the number of rows and columns, print the solid rectangle star patterns.
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    Question Meaning:
        Solid rectangular star pattern:
            Number of rows: 3
            Number of columns: 5

                * * * * *
                * * * * *
                * * * * *

    It just playing with loop study

    You can figure out code yourself
*/
int main()
{
    /*Varaible Declaration*/
    int row, column;

    system("cls"); /*Clear the terminal screen*/

    /*Getting user input */
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the column: ");
    scanf("%d", &column);

    system("cls");/*Clear the terminal output*/

    printf("Rectangular Pattern:\n\n"); /*Tittle in output screen*/
    printf("Rows: %d\n", row); /*Printing the row*/
    printf("Columns: %d\n\n", column); /*Printing the columns*/

    /*Looping for printing pattern*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("      *");
        }
        printf("\n");
    }
    getch();
    return 0;
}
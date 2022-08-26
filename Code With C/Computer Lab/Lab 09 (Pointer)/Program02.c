/*
WAP to find the larger of two number using concept of function and pointer. Here pass two numbers function from main() to a function that finds the larger. Display the larger one from  the main() function without return statement.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void largest(int a, int b, int *large)
{
    "Store the larges value in large variable";

    (a > b) ? (*large = a) : (*large = b);
}

int main()
{
    /*Variable Declaration*/
    int number_one, number_two, large;

    system("cls");

    /*Taking input from user*/
    printf("Number One: ");
    scanf("%d", &number_one);
    printf("Number Two: ");
    scanf("%d", &number_two);

    /*Function call to find largest and store it in variable*/
    largest(number_one, number_two, &large);

    /*Printing the result*/
    printf("Largest number is %d", large);

    getch();
    return 0;
}
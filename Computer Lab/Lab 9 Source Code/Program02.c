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
    int number_one, number_two, large;
    system("cls");

    printf("Number One: ");
    scanf("%d", &number_one);
    printf("Number Two: ");
    scanf("%d", &number_two);

    largest(number_one, number_two, &large);

    printf("Largest number is %d", large);

    getch();
    return 0;
}
/*Factorial of n by recursive function*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Fucntion definition and declaration*/
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    /*Variable Declaration*/
    int number;

    system("cls");/*Clear the screen*/

    /*Taking input from user*/
    printf("Number: ");
    scanf("%d", &number);

    /*Printing result*/
    (number < 0) ? ((printf("Invalid number."))) : (printf("Factorial of number is %d", factorial(number)));

    getch();
    return 0;
}
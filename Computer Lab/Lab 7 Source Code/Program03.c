/*Write a program to read a non negative integer in main(). Pass this integer to a function fact() having return type unsigned integer. The function  calculate the factorial of the received number and return to main() to display it.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function definition and body*/
unsigned int fact(unsigned int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}


int main()
{
    /*Variable Declaration*/
    unsigned number, factorial;

    system("cls");/*Clear the screen*/

    /*Taking input*/
    printf("Number : ");
    scanf("%u", &number);

    factorial = fact(number);/*Function call*/

    printf("\nFactorial of %u is %u", number, factorial);/*Meaningful result*/

    getch();
    return 0;
}
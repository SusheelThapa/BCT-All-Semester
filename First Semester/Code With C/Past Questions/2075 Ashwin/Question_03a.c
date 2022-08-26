/*
Write a program to check whether the number is armstrong or not
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number, armstrong =0, n, remainder;

    system("cls");

    printf("Number: ");
    scanf("%d", &number);

    n = number;

    while (n != 0)
    {
        remainder = n % 10;
        armstrong = remainder * remainder * remainder + armstrong;
        n /= 10;
    }

    if (armstrong == number)
    {
        printf("Number is armstrong.");
    }
    else
    {
        printf("Number isn't armstrong");
    }

    getch();
    return 0;
}
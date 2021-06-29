/* 
Questions:
    2,4,6,8,10 ..................,2n

*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable Declaration*/
    int n;

    system("cls");/*Clear the screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("\nNumber for 2 to 2n is listed below: \n\n", n); /*Imformation*/

    /*Simple for loop*/
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i); /*Printing value of i multiply by 2*/
    }

    getch();
    return 0;
}
/*
Logic of code:

    We just use single for loop to iterate from 1 to n
    ~write printing we jsut multiply i by 2 to get series of even number

*/
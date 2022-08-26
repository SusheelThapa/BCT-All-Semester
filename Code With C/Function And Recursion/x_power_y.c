/*
Write A program to compute x to the power by using recursive funtion
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Logic:
    5^3 = 5 * 5^2
    5^2 = 5 * 5^1
    5^1 = 5 * 5^0


    5^n = 5 * 5^(n-1)

if x = 5 and y = n
    x^y = x * x^(y-1)

This run till the y = 0 
    x^0 =1;
*/

/*Function to calcualte the power of x^y*/
long long int powerFunc(int base, int power)
{
    /*Recursive exit condition*/
    if (power ==0){
        return 1;
    }
    return base * powerFunc(base, power - 1);  /*Recursive condition*/
}

/*Main Fuction*/
int main()
{
    /*Variable declration*/
    int x, y;

    system("cls");/*Clear the terminal screen*/

    /*Taking input from user*/
    printf("Value of x : ");
    scanf("%d", &x);
    printf("Value of y : ");
    scanf("%d", &y);

    /*Calling function and printing meaningful result*/
    printf("Value of %d^%d is %lld",x,y, powerFunc(x, y));

    getch();/*Waits till a character is pressed*/
    return 0;
}
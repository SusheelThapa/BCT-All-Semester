/*Write a recursive funtion that take an unsigned integer from the user and return the sum from 1 to that specific number entered by the user
You must read number in main*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Logic :
    5 = 5 + 4
    4 =  3 + 2
    3 =  2 + 1
    
For n 
    n = n + (n-1) //Recursive condition

This will stop when the value of n is 1

Both in codes:

    int sum(n){ 
        if (n ==1)
        {
            return 1;
        }
        return n + sum(n-1);
    }
*/

/*Function to calculate sum from 1 to n using recursive*/
unsigned sum(int n)
{
    /*Stopping citeria for recursive function*/
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1); /*Recursive condition*/
}

/*Main Function*/
int main()
{
    /*Varaible Declaration*/
    unsigned int n;

    system("cls"); /*Clear the terminal screen*/

    /*Taking user input*/
    printf("Value of n: ");
    scanf("%u", &n);

    /*Calling function and printing meaningful result*/
    printf("\nSum from 1 to %d is %ld", n, sum(n));

    getch();/*Waits till a key is pressed*/
    return 0;
}
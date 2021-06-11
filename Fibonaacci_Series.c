/*
    Program to find the fibonacci series upto index provided by the user.
*/

/*Importing the header files that are needed*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* 
    A Fibonacci number is a series of numbers in which each Fibonacci number is obtained by adding the two preceding numbers. It means that the next number in the series is the addition of two previous numbers. Let the first two numbers in the series be taken as 0 and 1. By adding 0 and 1, we get the third number as 1.
    i.e num1 = 0 and num2 = 1
        num3 = num1 + num2 = 0+1 = 1
        num4 = num2 + num3 = 1+1 = 2
        num5 = num3 + num4 = 1+2 = 3
        num6 = num4 + num5 = 2+3 = 5
          .      .     .      .    .
          .      .     .      .    .
          .      .     .      .    .
          .      .     .      .    .
          .      .     .      .    .
          .      .     .      .    .
       num(n) = num(n-2) + num (n-1)

    For different value of num1 and num2, we will obtain different fibonacci series.

*/

int main()
{
    /*Declaration of variable*/
    int num1, num2, term, num3, i = 0;

    system("cls");

    /*Getting user input*/
    printf("Enter the first number of fibonancci series you want to find: ");
    scanf("%d", &num1);

    printf("Enter the second number of fibonancci series you want to find: ");
    scanf("%d", &num2);

    printf("Enter the number of terms in fibonacci series excluding first and second:");
    scanf("%d", &term);

    system("cls");

    /*Printing the series*/
    printf("Fibonacci Series:\n");
    printf("%d ", num1); /*Prints the first term of fibonacci  given by user*/
    printf("%d ", num2); /*Prints teh second term of fibonacci given by user*/
    while (i != term)
    {
        num3 = num1 + num2;  /*Value of third element i.3 sum of first and second term as explained above*/
        num1 = num2;         /*Sets the value  of num1 to previous value of num2 for next iterations*/
        num2 = num3;         /*Sets the value  of num2 to  value of num3 for next iterations*/
        printf("%d ", num3); /*Prints the value of num3 i.e third term*/
        i++;                 /*Increasing the value of i by 1*/
    }
    /*Looping will continue till i == no of term given by  user.*/

    getch();
    return 0;
}
/*If the above program doesnot run by using code runnner
    Try running
        gcc .\Fibonaacci_Series.c
        .\Fibonaacci_Series.exe
    in the terminal

    gcc is the name of compilier used by me.
    If you have other compiler, DM me or look in internet 
*/
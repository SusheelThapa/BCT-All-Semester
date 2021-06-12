/*
    Program to find the fibonacci series upto index provided by the user.
*/

/*Importing the header files that are needed*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* 
    A Fibonacci number is a series of numbers in which each Fibonacci number is obtained by adding the two preceding numbers. It means that the next number in the series is the addition of two previous numbers. Let the first two numbers in the series be taken as 0 and 1. By adding 0 and 1, we get the third number as 1.
    Normal Method:
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
    Recursive Method:
        Let observe the following fibonacci series:
            Terms     1  2  3  4  5   6   7 
            Series    1  2  3  5  8  13  21 
        Here,
            num(7) =num(6) + num(5)
            num(6) =num(5) + num(4)
            num(5) =num(4) + num(3)
            num(4) =num(3) + num(2)
            num(3) =num(2) + num(1)
            num(2) =num(1) + num(0)
            num(1) =num(-1) + num(-2)

        Since we got negative value so we set a condition if term is equal to 1then its value will be first number(enter by user).
        Similary,for zero we can set value to 0 as anything add to zero will be same
            i.e num(2) =num(1) + num(0) = num(1)  If user input 1,3  
                3 = 1 -->Not True
        so we set if term is equal to 2 then its value will be second number(enter by user)


    For different value of num1 and num2, we will obtain different fibonacci series.

        num(n) = num(n-1) + num(n-2)

*/
int fibonacci(int a, int b, int term)
{
    if (term == 0)
    {
        return 0;
    }
    if (term == 1)
    {
        return a;
    }
    if (term == 2)
    {
        return b;
    }

    return fibonacci(a, b, (term - 1)) + fibonacci(a, b, (term - 2));
}

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

    printf("Enter the number of terms in fibonacci series including first and second:");
    scanf("%d", &term);

    system("cls");

    /*Printing the sereies using recursive method*/
    printf("Fibonacci Series by Recursive Method:\n");
    for (int i = 1; i <= term; i++)
    {
        printf("%d ", fibonacci(num1, num2, i));
    }

    printf("\n\n"); /*Creating a space between two method while printing*/

    /*Printing the series*/
    printf("Fibonacci Series by Normal Method:\n");
    
    while (i != term)
    {
        printf("%d ", num1);    /*Prints the first term of the series*/
        num3 = num1 + num2; /*Set the value of third term in series*/   
        num1 = num2;    /*For next iteration num2 will act as num1*/
        num2 = num3;    /*For next iteration num3 will act as num2 */   
        i++;    /*Increasing the value of i by 1*/
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
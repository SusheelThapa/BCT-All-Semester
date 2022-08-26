/* 
    Program to check whether the number entered by the user is Harshad or not
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Harshad Number:
    An integer number in base 10(decimal) which is divisible by the sum of its digits is said to be a Harshad Number.

    We copy sumOfDigits() function from SUm_of_Digits_of_Number.c to add the sum of digits of user input number
    We find the remainder when number is divided by sum of digits
        remainder = number % sum of digits
        --> Check remainder equal 0
            True: It is harshad number
            False: It isn't number

*/

/*Function import from Sum_of_digits.c*/
int sumOfDigits(int n)
{
    int sum = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int number, sum_of_digits, remainder;

    system("cls");/*Clear the terminal*/

    /*Taking input from user*/
    printf("Enter the number to check whether the number is Harshad Number or not: ");
    scanf("%d", &number);

    system("cls");/*Clear the terminal*/

    sum_of_digits = sumOfDigits(number); /*Calling function which find sum of digits ans return value is stored in sum_of_digits*/
    remainder = number % sum_of_digits; /*Calculated remainder when number is divided by sum of digits*/

    printf("Number : %d\n", number);/*Printinf orginal number*/
    printf("Sum of Digits : %d\n", sum_of_digits); /*Printing the sum of digits of number*/
    printf("Remainder: %d  \"When number divided by sum of digits of number.\"\n\n", remainder); /*Printing the value of remainder*/

    /*Checking condition to be Harshd Number*/
    if (remainder == 0)
    {
        printf("It is harshad number\n");
    }
    else
    {
        printf("It isn't harshad number.\n");
    }
    getch();

    return 0;
}
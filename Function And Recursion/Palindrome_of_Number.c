/*
    Program to check the whether the user input number is pallidrome or not.
*/

/*Importing the needed header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Logic of the code:

    Pallindrome number:
    A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when it's digits are reversed.

    Here, we import code(reverse function) from reverse_the_number.c

    Simply check whether the reversed is equal to number or not. If true it is pallidrome and  if false it isn;'t pallidrome   
*/
/*reverse Function copied from  reverse_the_number.c. See reverse_the_number.c for detail explanation*/
int reverse(int number)
{
    int reverse, remainder;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    return reverse;
}

int main()
{
    /*Declaration of the variable*/
    int number, reversed;

    system("cls"); /*Clear the contents of terminal*/

    /*Taking the user input*/
    printf("Number to check whether it is palindrome or not: ");
    scanf("%d", &number);
    reversed = reverse(number); /*Calling the function and storing the value in reversed*/

    system("cls");

    /*Printing the value*/
    printf("Orginal Number: %d\n", number);
    printf("Reversed Number: %d\n", reversed);

    /*Checking the pallidrome condition*/
    if (number == reversed)
    {
        printf("The number is pallindrome.\n");
    }
    else
    {
        printf("The number isn't pallindrome.\n");
    }

    getch();
    return 0;
}
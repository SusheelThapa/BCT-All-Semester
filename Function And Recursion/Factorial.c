/*Program to calculate the factorial of the user input number*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    Logic of code:
    Factorial of a whole number 'n' is defined as the product of that number with every whole number till 1. 
    For example, 
        The factorial of 4 is 4×3×2×1, which is equal to 24. 

    Generalized Formula:
        n! = n * (n-1)!
        For example:
            5! 
        =   5 * 4!
        =   5 * 4 * 3!
        =   5 * 4 * 3 * 2!
        =   5 * 4 * 3 * 2 * 1!
        =   120
    We can seen that for every new value of n we are using n * (n-1)! so we call function for each new value.
        int factorail(int n){
            return n * factorail(n-1);
        }
        But it does not have terminating point as value of n cannot be negative so we put as if condition right after the starting of the function so that it check the number then proceed:
            if (n == 0 or n== 1){
                return 1; //As the value of 1! and 0! is 1
            }
            
*/

/*Function is explained above*/
long long int Factorial(long long int n)
{
    long long int fact;
    if (n == 1 || n == 0)
    {
        return 1;
    }

    fact = n * Factorial(n - 1);
    return fact;
}

int main()
{
    /*Declaration of needed variable*/
    long long int number, factorial;

    system("cls"); /*Clear the terminal*/

    /*Taking the user input*/
    printf("Enter the number whose factorial you want to calculate?\n");
    scanf("%lld", &number);

    system("cls"); /*Clear the terminal*/

    /*Below if check if the number is negative, If true exit the code*/
    if (number < 0)
    {
        printf("Negative number doesnot have factorial.");
        getch();
        exit(0);
    }
    else
    {
        factorial = Factorial(number); /*Calling the function terminal and storing the value in factorial*/

        /*Printing the result*/
        printf("Number : %lld\n", number);
        printf("Factorial : %lld\n", factorial);

        getch();
    }
    return 0;
}
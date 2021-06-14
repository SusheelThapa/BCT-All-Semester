/*
    Program to find whether the number input by user is abundant or not
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Abundant Number:
    A number n is said to be Abundant Number if sum of all the proper divisors of the number denoted by sum (n) is greater than the value of the number n.

    We copy piece of code from Divisor_or_Factor.c with some modification so that it just sum all the divisor.
    
    Checking whether the sum of divisor is greater than number.
        True: It is Abundant Number.
        False: It isn't Abundant Number.

*/

/*Function from Divisor_or_Factor.c with modification*/
int sumOfDivisor(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            printf("%d ", i);
            sum = sum + i; /*Added to add the divisor*/
        }
    }
    printf("%d\n", n);
    return sum;
}
int main()
{
    /*Varaible Declaration*/
    int number, sum_of_divisors;

    system("cls"); /*Clear the terminal*/

    /*Taking user input*/
    printf("Enter the number to check whether the number is abundant or not?\n");
    scanf("%d", &number);

    system("cls"); /*CLear the terminal*/

    /*Printing data*/
    printf("Number : %d\n", number);
    printf("Divisor: ");
    sum_of_divisors = sumOfDivisor(number); /*Calling function to find the sum of divisor of number and return value is stored in sum_of_divisors*/
    printf("Sum of divisor: %d (exculding itself(%d)\n\n", sum_of_divisors, number);

    /*Condtion to be abundant number*/
    if (sum_of_divisors > number)
    {
        printf("It is Abundant Number.\n");
    }
    else
    {
        printf("It isn't Abundant Number.\n");
    }
    getch();
    return 0;
}
/*
Program to find whether the user input number is perfect number or not
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
 A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
 For instance,
    6 has divisors 1, 2 and 3 (excluding itself), 
    And 1 + 2 + 3 = 6, 
    So 6 is a perfect number.

We copy paste some line of Divisor_or_Factor.c with some modification(just to add the divisor). Look at that code to understand better.
Then,
    -->Check if sum of divisor(exculding itself) is equal to number
        True: It is perfect number
        False: It isn't perfect number
*/

int sumOfDivisorOfNumber(int number){

    int sum_of_divisor_of_number= 0;
    printf("Number: %d\n", number); /*Printing the orginal number*/

    /*Printing as well as adding divisor*/
    printf("Divisor: ");

    /*Code copy from Divisor_or_Factor.c*/
    for (int i = 1; i < number; i++)
    {
        if ((number % i) == 0)
        {
            printf("%d ", i);

            sum_of_divisor_of_number = sum_of_divisor_of_number + i;
        }
    }
    printf("%d\n", number); /*Since it should not be added so we are adding this divisor seperaely*/

    return sum_of_divisor_of_number;
}

int main()
{
    /*Variable declaration*/
    int number, sum_of_divisor_of_number;

    system("cls");/*Clear the terminal */

    /*Taking the user input*/
    printf("Enter the number to check whether the number is Perfect or not: ");
    scanf("%d", &number);

    system("cls");/*CLeaing the terminal*/

    /*Calling function**/
    sum_of_divisor_of_number = sumOfDivisorOfNumber(number);


    /*Condition of Perfect Number*/
    if (sum_of_divisor_of_number == number)
    {
        printf("It is a perfect number.\n");
    }
    else
    {
        printf("It isn't a perfect number.\n");
    }

    getch();
    return 0;
}
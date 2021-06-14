/*
    Program to find whether the two number entered by the user in friendly pair or not
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    Friendly Numbers Pair are two or more natural numbers with a common abundancy index(ratio between the sum of divisors of a number and the number itself).
    Two numbers with the same "abundancy" form a friendly pair.

    We just copy some line of code from Divisor_or_Factor.c with some modification to add the divisor and store it to variable.

    We find the ratio for both number.
        ratio = sum of divisor / number
    
    Check ratio of number one is equal to number two 
        True: Two number are friendly pair
        False: Two number aren't friendly pair
*/
float sumOfDivisor(float n)
{
    float sum = 0;
    /*Code copy from Divisor_or_Factor.c*/
    for (int i = 1; i <= n; i++)
    {
        if (((int)n % i) == 0)
        {
            sum = sum + i; /*Modification to add the divisors and store in sum*/
        }
    }
    return sum;
}
int main()
{
    /*Variable declaration*/
    float number_one, number_two, sum_of_divisor_of_num_one, sum_of_divisor_of_num_two;
    float ratio_one, ratio_two;

    system("cls"); /*Clear the terminal */

    /*Taking the user input*/
    printf("\"Enter pair number to check whether it is friendly pair or not\"\n\n");

    printf(" Number one: ");
    scanf("%f", &number_one);
    printf(" Number two: ");
    scanf("%f", &number_two);
    //  (24,91963648)
    system("cls"); /*CLeaing the terminal*/

    printf("Number1: %f\n", number_one);   /*Printing the orginal number one*/
    printf("Number2: %f\n\n", number_two); /*Printing the orginal number two*/

    /*Calling the function to find the sum of divisor and store its value to sum*/
    sum_of_divisor_of_num_one = sumOfDivisor(number_one);
    sum_of_divisor_of_num_two = sumOfDivisor(number_two);
    /*Printing the sum*/
    printf("Sum of divisor of Number one: %f\n", sum_of_divisor_of_num_one);
    printf("Sum of divisor of Number two: %f\n\n", sum_of_divisor_of_num_two);

    /*Calculating the ratio and printing the ratio. Since, ratio is float so type casting(mention in Decimal_Binary.c)*/
    ratio_one = sum_of_divisor_of_num_one / number_one;
    ratio_two = sum_of_divisor_of_num_two / number_two;
    printf("Ratio of number one: %.5f\n", ratio_one);
    printf("Ratio of number two: %.5f\n\n", ratio_two);

    /*Checking condition for friendly pairs*/
    if (ratio_one == ratio_two)
    {
        printf("Two numbers are friendly pairs.");
    }
    else
    {
        printf("Two number aren't friendly pairs.");
    }

    getch();
    return 0;
}
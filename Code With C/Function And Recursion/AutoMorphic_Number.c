/*
    Program to check whether the number is AutoMorphic or not
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
    Automorphic Number:
    An automorphic number is an integer whose square ends with the given integer.
    As, (25)^2 = 625, and (76)^2 = 5776.

    From above example, 
        we can see,
            no of digits of number == number of digit of number take from back of number square
                no of digits of number = 2 
                For number square taking 2 digits from back i.e = 25
            if these are equal then the number is Automorphic if not it is not Automorphic.
    
    -->To obtain no of digits we pick some code from No_of_Digits_in_Number.c

    -->And to obtain the number of digit of number take from back of number square(from 625 to get 25) we find remainder when number square is divided by 10^(no of digit in number)

    10^(no of digits) is evaluated using Power_of_Number.c
    For example:
            number = 5
            no of digits = 1
            number square = 25
            denominator = 10 ^ no of digits = 10 ^ 1 = 10
            remainder = number square % denominator=  25 % 10 = 5
    Since, remainder == number so it is Automorphic number.
*/

/*Function taken from No_of_Digits_in_Number.c Just go through*/
int noOfDigit(long long int n)
{
    int i;
    do
    {
        i++;
        n = n / 10;
    } while (n != 0);
    return i;
}

/*Function taken from Power_of_Number.c Just go through*/
long long int powerOfNumber(long long int base, long long int power)
{
    long long int value = 1;
    for (int i = 1; i <= power; i++)
    {
        value = base * value;
    }
    return value;
}

int main()
{
    /*Variable declaration*/
    int no_Of_Digit;
    long long int number, number_square, denominator;

    system("cls"); /*Clear thte terminal*/

    /*Taking user input*/
    printf("Number to check automorphic : ");
    scanf("%lld", &number);

    no_Of_Digit = noOfDigit(number); /*Calculating the no. of digits in user input number*/

    number_square = number * number; /*Sqauring the number */

    denominator = powerOfNumber(10, no_Of_Digit); /*Calculating the value of denomintor so that we number_sqaure divided by this will leave the remainder having the equal number of digit with orginal number*/

    /*Printing orginal number and its square*/
    printf("\nNumber : %lld\n", number);
    printf("Number Square : %lld\n\n", number_square);

    /*Checking condition to be automorphic number*/
    if ((number_square % denominator) == number)
    {
        printf("It is AutoMorphic Number.\n");
    }
    else
    {
        printf("It isn't Automorphic Number.\n");
    }

    getch();
    return 0;
}
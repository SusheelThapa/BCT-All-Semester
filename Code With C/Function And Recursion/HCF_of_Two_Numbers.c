/*
    Program to find the HCF of given user input two number
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Here we use ""Euclidean algorithm"" which I also donot know but the wikipedia help me out

        Link : https://en.wikipedia.org/wiki/Euclidean_algorithm

    If you are lazy like me then here is some few lines that may help you to understand 'Euclidean algorithm'

    let number_one = 24  , number_two = 36

    By prime factorisation, we can write the two numbers;

        24 = 2 x 2 x 2 x 3

        36 = 2 x 2 x 3 x 3

        Hence, after factoring the numbers 24 and 36, we can see, the factors 2x2x3 are common.

        Therefore, the HCF (24, 36) = 2x2x3 = 12

    Using Euclidean algorithm,

        36 = 24 * 1 + 12
        24 = 12 * 2 + 0

    Since we got  0 at last therefore , HCF is 12.

    I know you got nothing from here.

    Lets simplify above problems.
        let number_one = a , number_two = b
            a = b * x + y  where x = a/b (integer part) ,  y = a - x * b
        
            On next step ,value  a will be set to value of b and value of b is set to value of y.This will continue till the value of y is zero. When the value of y is set to zero then corresponding value of x will be required HCF.

        let take number 56 and 45.(Process in bracket is for your clear understanding)
            56 = 45 * 1 + 11  ( a = b * 1 + y)
            45 = 11 * 4 + 1 ( b = y * 4 + c)
            11 = 1 * 11 + 0 ( y = c * 11 + 0)
        Compairing with:
            a = b * x + y

            we got y = 0 and x = 1
            Since, value of y is 0 so the HCF is 1.
        
        So we write a program to calculate x, y and continue calling it till the value of y = 0.

            int HCF(int a, int b){
                if(b == 0 )  (Since the value of y is received in variable b)
                { 
                    return b; (Since b will be HCF when this if is true )
                }
                x = a/b
                y = a * x - b
                HCF(b,y) (For next iteration, b takes position of a and y takes position b)
            }

        A problem arise if  a <b. To tackle with this problem we just swap their variable by coping some lines fo code from Swap_two_numbers.c
*/
int HCF(int number_one, int number_two)
{
    /*Below if just swap the value of number_one and number_two.For more clarity, once look Swap_two_numbers.c*/
    if (number_one < number_two)
    {
        number_two = number_one + number_two - (number_two = number_one);
    }

    /*Termination condition of recursion*/
    if (number_two == 0)
    {
        return number_one;
    }

    /*Declaration of variable*/
    int quotient;
    int remainder;

    /*Explained Above*/
    quotient = number_one / number_two;
    remainder = number_one - quotient * number_two;

    /*Calling to it self*/
    HCF(number_two, remainder);
}

int main()
{

    /*Declaration of variable*/
    int number_one, number_two, hcf;

    system("cls");

    //Taking the user input
    printf("Enter the first number: ");
    scanf("%d", &number_one);

    printf("Enter the second number: ");
    scanf("%d", &number_two);

    /*Calling the function and storing the value  in hcf*/
    hcf = HCF(number_one, number_two);

    system("cls");

    /*Printing the HCF of two numbers*/
    printf("Number one : %d\n", number_one);
    printf("Number two : %d\n", number_two);
    printf("HCF : %d\n", hcf);

    getch();
    return 0;
}

/*
If you have any other method better than this please DM me. 
Link in README.md
*/
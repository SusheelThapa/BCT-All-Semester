/*
    Program to find the LCM of given user input two number
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
    Logic of Code:
        Here we just used the formula that we have study in lower grade
            i.e HCF(a,b) * LCM(a,b) = a *b
            or, LCM(a,b) = a *b / HCF(a,b)
    Pratical proof:
        let,
            a = 9  b = 15
        Then, 
            HCF = 3  LCM = 45
        Now, 
            HCF(a,b) * LCM(a,b) = a *b
            3 * 45 = 9  *15
            135 = 135 (True)
*/

/*
    Function import from HCF_of_two_numbers.c 
    Check that program to understand the following piece of code
*/
int HCF(int number_one, int number_two)
{
    if (number_one < number_two)
    {
        number_two = number_one + number_two - (number_two = number_one);
    }

    if (number_two == 0)
    {
        return number_one;
    }

    int quotient;
    int remainder;

    quotient = number_one / number_two;
    remainder = number_one - quotient * number_two;

    HCF(number_two, remainder);
}
int main()
{
    /*Declaration of variable*/
    int number_one, number_two, hcf, lcm;

    system("cls");

    //Taking the user input
    printf("Enter the first number: ");
    scanf("%d", &number_one);

    printf("Enter the second number: ");
    scanf("%d", &number_two);

    /*Calling HCF to find the hcf of two number*/
    hcf = HCF(number_one, number_two);

    /*Using the formula*/
    lcm = number_one * number_two / hcf;

    system("cls");

    /*Printing the LCM of two numbers*/
    printf("Number one : %d\n", number_one);
    printf("Number two : %d\n", number_two);
    printf("LCM : %d\n", lcm);

    getch();
    return 0;
}
/*
    Program to add two fraction enter by the user
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
 Let the two fraction be 
  fraction_one = a/b fraction_two = c/d 

  Now finding the lcm of denominator b and d 
    For this we use HCF function from HCF_of_Two_Number.c and use formula
        LCM = b* d / HCF = (Say x)

    Now finding the multipying factor by dividing lcm by respective denominator
        factor_one = lcm / b 
        factor_two = lcm / d 

    Now, numerator and denominator of final answer
        Numerator = a * factor_one + c * factor_two
        denominator = LCM
    Suppose 7/8 and 4/5 be input
        LCM of 8 and 5 = 40
        Factor_one =  40/8 = 5
        Factor_two =  40/5 = 8
    Final Answer:
        Numerator= 7*5+4*8 = 67
        Denominator = 40


*/
/*Taken From HCF_of_Two_Number.c*/
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

    quotient = number_one / number_two;
    remainder = number_one - quotient * number_two;

    /*Calling to it self*/
    HCF(number_two, remainder);
}

int main()
{
    /*Variable Declaration */
    int numerator_one, numerator_two, denominator_one, denominator_two, lcm_denominator, multiply_factor_one, multiply_factor_two;

    system("cls"); /*Clear the terminal*/

    /*Taking user input*/
    printf("<--Number One-->\n");
    printf("Numerator: ");
    scanf("%d", &numerator_one);
    printf("Denominator: ");
    scanf("%d", &denominator_one);

    printf("\n<--Number Two-->\n");
    printf("Numerator: ");
    scanf("%d", &numerator_two);
    printf("Denominator: ");
    scanf("%d", &denominator_two);

    /*Finding the LCM of denominator*/ 
    lcm_denominator = denominator_one * denominator_two / HCF(denominator_one, denominator_two); /*Finding LCM of the denominator*/

    /*Calculating the multyiplying factor*/
    multiply_factor_one = lcm_denominator / denominator_one;
    multiply_factor_two = lcm_denominator / denominator_two;

    /*Printing answer*/
    printf("\n<--Answer-->\n");
    printf("Numerator : %d\n", (numerator_one * multiply_factor_one + numerator_two * multiply_factor_two));
    printf("Denominator : %d\n", lcm_denominator);

    getch();
    return 0;
}
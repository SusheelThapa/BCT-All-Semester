/*Program to check the user input number is armstrong or not */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

/*
    Logic of code:
    Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

    
    Let's try to understand why 153 is an Armstrong number.
        153 = (1*1*1)+(5*5*5)+(3*3*3)  
            where:  
                (1*1*1)=1  
                (5*5*5)=125  
                (3*3*3)=27  
            So:  
                1+125+27=153  
*/
/*Function to find the value of cube of digits of number enter by the user*/
int Armstrong(int n)
{
    int armstrong = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        armstrong = pow(remainder, 3) + armstrong;
        n = n / 10;
    }
    return armstrong;
}
int main()
{
    /*Declaration of variable*/
    int number, armstrong_value;

    system("cls"); /*Clearing the terminal*/

    /*Taking user input*/
    printf("Enter the number to check whether it is armstrong or not?\n");
    scanf("%d", &number);

    armstrong_value = Armstrong(number); /*Calling the function and storing the value in armstrong_value*/

    system("cls"); /*Clearing the terminal*/

    /*Printing the number and armstrong value*/
    printf("Number : %d\n", number);
    printf("Armstrong : %d\n\n", armstrong_value);

    /*Checking the condition of for a number to be armstrong*/
    if (number == armstrong_value)
    {
        printf("Result: It is Armstrong.");
    }
    else if (number != armstrong_value)
    {
        printf("Result: It isn't Armstrong.");
    }

    getch();
    return 0;
}
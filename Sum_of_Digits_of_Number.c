/*
    Program to find the sum of digits of user input number
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    Logic of code:

    let number = 456;
    Now we take the digits one by one 
        while(n!=0){
            digit = n% 10;
            sum = sum + digit
            n =n/10;
        }

        iteration       digit        sum          n
            1           6             6           45
            2           5           6 + 5         4
            3           4          6 + 5 + 4      0
                    Loop exits


*/

/*Function to find the sum of digits of number*/
int sumOfDigits(int n)
{
    int sum = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}
int main()
{
    /*Variable Declaration*/
    int number, sum;

    system("cls"); /*Clear the terminal*/

    /*Taking User input*/
    printf("Enter the number?\n");
    scanf("%d", &number);

    system("cls"); /*Clears the terminal*/

    sum = sumOfDigits(number); /*Calling function and storing return value in sum*/

    printf("Number : %d\n", number); /*Printing the orginal number*/
    printf("Sum of Digits of Number : %d\n", sum); /*Printing the sum of digits of number*/

    getch();
    return 0;
}
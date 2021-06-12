/*
    Program to find the number of digits present in the user input integer
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Logic of code:
    If we divide the number till the number is zero.
    on every iterationwe increase value of no_of _digits = i

    let number = 56;
        Divide          i
        56/10 = 5       1
        5/10 = 0        2
    
    Since 0 is obatined so not of digits in 2
    Here we use do while loop so that the loop run at least one time(if user input 0).

    Note:
    0000000000000000 = 0
    00000000000012 = 12
    0000000100000004 = 100000004

    This program follows basic mathemtaical principle
    It takes only integer so that every float is converted to int.
 */

/*Function to count number of digits*/
int noOfDigit(int n)
{
    int i;
    do
    {
        i++;
        n = n / 10;
    } while (n != 0);
    return i;
}

int main()
{
    /*Variable Declaration*/
    int number, no_of_digits;
    system("cls");

    /*Taking user input*/
    printf("Enter the number:");
    scanf("%d", &number);

    no_of_digits = noOfDigit(number); /*Calling function and storing function return value on no_of_digits*/

    printf("Number : %d\n", number);              /*Printing orginal number*/
    printf("No. of Digits : %d\n", no_of_digits); /*Printing the no of digits present in number*/

    getch();
    return 0;
}
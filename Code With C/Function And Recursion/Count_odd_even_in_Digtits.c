/*
    Write a program to read an integer number and count the even and odd digit present in the number.
    You must write a funtion of calculating the result and the result must be displayed
*/

/*Inporting header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function Defination*/
int oddCount(int number);
int evenCount(int number);

/*Main Function*/
int main()
{
    /*Variable declaration*/
    int number, even_count, odd_count;

    system("cls"); /*Clear the terminal screen*/

    /*Taking input from user*/
    printf("Enter the number?\n");
    scanf("%d", &number);

    /*Function Call*/
    even_count = evenCount(number);
    odd_count = oddCount(number);

    /*Printing meaningful result*/
    printf("\nTotal number of even digits in %d is %d\n", number, even_count);
    printf("Total number of odd digits in %d is %d\n", number, odd_count);

    getch(); /*Wait till a key is pressed*/
    return 0;
}

int evenCount(int number)
{
    /*Declaration of variable and initializing varaibel count with 0*/
    int count = 0, digit;

    while (number != 0)
    {
        digit = number % 10;/*Bring out every digit of provided number */
        
        if (digit % 2 == 0)
        {
            count++; /*Incresing count by 1 if digit is even*/
        }
        number /= 10; /*Updating value of number -->Equivalent to number = number/10*/
    }
    return count;
}
int oddCount(int number)
{
    /*Declaration of variable and initializing varaibel count with 0*/
    int count = 0, digit;

    while (number != 0)
    {
        digit = number % 10;/*Bring out every digit of provided number */

        if (digit % 2 == 1)
        {
            count++; /*Increase the value of count by one if digit is odd*/
        }
        number /= 10; /*Updating value of number- >Equivalent to number = number/10*/
    }
    return count;
}
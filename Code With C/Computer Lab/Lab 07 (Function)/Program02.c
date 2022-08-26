/*Write a program to create a function void sumOfDigits(int);. This function must calculate the sum of digits in the given number and displays the sum.*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function Defination*/
int sumOfDigits(int);

int main()
{
    /*Varaible Declaration*/
    int number, sum;

    system("cls");/*Clear the screen*/

    /*Taking input*/
    printf("Number: ");
    scanf("%d", &number);

    sum = sumOfDigits(number);

    printf("Sum of digits in %d is %d", number, sum);
    
    getch();
    return 0;
}

/*Function Body*/
int sumOfDigits(int a)
{
    if (a < 0)
    {
        return 0;
    }
    else
    {
        while (a != 0)
        {

            int rem = a % 10;
            a = a / 10;
            return rem + sumOfDigits(a);
        }
    }
}
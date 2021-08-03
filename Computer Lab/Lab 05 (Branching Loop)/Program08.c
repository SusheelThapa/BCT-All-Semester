/*Write a program to read an positive number and fins its sum of digits in it.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number, remainder, sum;
    system("cls");
    printf("Enter the positive integers: ");
    scanf("%d", &number);


    printf("Number: %d", number);
    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("\nSum of digits is %d.", sum);
    getch();
    return 0;
}
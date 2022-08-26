/*Write a program to read  number and check whether it is palindrome or not*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number, reverse, remainder, copy_number;
    system("cls");
    printf("Number: ");
    scanf("%d", &number);
    copy_number = number;
    while (copy_number != 0)
    {
        remainder = copy_number % 10;
        reverse = reverse * 10 + remainder;
        copy_number = copy_number / 10;
    }
    printf("Number: %d\nReverse: %d\n\n", number, reverse);
    if (number == reverse)
    {
        printf("It is palindrome.");
    }
    else
    {
        printf("It isn't palindrome.");
    }
    getch();
    return 0;
}
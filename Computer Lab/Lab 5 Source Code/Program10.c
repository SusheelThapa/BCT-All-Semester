/*Write a program to read a number (n) adn display its multiplication table upto 10.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number;
    system("cls");
    printf("Number: ");
    scanf("%d", &number);
    printf("Multiplication Table of %d\n\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d  *   %d  =   %d\n", i, number, i * number);
    }
    getch();
    return 0;
}
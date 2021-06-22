/*Write a program to read a string using gets() and display using puts()*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char string_gets[90];
    system("cls");
    printf("Enter any string: ");
    gets(string_gets);

    printf("\nThe string you have entered is ");
    puts(string_gets);

    getch();
    return 0;
}

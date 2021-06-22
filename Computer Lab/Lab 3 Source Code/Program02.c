/*Write a program to read a character and string using scanf() and dispplay it using printf().*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int character, string[20];
    system("cls");

    printf("Enter the character : ");
    scanf("%c", &character);

    printf("Enter the string with no spaces : ");
    scanf("%s", string);

    printf("\nThe character you have enter is %c.", character);
    printf("\nThe string you have enter is %s.", string);

    getch();
    return 0;
}
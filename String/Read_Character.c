/*
Write a program to read a character till user enter enter
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char string[100], character;
    int i = 0;

    system("cls");

    printf("Enter the any string?\n");

    do
    {
        character = getchar();
        string[i] = character;
        i++;

    } while (character != '\n');

    // string[i - 1] = '\0'; /*Termination element of string*/

    puts(string); /*Printing the srting*/

    getch();
    return 0;
}
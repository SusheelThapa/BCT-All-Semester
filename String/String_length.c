/*
Wrtie a program to compute the length of string without using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int lengthString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char string[200];

    system("cls");

    printf("String:");
    gets(string);

    printf("Length of the string is %d", lengthString(string));

    getch();
    return 0;
}
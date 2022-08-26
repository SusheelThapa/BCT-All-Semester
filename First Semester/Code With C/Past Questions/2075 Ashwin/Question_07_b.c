/*
"Write a program to calculate the length of string without using string hanlding function";
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int length_string(char string[100])
{
    "We know the termination of string is determined by '\0' character so we compare each character till it gets equal to '\0'";

    int length = 0;
    while (string[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char string[100];

    printf("Enter any string: ");
    gets(string);

    printf("%d", length_string(string));

    getch();
    return 0;
}
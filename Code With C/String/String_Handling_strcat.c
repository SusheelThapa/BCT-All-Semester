/*
WAP a program that combine two string using string handling handling function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 500

int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];
    system("cls");

    printf("String One: ");
    gets(string_one);

    printf("String Two: ");
    gets(string_two);

    printf("Combine string is %s", strcat(string_one, string_two));

    getch();
    return 0;
}
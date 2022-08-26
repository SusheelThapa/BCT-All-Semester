/*
WAP a program that combine two string using string handling handling function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 500

void combine(char *str_one, char *str_two)
{
    "Combine the two string and kept combine result in first variable";

    while (*str_one != '\0')
    {
        str_one++;
    }

    while (*str_two != '\0')
    {
        *str_one = *str_two;
        str_one++;
        str_two++;
    }
    *str_one = '\0';
}

int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];

    system("cls");

    printf("String One: ");
    gets(string_one);

    printf("String Two: ");
    gets(string_two);

    combine(string_one, string_two);
    printf("Combine string is %s", string_one);

    printf("Sushil");
    getch();
    return 0;
}

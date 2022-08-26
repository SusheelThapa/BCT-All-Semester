
/*
WAP to computers the length od string using string handling function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[200];

    system("cls");

    printf("String:");
    gets(string);

    printf("Length of the string is %d", strlen(string));

    getch();
    return 0;
}
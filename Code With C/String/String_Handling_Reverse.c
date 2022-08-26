/*
WAP  to reverse the string using any string handling functions
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 100

int main()
{
    char string[MAX_LIMIT];

    // system("cls");

    printf("String:");
    gets(string);

    strrev(string);

    printf("Reverse string is %s", string);

    getch();
    return 0;
}
/*
WAP to program to check whether two string are same or not
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 500

int compareString(char *string_one, char *string_two)
{
}
int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];
    int result;

    system("cls");

    printf("String One: ");
    gets(string_one);

    printf("String Two: ");
    gets(string_two);

    result = strcmp(string_one, string_two);

    if (result == 0)
    {
        printf("String are same\n");
    }
    else
    {
        printf("String are not same.\n");
    }

    getch();
    return 0;
}
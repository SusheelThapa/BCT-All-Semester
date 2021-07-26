#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_LIMIT 500

void copyString(char *destination, char *source)
{
    "Copy string from one variable to another";

    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];

    system("cls");

    printf("String One: ");
    gets(string_one);

    system("cls");

    copyString(string_two, string_one);

    printf("Data is string two is %s", string_two);

    getch();
    return 0;
}
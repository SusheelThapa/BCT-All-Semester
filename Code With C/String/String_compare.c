/*
WAP to program to check whether two string are same or not
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_LIMIT 500

int compareString(char *string_one, char *string_two)
{
    while (1)
    {
        if (*string_one != *string_two)
        {
            return 1;
        }
        else if (*string_one == *string_two)
        {
            if (*string_one == '\0' || *string_two == '\0')
            {
                return 0;
            }
        }
        if (*string_one == '\0' || *string_two == '\0')
        {
            return 1;
        }

        string_one++;
        string_two++;
    }
}

int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];
    int result;

    // system("cls");

    printf("String One: ");
    gets(string_one);

    printf("String Two: ");
    gets(string_two);

    result = compareString(string_one, string_two);

    if (result == 0)
    {
        printf("String are same\n");
    }
    else if (result == 1)
    {
        printf("String are not same.\n");
    }

    getch();
    return 0;
}
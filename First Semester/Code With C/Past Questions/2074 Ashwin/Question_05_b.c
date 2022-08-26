#include <stdio.h>
#include <string.h>

int check(char string[])
{
    char temp[100];

    strcpy(temp, string);

    strrev(string);

    if (strcmp(temp, string) == 0)
        return 1;
    else
        return 0;
}

void main()
{
    char string[100];

    printf("Enter the string?\n");
    gets(string);

    (check(string) == 1) ? printf("Pallindrome") : printf("Not Pallindrome");
}
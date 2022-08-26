#include <stdio.h>

int compare(char string_one[], char string_two[])
{
    int i = 0;

    for (; string_one[i] != '\0' || string_two[i] != '\0'; i++)
        if (string_one[i] != string_two[i])
            return 0;

    if (string_one[i] == '\0' && string_two[i] == '\0')
        return 1;
    return 0;
}

void main()
{
    char string_one[100], string_two[100];

    printf("String one: ");
    gets(string_one);

    printf("String two: ");
    gets(string_two);

    (compare(string_one, string_two)) ? printf("Same string") : printf("Different String");
}
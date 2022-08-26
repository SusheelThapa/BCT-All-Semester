/*
Question_Two.c

Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "idea without execution is worthless";

    char *string_pointer = string;

    printf("String : %s\n", string);

    for (int i = 0; i < strlen(string); i++)
    {
        if (*(string_pointer + i) == 'c' || *(string_pointer + i) == 'C')
        {
            printf("The position of c in the string is %.d\n", i + 1);
        }
    }

    return 0;
}
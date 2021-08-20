#include <stdio.h>
#include <ctype.h>

int isAlpha(char *str)
{
    while (*str != '\0')
    {
        if (isalpha(*str))
            return 1;
        str++;
    }
    return 0;
}
void main()
{
    char string[100];
    printf("String: ");
    gets(string);
    (isAlpha(string) == 1) ? printf("It constain alphabet.") : printf("It doesn't contain alphabets.");
}
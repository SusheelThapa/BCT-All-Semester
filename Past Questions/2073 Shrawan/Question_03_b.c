#include <stdio.h>
#include <string.h>

void main()
{
    char string[] = "Programming";
    int length = strlen(string), i = 0, j = 0;
    while (length != 0)
    {
        j = 0;
        for (; (i + j) < length; j++)
        {
            printf("%c", string[i + j]);
        }
        printf("\n");
        i++;
        length--;
    }
}
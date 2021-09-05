/*
Write a program to find the frequency of the character in the string enter by the user
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    char ch;
    int i = 0, count = 0;

    system("cls");

    printf("Enter the string:: ");
    gets(string);

    printf("Character Frequency:: ");
    scanf("%c", &ch);

    while (string[i] != '\0')
    {
        if (string[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("Frequency of the character %c is %d.", ch, count);

    getch();
    return 0;
}
/*
Write a program to find the frequency of the characters in the string enter by the user
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Frequency
{
    char alphabet;
    int count;

} Character[26];

int main()
{
    char string[100];
    int i = 0, number_of_character = 0;

    system("cls");

    printf("Enter the string::\n");
    gets(string);

    while (string[i] != '\0')
    {
        if (i == 0)
        {
            Character[0].alphabet = string[i];
            Character[0].count = 1;
            number_of_character++;
            goto Last;
        }

        for (int j = 0; j < number_of_character; j++)
        {
            if (string[i] == Character[j].alphabet)
            {
                Character[j].count++;
                goto Last;
            }
        }

        Character[number_of_character].alphabet = string[i];
        Character[number_of_character].count = 1;
        number_of_character++;
    Last:
        i++;
    }

    printf("%-15s%-15s\n", "Character", "Frequency");

    for (i = 0; i < number_of_character; i++)
    {
        printf("%-15c%-15d\n", Character[i].alphabet, Character[i].count);
    }

    getch();
    return 0;
}
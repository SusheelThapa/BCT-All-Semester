/*
Write a program that reads string and arranged it in alphabetical order
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void arrangeAlphabetical(char string[])
{
    "Arrange the string in alphabetical order. Use bubble sort algorithm";

    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < strlen(string); j++)
        {
            /*Below if will convert first character to lower and then compare so the ascending order is arranged*/
            if (((int)tolower(string[i]) - (int)tolower(string[j])) < 0)
            {
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}

int main()
{
    /*Varaible Declaration*/
    char string[100];

    system("cls");

    /*Taking input*/
    printf("String: ");
    scanf("%[^'\n']", string);

    /*Arranging String*/
    arrangeAlphabetical(string);

    /*Printing result*/
    printf("Arranged String is %s", string);

    getch();
    return 0;
}
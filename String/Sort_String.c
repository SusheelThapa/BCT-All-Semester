/*
Write a program to sort the string ascending order
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sortName(char string[][100])
{
    "Sorting ascending order using bubble sort algorithm";

    char temp[100];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(string[j], string[j + 1]) > 0)
            {
                strcpy(temp, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp);
            }
        }
    }
}

int main()
{
    /*Declaration of variable*/
    char string[5][100];

    system("cls");

    /*Taking value of name*/
    for (int i = 0; i < 5; i++)
    {
        printf("Name:");
        gets(string[i]);
    }
    /*Function call*/
    sortName(string);

    /*Printing the sorted name*/
    for (int i = 0; i < 5; i++)
    {
        puts(string[i]);
    }

    getch();
    return 0;
}
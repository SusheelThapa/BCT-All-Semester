/*
Write the following program , observe the output and comment on it
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    /*Variable Declaration and Initialization*/
    int i;
    char name1[] = "pokhara city";
    char name2[] = {'k', 'a', 't', 'm', 'a', 'n', 'd', 'u', '\0'};

    system("cls");

    /*Prints the name 1 in vertical manner*/
    for (i = 0; i < strlen(name1); i++)
    {
        printf("%c\n", name1[i]);
    }

    /*Prints the name 2 in horizontal way with a gap of one tab*/
    for (i = 0; i < strlen(name2); i++)
    {
        printf("%c\t", name2[i]);
    }

    getch();
}
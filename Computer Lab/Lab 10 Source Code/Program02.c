/*
Write a program whether the string enter by the user is Pallindrome or not
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Variable Declaration*/
    char string[100], rev_string[100];

    system("cls");

    /*Taking string*/
    printf("String: ");
    scanf("%[^'\n']", string);

    /*Copy string to new variable and reversing it*/
    strcpy(rev_string, string);
    strrev(rev_string);

    /*Condtion of pallindrome*/
    if (strcmp(rev_string, string) == 0)
    {
        printf("String is pallindrome.\n");
    }
    else
    {
        printf("String isn't pallindrome.\n");
    }
    
    getch();
    return 0;
}

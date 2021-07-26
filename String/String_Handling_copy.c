#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 500

int main()
{
    char string_one[MAX_LIMIT], string_two[MAX_LIMIT];

    system("cls");

    printf("String One: ");
    gets(string_one);

    system("cls");

    printf("Data is string two is ", strcpy(string_two, string_one));
    
    getch();
    return 0;
}
/*This example illustrate different format specifier for printing character*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char ch = 'a';
    system("cls");
    printf("\nCase 1: %c", ch);
    printf("\nCase 2: %10c", ch);
    printf("\nCase 3: %-10c", ch);
    
    getch();
    return 0;
}
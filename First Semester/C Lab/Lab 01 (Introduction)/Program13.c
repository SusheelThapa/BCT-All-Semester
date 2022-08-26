
/* Write a program to read a character and display it.*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main()
{
    char x;
    system("cls");
    printf("Enter a character: ");
    scanf("%c", &x);
    printf("\n\nThe character you entered is: %c", x);
    getch();
}

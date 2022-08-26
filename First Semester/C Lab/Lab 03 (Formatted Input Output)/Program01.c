/*Write a program to read a character using getch()/getchar() and display using putch()/putchar()*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char a_getch, a_getchar;

    system("cls");

    printf("Enter another character: ");
    a_getchar = getchar();
    printf("Enter any character: ");
    a_getch = getch();  /*This getch wonot be display in termianl as you type*/

    printf("\nValue taken via getchar is ");
    putchar(a_getchar);
    printf("\nValue taken via getch is ");
    putchar(a_getch);

    getch();
    return 0;
}
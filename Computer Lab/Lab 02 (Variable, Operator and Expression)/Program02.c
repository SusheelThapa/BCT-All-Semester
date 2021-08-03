/*A program to illustrate prefix increment operator*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 5, v;

    system("cls");

    v = ++x * ++x + ++x;

    printf("v = %d, x = %d", v, x);

    printf("Press any key to exit...");

    getch();
}
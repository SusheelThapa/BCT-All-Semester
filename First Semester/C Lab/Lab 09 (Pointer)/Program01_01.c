/*
Run the following program and see the output
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    system("cls");

    printf("The address of a is %u.\n", &a);
    printf("The address of b is %u.", &b);
    getch();
    return 0;
}
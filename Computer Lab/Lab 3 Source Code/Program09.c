/*This example illustrates different format specfications for reading integers numbers*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    system("cls");

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The read and stored value of a is %d\n\n", a);

    printf("Enter another integers number: ");
    scanf("%3d", &b);

    printf("The read and stored value of b is %d\n", b);

    getch();
    return 0;
}
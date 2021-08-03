/*Write a program to swap value of two variable*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    system("cls");

    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    system("cls");

    printf("BEFORE SWAP\n\n");
    printf("Value of a: %d \n", a);
    printf("Value of b: %d \n", b);

    c = a;
    a = b;
    b = c;

    printf("\nAFTER SWAP\n\n");
    printf("Value of a: %d \n", a);
    printf("Value of b: %d \n", b);

    printf("Press any key to exit...");

    getch();
    return 0;
}
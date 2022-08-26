/*Program to read the three different integer from the user and display the largest among number them*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, l;

    system("cls");

    printf("Enter the three different number: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && b > c)
    {
        l = a;
    }
    else if (b > c)
    {
        l = b;
    }
    else
    {
        l = c;
    }

    printf("Largest: %d", l);

    printf("Press any key to exit...");

    getch();
}
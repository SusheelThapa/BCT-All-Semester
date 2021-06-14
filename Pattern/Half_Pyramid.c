/*
    Program to print pyramid pattern using stars or Pyramid star patterns.
    For any given number n, print various pyramid star patterns.
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    For n = 6;
    Half Pyramid Star Pattern
        *
        **
        ***
        ****
        *****

    Half inverted Pyramid
        *****
        ****
        ***
        **
        *

    Full Pyramid

            *
           * *
          * * *
         * * * *
        * * * * *
    Full Inverted Pyramid
        * * * * *
         * * * *
          * * *
           * *
            *

*/

/*Below function maintain the space*/
void spaces(int space)
{
    while (space != 0)
    {
        printf(" ");
        space--;
    }
}

int main()
{
    int n;
    system("cls");
    printf("PYRAMID STAR\n\n");
    printf("Value of n : ");
    scanf("%d", &n);

    printf("Half Pyramid\n\n");
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Invert Half Pyramid\n\n");
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Full Pyramid\n");
    for (int i = 0; i <= n; i++)
    {

        spaces(n + 1 - i); /*To maintain the spaces*/
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nFull Inverted Pyramid\n");
    for (int i = n; i >=0; i--)
    {

        spaces(n + 1 - i); /*To maintain the spaces*/
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
/*You can do with other logic also */
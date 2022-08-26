/*/*Write a program using recursive function to compute series 1^2-2^2 +3^2 ..................(-1)^(n+1).n^2
You cannot use pow function*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function declaration*/
float series(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n % 2 == 1) ? (n * n + series(n - 1)) : (-1 * n * n + series(n - 1));
    }
}

int main()
{
    /*Variable declaration*/
    int n;

    system("cls");/*Clear the screen*/

    /*Taking user input*/
    printf("Value of n: ");
    scanf("%d", &n);

    /*Output*/
    printf("\nValue of series is %f.", series(n));
    
    getch();
    return 0;
}
/*Compute x^n*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Fucnction definition and declaration*/
int powerOfBase(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * powerOfBase(base, power - 1);
    }
}

int main()
{
    /*Variable declaration*/
    int x, n;

    system("cls");/*Clear the screen*/

    /*Taking user input*/
    printf("Value of x: ");
    scanf("%d", &x);
    printf("Value of n: ");
    scanf("%d", &n);

    /*Meaningful Output*/
    printf("\nValue of %d^%d is %d", x, n, powerOfBase(x, n));
    
    getch();
    return 0;
}
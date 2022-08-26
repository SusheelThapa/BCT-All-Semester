/*HCF of number*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function defination and declaration*/
int HCF(int a, int b)
{

    /*Below if just swap the value of a and b.For more clarity, once look Swap_two_numbers.c*/
    if (a < b)
    {
        b = a + b - (b = a);
    }

    /*Termination condition of recursion*/
    if (b == 0)
    {
        return a;
    }

    /*Declaration of variable*/
    int quotient;
    int remainder;

    /*Explained Above*/
    quotient = a / b;
    remainder = a - quotient * b;

    /*Calling to it self*/
    HCF(b, remainder);
}


int main()
{
    /*Variable declaration*/
    int a, b;

    system("cls");/*Clear the screen*/

    /*Taking input*/
    printf("Number One: ");
    scanf("%d", &a);
    printf("Number Two: ");
    scanf("%d", &b);

    /*Meaningful result*/
    printf("HCF of %d and %d is %d", a, b, HCF(a, b));

    getch();
    return 0;
}
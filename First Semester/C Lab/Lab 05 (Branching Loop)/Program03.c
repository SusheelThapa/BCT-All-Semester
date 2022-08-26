/*Write  a program to display the sum of even numbers from 1 to n(n is an unsigned integer)*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    int sum_of_even;

    system("cls");
    printf("Value of n: ");
    scanf("%u", &n);
    for (int i = 1; i <= n; i++)
    {

        if ((i % 2) == 0)
        {
            sum_of_even = sum_of_even + i;
        }
    }
    printf("\nSum of even number from 1 to %d is %d",n, sum_of_even);
    getch();
    return 0;
}
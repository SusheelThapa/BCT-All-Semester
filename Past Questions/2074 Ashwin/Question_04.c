#include <stdio.h>

int fibbo(int n)
{
    if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    return fibbo(n - 1) + fibbo(n - 2);
}

int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int n;

    printf("Nth position of fibonacci series: ");
    scanf("%d", &n);

    if (prime(fibbo(n)) == 1)
    {
        printf("The number in fibbonacci is prime number.");
    }
    else
        printf("The number in fibbonacci isn't prime number.");
}
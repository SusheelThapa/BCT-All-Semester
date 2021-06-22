/*Program to print the pascal triangle works upto the value of 21*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// #include<time.h>
/*
Logic of code:

WE use here method od binomial expansion:
we use here two funtion factorial and comibiantion(that use factorial to calculate combination)

            1C0
        1C0     1C1
    2C0     2C1    2C2
    .       .       .
    .       .       .
    .       .       .
    .       .       .
    .       .       .
    .       .       .
*/
long long int Factorial(long long int n)
{
    long long int fact;
    if (n == 1 || n == 0)
    {
        return 1;
    }

    fact = n * Factorial(n - 1);
    return fact;
}
long long int combination(long long int upValue, long long int downValue)
{
    long long int upFactorial = Factorial(upValue);
    long long int downOneFactorial = Factorial(downValue);
    long long int downTwoFactorial = Factorial(upValue- downValue);
    return upFactorial / (downOneFactorial * downTwoFactorial);
}
long long int main()
{
    // clock_t start, end;
    // start = clock();
    long long int number;
    system("cls");
    printf("Value of number: ");
    scanf("%lld", &number);

    for (long long int i = 0; i < number; i++)
    {
        for (long long int k = (number-i); k > 0;k--){
            printf("  ");
        }
            for (long long int j = 0; j <= i; j++)
            {
                printf("%2lld  ", combination(i, j));
            }
        printf("\n");
    }
    // end = clock();
    // printf("Time of execution is %f", ((double)(end - start)) / CLOCKS_PER_SEC);
    getch();
    return 0;
}
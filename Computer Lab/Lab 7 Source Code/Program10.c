/*Value of sinx*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function declaration*/
double factorial(double n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double powerOfBase(double base, double power)
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

double sinX(double x, double n)
{
    if ((int)n == 1)
    {
        return x;
    }
    else
    {
        return ((int)n % 2 == 1)
                   ? (
                         ((int)n % 10 == 3 || (int)n % 10 == 7)
                             ? (
                                   -1.0 * powerOfBase(x, n) / factorial(n) + sinX(x, n - 1))
                             : (
                                   (powerOfBase(x, n) / factorial(n) + sinX(x, n - 1))))
                   : (sinX(x, n - 1));
    }
}

double main()
{
    /*Variable declaration*/
    double x, n;
    system("cls");

    /*Taking input*/
    printf("Value of X in radian: ");
    scanf("%lf", &x);
    printf("Value of N: ");
    scanf("%lf", &n);

    /*Outout*/
    printf("Sinx  =  %lf\n", sinX(x, n));

    getch();
    return 0;
}
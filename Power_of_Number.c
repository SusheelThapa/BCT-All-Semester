/*
    Program to find the power of number provided by the user without use of pow function
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    We take the base value and power value from user;
    then we iterate for power times and each time we multiply the base value
    In code:
        for (int i = 1; i<=power;i++){
            value = base * value;  -->Intial value of value is 1 as anything multiply to 1 i same.
        }
        for base = 5  power = 2
            i               value
            1                 5
            2               5 * 5
*/

/*Function explained above*/
long long int powerOfNumber(int base, int power)
{
    long long int value = 1;
    for (int i = 1; i <= power; i++)
    {
        value = base * value;
    }
    return value;
}

int main()
{
    /*Variable Declaration*/
    int base, power;
    long long int value;

    system("cls"); /*Clear the terminal*/

    /*Taking user input value*/
    printf("Value of Base : ");
    scanf("%d", &base);
    printf("Value of Power : ");
    scanf("%d", &power);

    system("cls");

    value = powerOfNumber(base, power); /*Calling function and storing value in value*/

    /*Printing all the value*/
    printf("Base : %d\n", base);
    printf("Power : %d\n\n", power);
    printf("Value : %lld", value);

    getch();
    return 0;
}
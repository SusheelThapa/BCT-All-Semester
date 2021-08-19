#include <stdio.h>

int armstrong(int number)
{
    if (number == 0)
        return 0;
    return (number % 10) * (number % 10) * (number % 10) + armstrong(number / 10);
}

void main()
{
    int number;

    printf("Number :  ");
    scanf("%d", &number);

    (number == armstrong(number)) ? printf("Armstrong") : printf("Not armstrong");
}
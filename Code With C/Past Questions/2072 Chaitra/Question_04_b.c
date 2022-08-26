#include <stdio.h>

void main()
{
    int number, sum = 0;
    printf("Number: ");
    scanf("%d", &number);

    for (int i = 0; i < number;)
    {
        sum = sum + (number % 10);
        number /= 10;
    }
    printf("Sum of digits i %d", sum);
}
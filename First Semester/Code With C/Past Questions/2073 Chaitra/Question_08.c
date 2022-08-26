#include <stdio.h>
#include <math.h>

void main()
{
    float x, cos = 0;
    int n, sign = -1;

    printf("Value of x and n : ");
    scanf("%f%d", &x, &n);

    for (int i = 0; i < n; i++)
    {
        cos = cos + (sign *= -1) * pow(x, i * 2) / tgamma(i * 2 + 1);
    }

    printf("\n The value of cos%.2f is %f", x, cos);
}
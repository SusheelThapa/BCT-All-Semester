/*(1^2 + 2^2)/2, (2^2 + 3^2)/3,........*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("\nSequence is :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("(%d^2 + %d^2)/%d  ", i, i + 1, i + 1);
    }

    printf("\n\nRespective Value is :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%.3f ", (pow(i, 2) + pow(i + 1, 2)) / (i + 1));
    }
    getch();
    return 0;
}
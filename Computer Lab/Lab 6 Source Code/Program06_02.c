/*1-1/1!+1/2!-1/3!......................(-1)^n/(n-1)!, n =0,1,2,3......*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);

    printf("\n\nSequence is :\n");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("1/(%d)! ", (i - 1));
        }
        if (n == i)
        {
            break;
        }
        else
        {
            if (pow(-1, i) > 0)
            {
                printf(" + ");
            }
            else
            {
                printf(" - ");
            }
        }
    }

    printf("\nRespective Value :\n");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1");
        }
        else
        {
            printf("%.4f ",( (float)1 / tgamma(i)));
        }
        if (n == i)
        {
            break;
        }
        else
        {
            if (pow(-1, i) > 0)
            {
                printf(" + ");
            }
            else
            {
                printf(" - ");
            }
        }
    }
    getch();
    return 0;
}
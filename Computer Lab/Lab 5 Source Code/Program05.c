/*Write a program to read a integer and compute its factorial and display appropriate message if its factorial cannot be completed*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float n;
    int factorial = 1;
    system("cls");
    printf("Value of n: ");
    scanf("%f", &n);
    
    if ((n - (int)n) == ((float)2-2))
    {
        if (n > 0)
        {
            if (n == 0 || n == 1)
            {
                printf("\nFactorial is %d", 1);
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    factorial = factorial * i;
                }
                printf("\nFactorial is %d.", factorial);
            }
        }
        else
        {
            printf("Expected: Positive Integer\nGiven: Negative Integer\n");
        }
    }
    else
    {
        printf("Expected: Integer\nGiven: floating number.");
    }

    getch();
    return 0;
}
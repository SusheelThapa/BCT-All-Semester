/*Write a program to read  number and check whether it is prime or not*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int number, i;
    system("cls");


    printf("Enter the positive integer: ");
    scanf("%d", &number);

    i = number - 1;

    if (number == 0 || number == 1)
    {
        printf("It is neither prime nor composite.");
    }
    else
    {
        for (; i; i--)
        {

            if (!(i == 0 || i == 1))

            {
                if (number % i == 0)
                {
                    printf("Composite Number\n");
                    break;
                }
            }
            else
            {
                printf("Prime Number");
            }
        }
    }

    getch();
    return 0;
}
/*Write a program to read a unsigned integer and check whether the number is odd or even.If it is even , check whether it is greater than 100 or not and Display the message. If the number is odd, check whether it is divisible by 11 but by 7 and display the appropriate message */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    system("cls");
    printf("Enter any number: ");
    scanf("%u", &number);

    printf("\nNumber : %u", number);

    if (number % 2 == 0)
    {
        printf("\nNumber is even number.");
        if (number > 100)
        {
            printf("\nNumber is greater than 100.");
        }
    }
    else
    {
        printf("\nNumber is odd number.");
        if (number % 11 == 0)
        {
            printf("\nNumber is divisible by 11.");
        }
        else
        {
            printf("\nNumber isn't divisible by 11.");
        }
        if (number % 7 == 0)
        {
            printf("\nNumber is divisible by 7.");
        }
        else
        {
            printf("\nNumber isn't divisible by 7.");
        }
    }
    getch();
    return 0;
}

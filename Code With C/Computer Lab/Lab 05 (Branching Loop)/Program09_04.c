/*Write a program to read  two number and check whether it is twin prime or not*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    int twin_number1 = 1, twin_number2 = 1;

    float n1, n2;

    system("cls");

    printf("Number one: ");
    scanf("%d", &number1);
    printf("Number two: ");
    scanf("%d", &number2);
    //Formula Method
    /*if (number1 > 2 && number2 > 2)
    {
        if ((number1 == 3 && number2) == 5 || (number2 == 3 && number1 == 5))
        {
            printf("It is twin number.");
        }
        else
        {
            if (number1 > number2)
            {
                n1 = (number1 - 1) / 6.0;
                n2 = (number2 + 1) / 6.0;
            }
            else
            {
                n1 = (number2 - 1) / 6.0;
                n2 = (number1 + 1) / 6.0;
            }

            if (n1 == n2)
            {
                printf("It is twin prime number.");
            }
            else
            {
                printf("It isn't twin prime number.");
            }
        }
    }
    else
    {
        printf("It isn't twin prime number");
    }
    */

    // Looping method
    if (number1 == 1 || number2 == 1 || number1 == 1 || number2 == 1)
    {
        printf("\nIt isn't twin number.");
        getch();
        exit(0);
    }
    if ((number1 - number2) == 2 || (number2 - number1) == 2)
    {
        for (int i = 2; i < number1; i++)
        {
            if (number1 % i == 0)
            {
                twin_number1 = 0;
                break;
            }
        }

        for (int i = 2; i < number2; i++)
        {
            if (number2 % i == 0)
            {
                twin_number2 = 0;
                break;
            }
        }
        if (twin_number1 == 1 && twin_number2 == 1)
        {
            printf("\nIt is twin number");
        }
        else
        {
            printf("\nIt isn't twin number.");
        }
    }
    else
    {
        printf("\nIt isn't twin prime number.");
    }
    getch();
    return 0;
}
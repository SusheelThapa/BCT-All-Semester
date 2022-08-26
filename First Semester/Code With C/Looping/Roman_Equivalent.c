/*Program to calculate Roman Equivalent valid from 1 to 3999*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int year;
    int thousand, hundred, ten, one;
    system("cls");

    printf("Integer value: ");
    scanf("%d", &year);

    one = year % 10;
    ten = (year = (year / 10)) % 10;
    hundred = (year = (year / 10)) % 10;
    thousand = (year = (year / 10)) % 10;

    printf("Equivalent Roman: ");

    //Logic for thousand place number
    if (thousand <= 3000)
    {
        for (int i = 0; i < thousand; i++)
        {
            printf("M");
        }
    }

    //Logic for hundred place number
    if (hundred < 5)
    {
        if (hundred <= 3)
        {
            for (int i = 0; i < hundred; i++)
            {
                printf("C");
            }
        }
        else
        {
            printf("CD");
        }
    }
    else if (hundred == 5)
    {
        printf("D");
    }
    else if (hundred > 5)
    {
        if (hundred <= 8)
        {
            printf("D");
            for (int i = 0; i < hundred - 5; i++)
            {
                printf("C");
            }
        }
        else
        {
            printf("CM");
        }
    }


    //Logic of ten place number
    if (ten < 5)
    {
        if (ten <= 3)
        {
            for (int i = 0; i < ten; i++)
            {
                printf("X");
            }
        }
        else
        {
            printf("XL");
        }
    }
    else if (ten == 5)
    {
        printf("L");
    }
    else if (ten > 5)
    {
        if (ten <= 8)
        {
            printf("L");
            for (int i = 0; i < ten - 5; i++)
            {
                printf("X");
            }
        }
        else
        {
            printf("XC");
        }
    }


    //Logic for one place
    if (one < 5)
    {
        if (one <= 3)
        {
            for (int i = 0; i < one; i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IV");
        }
    }
    else if (one == 5)
    {
        printf("V");
    }
    else if (one > 5)
    {
        if (one <= 8)
        {
            printf("V");
            for (int i = 0; i < one - 5; i++)
            {
                printf("I");
            }
        }
        else
        {
            printf("IX");
        }
    }

    getch();
    return 0;
}
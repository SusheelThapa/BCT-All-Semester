/*Write  a program to read an unsigned integer array from main and pass it to a function that count armstrong members and return the count to main()*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int armstrongArray(int num[])
{
    int count = 0, armstrong = 0, n, rem;

    for (int i = 0; i < 5; i++)
    {
        n = num[i];
        if (n == 0)
        {
            count++;
        }
        else
        {

            while (n != 0)
            {
                rem = n % 10;
                armstrong = n * n * n + armstrong;
                if (num[i] == armstrong)
                {
                    count++;
                }
                n = n / 10;
            }
            armstrong = 0;
        }
    }

    return count;
}

int main()
{
    unsigned int num[5];
    system("cls");

    printf("Enter the members of array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Count of armstrong number is %d", armstrongArray(num));
    getch();
    return 0;
}
/*Write a program to read two integer(n1 and n2, both positive and n1<n2) fromthe user amd display the prime and palidrome number between n1 and n2.Display their count also*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    unsigned int n1, n2, prime_count = 0, remainder, reverse=0, copy_number, pallidrome_count = 0,number;

    system("cls");

    printf("Value of n1: ");
    scanf("%u", &n1);
    printf("Value of n2: ");
    scanf("%u", &n2);

    for (int number  = n1; number <= n2; number++)
    {
        //Count the prime number
        int i = number - 1;

        if (number == 0 || number == 1)
        {
        }
        else
        {
            for (; i; i--)
            {

                if (!(i == 0 || i == 1))

                {
                    if (number % i == 0)
                    {
                        break;
                    }
                }
                else
                {
                    prime_count++;
                }
            }
        }

        //Pallidrome Number
        copy_number = number;
        while (copy_number != 0)
        {
            remainder = copy_number % 10;
            reverse = reverse * 10 + remainder;
            copy_number = copy_number / 10;
        }
        if (number == reverse)
        {
            pallidrome_count++;
        }
        else
        {
        }
        reverse = 0;
    }
    printf("\nFrom %d to %d\n", n1, n2);
    printf("Number of prime is %d\n", prime_count);
    printf("Number of paliidrome number is %d\n", pallidrome_count);
    getch();
    return 0;
}
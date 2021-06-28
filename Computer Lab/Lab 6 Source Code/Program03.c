/*Write a program to read two integer(n1 and n2, both positive and n1<n2) fromthe user amd display the prime and palidrome number between n1 and n2.Display their count also*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable Declaration*/
    unsigned int n1, n2, prime_count = 0, remainder, reverse = 0, copy_number, pallidrome_count = 0, number;

    system("cls"); /*Clear the screen*/

    /*Taking user input*/
    printf("Value of n1: ");
    scanf("%u", &n1);
    printf("Value of n2: ");
    scanf("%u", &n2);

    /*For loop that iterate from n1 to n2*/
    for (int number = n1; number <= n2; number++)
    {
        //Count the prime number: Code copy from Lab 5 Program09_03.c
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

        //Count the pallidrome Number: Code Copy from previous Lab 5 Program09_01.c
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

    /*Prints meaningful Result*/
    printf("\nFrom %d to %d\n", n1, n2);

    printf("Number of prime is %d\n", prime_count);

    printf("Number of paliidrome number is %d\n", pallidrome_count);

    getch(); /*Waits till a pressed */
    return 0;
}
/*
Logic of code:
We are given two number n1 =3 and n2=19 to check the numbers of prime number and pallindrome number found between then

Core idea: 
    We just iterate from n1 t n2 using for loop and check each number whether it is prime or composite
    
    Code to check prime and pallidrome is import from previous lab five Programs No 9.3 and  9.1

    If found prime we just increase prime_count by +1 and if found pallidrome we increase palli_count by +1

    In this way we count the prime number and composite between n1 and n2

*/
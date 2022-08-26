/*Write a program to read an unsigned integer in main() pass it to function.(void countsDigits(int*,int *);). This function counts the number of odd and even digits in it. Display the count from main. Use concept of passing argument by refrence*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function definition*/
void countsDigits(int *, int *);

int main()
{
    /*Variable declaration*/
    int digits, even_count = 0, odd_count = 0;

    system("cls");/*Clear the screen*/

    /*Taking input*/
    printf("Number: ");
    scanf("%d", &digits);

    even_count = digits;

    /*Function call*/
    countsDigits(&even_count, &odd_count);

    /*Meaningful result*/
    printf("\nEven Digits: %d\n", even_count);
    printf("Odd  Digits: %d", odd_count);

    getch();
    return 0;
}

/*Function Body*/
void countsDigits(int *e, int *o)
{
    int number = *e;
    *e = 0;
    int even = 0, odd = 0;
    while (number != 0)
    {
        if (number % 2 == 0)
        {
            even++;
        }
        else if (number % 2 == 1)
        {
            odd++;
        }
        number /= 10;
    }
    *e = even;
    *o = odd;
}
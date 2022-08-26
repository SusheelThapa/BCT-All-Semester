/*Write a program to check a function void check_prime(): The Task of this program is to read a number and check whether the number is prime or not and display the appropriate message. Be sure that a real number cannot be either prime or composite.What about negative number*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function*/
void check_prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("\nIt is compostite number");
            exit(0);
        }
    }
    printf("\nIt is prime number");
}

int main()
{
    /*Variable Declaration*/
    int number;

    system("cls");/*clear the screen*/

    /*Taking input*/
    printf("Number: ");
    scanf("%d", &number);

    check_prime(number);/*Function call*/
    
    getch();
    return 0;
}
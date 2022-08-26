/*Write a program to count and find the sum of all the number in the array which are exactly divisible by 7 but not by 5*/


/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable and Array declaration*/
    int number_array[5], sum = 0;

    system("cls"); /*Clear the screen*/

    /*Taking input in array*/
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d number: ", i + 1);
        scanf("%d", &number_array[i]);
    }

    /*Iterating over the loop*/
    for (int i = 0; i < 5; i++)
    {
        /*If condtion according to question*/
        if (number_array[i] % 7 == 0 && number_array[i] % 5 != 0)
        {
            sum = sum + number_array[i];
        }
    }

    /*Meaningful output*/
    printf("\nSum of number divisible by 7 not by 5 is  %d", sum);

    getch(); /*Waits till user press a key*/
    return 0;
}
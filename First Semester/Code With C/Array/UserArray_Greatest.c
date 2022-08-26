/*Write a program to find largest element in array provided by user*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Declaration of variable*/
    int largest;
    int number_array[5];

    system("cls");/*Clear the screen*/

    /*Taking input in array*/
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d number: ", i + 1);
        scanf("%d", &number_array[i]);
    }

    /*Just taking first number as largest so that it helps us to compare with other number in array*/
    largest = number_array[0];

    /*Iterating over array and comparing each element to find the greatest*/
    for (int i = 1; i < 5; i++)
    {
        if (largest < number_array[i])
        {
            largest = number_array[i];
        }
    }

    /*Meaningful result*/
    printf("Largest Number in your given number is %d", largest);

    getch();/*Waits till a character in pressed*/
    return 0;
}
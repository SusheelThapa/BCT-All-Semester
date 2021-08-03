/*Write a program to create a function float add(int ,float). The task of this function is to calculate the sum of passed value and return it to the calling function. Call this function from main() and display result*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function defination*/
float add(int, float);

int main()
{
    /*Variable Declaration*/
    int number_one;
    float number_two, sum;

    system("cls"); /*Clear the Screen*/

    /*Taking input*/
    printf("Number one:");
    scanf("%d", &number_one);
    printf("Number two:");
    scanf("%f", &number_two);

    /*Function call*/
    sum = add(number_one, number_two);

    /*Desplay the result*/
    printf("\nAddition of %d and %.2f is %.2f", number_one, number_two, sum);

    getch(); /*Waits till a character is pressed*/
    return 0;
}

/*Function body*/
float add(int a, float b)
{
    return (float)a + b;
}
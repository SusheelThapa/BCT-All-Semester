/*
Write a program to add the elements at the corresponding position of two array of size n. Read value of n from user
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "../Array.c" /*External file which contian related to one d array*/

int main()
{
    /*Declaration of needed varaible*/
    int number1[100], number2[100], number[100], size;

    system("cls");

    /*Asking the size of array*/
    printf("Size of the array: ");
    scanf("%d", &size);

    /*Taking input of array one and array two*/
    printf("\nArrray one:\n");
    inputOneDArray(number1, size);

    printf("\nArray Two:\n");
    inputOneDArray(number2, size);

    /*Adding both element of array*/
    for (int i = 0; i < size; i++)
    {
        number[i] = number1[i] + number2[i];
    }

    /*Displaying result*/
    printf("\nSum of Two Array:\n");
    displayOneDArray(number, size);

    getch();
    return 0;
}
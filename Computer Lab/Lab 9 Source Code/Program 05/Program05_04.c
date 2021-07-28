/*Write a program to add the elements at the corresponding position of two array of size n. Read value of n from user*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable and pointer declaration*/
    int number1[100], number2[100], number[100], size;
    int *one, *two, *zero;

    /*Pointer initialization*/
    one = number1;
    two = number2;
    zero = number;

    system("cls");

    printf("Size of the array: ");
    scanf("%d", &size);

    /*Taking input*/
    printf("\nArrray one:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", (one + i));
    }

    printf("\nArray Two:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", (two + i));
    }

    /*Calculating sum*/
    for (int i = 0; i < size; i++)
    {
        *zero = *one + *two;
        zero++;
        one++;
        two++;
    }

    //Taking pointer base address to base ko array base address
    zero -= size;
    one -= size;
    two -= size;

    /*Printing result*/
    printf("\nSum of Two Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(zero + i));
    }

    getch();
    return 0;
}
/*Write a program to raise the power of each member by 3*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Declaration of variable*/
    int i, num[5];

    system("cls");

    /*Taking input from user*/
    printf("Enter the members of array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    /*Raising the value of each element to power of 3 of respective element*/
    for (int i = 0; i < 5; i++)
    {
        num[i] = num[i] * num[i] * num[i];
    }

    /*Printing the new array(raised by 3)*/
    printf("\nNew Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    getch();
    return 0;
}
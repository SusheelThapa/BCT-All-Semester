/*Write a program find the sum of elements of an integers array of size 5 that are divisible by 10 not by 15*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    /*Declaration of variable*/
    int i, num[5], sum = 0;

    system("cls");

    /*Taking input from user*/
    printf("Enter the members of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    /*Check the condition of every number and adding them if they meet condition asked by question*/
    for (int i = 0; i < 5; i++)
    {
        (num[i] % 10 == 0 && num[i] % 15 != 0) ? (sum = num[i] + sum) : (sum = sum);
    }

    /*Printing the result*/
    printf("The sum of number present in the array divisible by 10 not by 15 is %d",sum);
   

    getch();
    return 0;
}
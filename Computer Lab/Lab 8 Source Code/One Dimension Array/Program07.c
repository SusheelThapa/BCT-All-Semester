/*Write a program to raise the power of each member by 3*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[5];

    system("cls");

    printf("Enter the members of array: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        num[i] = num[i] * num[i] * num[i];
    }

    printf("\nNew Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    getch();
    return 0;
}
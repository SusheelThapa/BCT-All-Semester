/*
Write,observe and study the following code
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[6];

    system("cls");

    printf("Enter the members of array: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }

    getch();
    return 0;
}
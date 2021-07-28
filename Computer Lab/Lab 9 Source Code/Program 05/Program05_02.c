#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[6];
    int *ptr;

    ptr = num;

    system("cls");

    printf("Enter the members of array: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr + i));
    }

    getch();
    return 0;
}
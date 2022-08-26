#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num[5], sum = 0;
    int *ptr;

    ptr = num;

    system("cls");

    printf("Enter the members of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < 5; i++)
    {
        (*(ptr + i) % 10 == 0 && *(ptr + i) % 15 != 0) ? (sum = *(ptr + i) + sum) : (sum = sum);
    }

    printf("The sum of number present in the array divisible by 10 not by 15 is %d", sum);

    getch();
    return 0;
}
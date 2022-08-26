#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[5], lowest, highest;
    int *ptr;

    ptr = &num[0];

    system("cls");

    printf("Enter the members of array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }

    lowest = num[0];
    highest = num[0];

    for (int i = 1; i < 5; i++)
    {
        (lowest < *(ptr + i)) ? (lowest = lowest) : (lowest = *(ptr + i));
        (highest > *(ptr + i)) ? (highest = highest) : (highest = *(ptr + i));
    }

    printf("\nHighest Number is %d\n", highest);
    printf("Lowest Number is %d", lowest);

    getch();
    return 0;
}
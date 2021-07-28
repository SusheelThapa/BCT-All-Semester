#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num[5];
    int *num_ptr;

    num_ptr = &num[0];

    system("cls");

    printf("Enter the members of array: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (num_ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        *(num + i) = *(num + i) * *(num + i) * *(num + i);
    }

    printf("\nNew Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(num + i));
    }

    getch();
    return 0;
}
#include <stdio.h>

int secondLarge(int *num)
{
    int temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (*(num + i) > *(num + j))
            {
                *(num + i) = *(num + i) + *(num + j) - (*(num + j) = *(num + i));
            }
        }
    }

    return *(num + 1);
}
void main()
{
    int number[10];

    printf("Enter all the number: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("Second largest number is %d", secondLarge(number));
}
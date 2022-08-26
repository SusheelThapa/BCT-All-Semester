/*
Write a progrma to pass a array to the fucntion and sort them.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sort_array(int numbers[100], int length)
{

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (numbers[i] < numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}
int main()
{
    int numbers[] = {1, 2, 3, 46, 342, 234, 1, 645, 72, 24, 16, 136, 8, 5, 7, 3, 3, 45, 227, 84, 43, 6, 34, 62, 36, 25, 7, 47, 84, 8, 97, 4, 784, 76, 747, 6, 4, 74, 5};

    sort_array(numbers, 39);

    for (int i = 0; i < 39; i++)
    {
        printf("%d \n", numbers[i]);
    }

    getch();
    return 0;
}
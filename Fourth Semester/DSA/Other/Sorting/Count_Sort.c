#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

int maximum(int *array, int size)
{
    int large = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (large < array[i])
        {
            large = array[i];
        }
    }
    return large;
}

void countSort(int *array, int size)
{
    int large = maximum(array, size);
    int j = 0;

    int *count = (int *)calloc(sizeof(int), large + 1);

    for (int i = 0; i < size; i++)
    {
        count[array[i]] += 1;
    }

    for (int i = 0; i < large + 1; i++)
    {
        if (!(count[i] == 0))
        {

            while (count[i] != 0)
            {
                count[i] -= 1;
                array[j] = i;
                j++;
            }
        }
    }
}

int main()
{
    int a[] = {7, 6, 5, 4, 3, 2, 1};
    int size = 7;

    printArray(a, size);
    countSort(a, size);
    printArray(a, size);

    return 0;
}
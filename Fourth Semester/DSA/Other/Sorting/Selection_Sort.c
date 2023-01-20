#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

void selectionSort(int *a, int size)
{
    int minimum, j, minimum_index;

    for (int i = 0; i <= size - 1; i++)
    {
        minimum = a[i];
        minimum_index = i;

        j = i + 1;

        for (; j < size; j++)
        {
            if (a[j] < minimum)
            {
                minimum = a[j];
                minimum_index = j;
            }
        }

        a[minimum_index] = a[i];
        a[i] = minimum;
    }
}

int main()
{
    int a[] = {1, 6, 5, 3, 8, 2, 9};
    int size = 7;

    printArray(a, size);
    selectionSort(a, size);
    printArray(a, size);
    return 0;
}
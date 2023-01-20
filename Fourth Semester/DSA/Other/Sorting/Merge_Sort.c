#include <stdio.h>
#include <stdlib.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

void merge(int *array, int low, int mid, int high)
{
    int *merged = (int *)malloc(sizeof(int) * (high+1));

    int i, j, k;

    i = k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (array[i] < array[j])
        {
            merged[k++] = array[i++];
        }
        else
        {
            merged[k++] = array[j++];
        }
    }

    while (i <= mid)
    {
        merged[k++] = array[i++];
    }

    while (j <= high)
    {
        merged[k++] = array[j++];
    }

    for (int i = low; i <= high; i++)
    {
        array[i] = merged[i];
    }
}

void mergeSort(int *array, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);

        merge(array, low, mid, high);
    }
    else
    {
        return;
    }
}

int main()
{
    int a[] = {7,6,5,4,3,2,1};
    int size = 7;

    printArray(a, size);
    mergeSort(a, 0, size - 1);
    printArray(a, size);

    return 0;
}
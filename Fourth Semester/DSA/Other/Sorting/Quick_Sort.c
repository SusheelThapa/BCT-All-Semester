#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}
int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int *a, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    else
    {
        int partition_index;

        partition_index = partition(a, low, high);

        quickSort(a, low, partition_index - 1);
        quickSort(a, partition_index + 1, high);
    }
}

int main()
{
    int a[] = {8, 0, 7, 11, 6, 5, 3, 8, 2, 9};
    int size = 10;

    printArray(a, size);
    quickSort(a, 0, size - 1);
    printArray(a, size);

    return 0;
}
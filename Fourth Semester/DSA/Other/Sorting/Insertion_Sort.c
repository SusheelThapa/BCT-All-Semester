#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

void insertionSort(int *a, int size)
{
    int key, j;

    for (int i = 1; i <= size - 1; i++) // For number of pass
    {
        key = a[i]; // Element to insert in array
        j = i - 1;

        while (j >= 0 && a[j] > key) // Loop for each pass
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {1, 6, 5, 3, 8, 2, 9};
    int size = 7;

    printArray(a, size);
    insertionSort(a, size);
    printArray(a, size);

    /*
        Stepwise procedure:

            Pass : 1
            Key: 6
            1 6 5 3 8 2 9

            Pass : 2
            Key: 5
            1 5 6 3 8 2 9

            Pass : 3
            Key: 3
            1 3 5 6 8 2 9

            Pass : 4
            Key: 8
            1 3 5 6 8 2 9

            Pass : 5
            Key: 2
            1 2 3 5 6 8 9

            Pass : 6
            Key: 9
            1 2 3 5 6 8 9
    */

    return 0;
}
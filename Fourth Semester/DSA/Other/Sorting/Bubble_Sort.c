#include <stdio.h>
#include <stdbool.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}

void bubbleSort(int A[], int n)
{

    for (int i = 0; i < n - 1; i++) // This for loop is for number of pass
    {

        printf("Working in pass %d\n", i + 1);

        for (int j = 0; j < n - 1 - i; j++) // This for loop is for number of vomparision that is to be done
        {
            if ((A[j] > A[j + 1]))
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void adaptiveBubbleSort(int A[], int n)
{
    "Modified bubble sort to make it adaptive sorting algorithm";

    int sorted = true;

    for (int i = 0; i < n - 1; i++) // This for loop is for number of pass
    {
        printf("Working in pass %d\n", i + 1);

        for (int j = 0; j < n - 1 - i; j++) // This for loop is for number of vomparision that is to be done
        {
            if ((A[j] > A[j + 1]))
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                sorted = false;
            }
        }

        if (sorted == true)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {12, 11, 10, 9, 8, 7, 6, 5};

    int n1 = 6;

    printArray(A, n1);

    bubbleSort(A, n1);

    printArray(A, n1);

    puts("\n\n");

    // To demonstrate adaptive bubble sort

    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n2 = 10;

    printf("Using Adaptive Bubble Sort\n");

    printArray(B, n2);

    adaptiveBubbleSort(B, n2);

    printArray(B, n2);

    puts("\n\n");

    printf("Using Normal Bubble Sort\n");

    printArray(B, n2);

    bubbleSort(B, n2);

    printArray(B, n2);

    return 0;
}
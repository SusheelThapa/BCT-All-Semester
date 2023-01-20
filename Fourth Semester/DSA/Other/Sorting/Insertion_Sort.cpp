#include <iostream>
using namespace std;

void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *arr, int size)
{
    int key, j, temp;

    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while (arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {1, 4, 2, 8, 7, 10, 3};

    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
    
    return 0;
}
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

void bubbleSort(int *arr, int size)
{
    int temp;

    for (int i = 0; i < size; i++) // For number of pass
    {
        for (int j = 0; j < size - i; j++) // Number of comparision
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 6, 3, 7, 3, 7, 3, 6, 2, 7};

    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}
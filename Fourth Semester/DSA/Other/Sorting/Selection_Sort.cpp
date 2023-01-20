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

void selectionSort(int *arr, int size)
{
    int minimum, minimum_index, j;

    for (int i = 0; i < size; i++)
    {
        minimum_index = i;
        j = i+1;

        while (j < size)
        {
            if (arr[minimum_index] > arr[j])
            {
                minimum_index = j;
            }
            j++;
        }

        minimum = arr[minimum_index];
        arr[minimum_index] = arr[i];
        arr[i] = minimum;
    }
}

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(size);

    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
};

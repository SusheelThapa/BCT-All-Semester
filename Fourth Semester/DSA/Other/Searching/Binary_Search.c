#include <stdio.h>

int binarySearch(int arr[], int size, int value)
{
    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            high = mid - 1;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(array) / sizeof(int);

    int search_index = binarySearch(array, size, 10);

    (search_index != -1) ? (printf("It was found in index %d\n", search_index)) : (printf("Element isn't present in array.\n"));

    return 0;
}
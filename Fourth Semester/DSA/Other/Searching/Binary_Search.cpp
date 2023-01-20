#include <iostream>
using namespace std;

int binarySearch(int *array, int size, int value)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else if (array[mid] > value)
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int sorted_array[] = {2, 3, 5, 7, 9, 10, 14, 19, 23, 29, 30, 81, 100};

    int size = sizeof(sorted_array) / sizeof(int);

    int index = binarySearch(sorted_array, size, 10);

    (index != -1) ? (cout << "Element 10 was found in index number " << index << endl) : (cout << "Element isn't present in array.");

    return 0;
}
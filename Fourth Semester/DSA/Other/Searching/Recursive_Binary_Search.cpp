#include <iostream>
using namespace std;

int recursiveBinarySearch(int *array, int low_index, int high_index, int value)
{
    if (!(low_index <= high_index))
    {
        return -1;
    }
    else
    {
        int mid = (low_index + high_index) / 2;

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            return recursiveBinarySearch(array, mid + 1, high_index, value);
        }
        else
        {
            return recursiveBinarySearch(array, low_index, mid - 1, value);
        }
    }
}

int main()
{
    int sorted_array[] = {2, 3, 5, 7, 9, 10, 14, 19, 23, 29, 30, 81, 100};

    int size = sizeof(sorted_array) / sizeof(int);

    int index = recursiveBinarySearch(sorted_array, 0, size - 1, 81);

    (index != -1) ? (cout << "Element 81 was found in index number " << index << endl) : (cout << "Element isn't present in array.");
    return 0;
}
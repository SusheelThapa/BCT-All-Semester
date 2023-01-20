#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int sorted_array[] = {2, 3, 5, 7, 9, 10, 14, 19, 23, 29, 30, 81, 100};

    int size = sizeof(sorted_array) / sizeof(int);

    int index = linearSearch(sorted_array, size, 10);

    (index != -1) ? (cout << "Element 10 was found in index number " << index << endl) : (cout << "Element isn't present in array.");

    return 0;
}
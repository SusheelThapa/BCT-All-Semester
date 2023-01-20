#include <stdio.h>

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
    int array[] = {1, 2, 3, 4, 5, 6, 7, 10};
    
    int size = sizeof(array) / sizeof(int);

    int search_index = linearSearch(array, size, 10);

    (search_index != -1) ? (printf("It was found in index %d\n", search_index)) : (printf("Element isn't present in array.\n"));

    return 0;
}
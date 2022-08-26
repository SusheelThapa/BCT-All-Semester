#include <iostream>
using namespace std;

bool find(int *arr, int low, int high, int value)
{
    for (int i = low; i < high; i++)
    {
        if (value == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size, index = -1;

    cin >> size;

    int *arr = (int *)malloc(sizeof(int) * size);

    cout << "Elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (find(arr, i + 1, size, arr[i]))
        {
            index = i+1;
            break;
        }
    }

    cout << "Index is " << index<< "(If first index is taken 1)"<<endl;
    
    return 0;
}
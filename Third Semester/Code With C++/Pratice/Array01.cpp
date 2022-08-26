#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Size of Array: ";
    cin >> size;

    int *array = (int *)malloc(sizeof(int) * size);

    cout << "Enter the element of array one by one :\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int max_till_i = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (max_till_i < array[i])
        {
            max_till_i = array[i];
        }
        cout << "Max value upto " << i << "th index of array is " << max_till_i << endl;
    }

    return 0;
}
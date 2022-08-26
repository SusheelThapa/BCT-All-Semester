#include <iostream>
using namespace std;

int subArraySum(int *array, int first_index, int last_index)
{
    int sum = 0;
    for (int i = first_index; i <= last_index; i++)
    {
        sum += array[i];
    }
    return sum;
}
int main()
{
    int size;

    cout << "Size of Array: ";
    cin >> size;

    int *array = (int *)malloc(sizeof(int) * size);

    cout << "Enter the element of the array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "Sum of elements of sub-array from index " << i << " and " << j << " is " << subArraySum(array, i, j) << endl;
        }
    }

    return 0;
}
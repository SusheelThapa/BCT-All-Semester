#include <iostream>
using namespace std;

void printArray(int *array, int low, int high)
{
    for (int i = low; i <= high; i++)
    {
        cout << array[i] << " ";
    }
    putchar('\n');
}

int sumSubArray(int *array, int low_index, int high_index)
{
    int sum = 0;

    for (int i = low_index; i <= high_index; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

int main()
{
    int size, sum;

    cout << "Size: ";
    cin >> size;

    cout << "Sum :";
    cin >> sum;

    int *array = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Sum of sub array which equal to " << sum << " is:" << endl;

    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i; j <= size - 1; j++)
        {
            int temp = sumSubArray(array, i, j);
            if (sum == temp)
            {
                printArray(array, i, j);
            }
        }
    }

    return 0;
}
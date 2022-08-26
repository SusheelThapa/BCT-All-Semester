#include <iostream>
using namespace std;
struct Output
{
    bool status;
    int difference;
    int length;
};
struct Output findData(int *array, int first_index, int last_index)
{
    struct Output temp;

    temp.status = true;
    temp.length = 2;
    temp.difference = array[first_index] - array[first_index + 1];

    for (int i = first_index + 1; i <= last_index - 1; i++)
    {
        if (array[i] - array[i + 1] == temp.difference)
        {
            temp.length++;
        }
        else
        {
            temp.status = false;
            break;
        }
    }

    return temp;
}
int main()
{
    int size;

    cout << "Size: ";
    cin >> size;

    int *array = (int *)malloc(sizeof(int) * size);

    cout << "Elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    struct Output one, result;
    one.status = true;
    one.length = 0;

    result = findData(array, 0, 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (i != j)
            {
                one = findData(array, i, j);
            }

            if (one.status == true)
            {
                if (one.length > result.length)
                {
                    result = one;
                }
            }
        }
    }

    cout << "The largest length of arithmetic subarray is " << result.length;

    return 0;
}
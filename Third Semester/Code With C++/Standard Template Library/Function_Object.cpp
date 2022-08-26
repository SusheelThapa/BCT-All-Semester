#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    /*
    Function Object (Functor):
    Function wrapped in a class so that it is avaliable like an object ()
    */

    int arr[] = {1, 9, 7, 5, 2};

    sort(arr, arr + 5, greater<int>());//We have passed third argument as function object

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

//New operator(keyword) in C++

    int *p = new int(40); //Here dynamically created integer of 40 and assign it to p
    cout << "Value of at &p using dereference operator is " << p << endl;

    //Allocation block of memory

    int *arr = new int[3]; //Here dynamically created a block of int and we assign it to arr. So arr is an array
    arr[0] = 7;
    arr[1] = 14;
    arr[2] = 21;

    for (int i = 0; i < 3; i++)
    {
        cout << "Arr[" << i << "] : " << arr[i] << endl;
    }

//Delete operator(keyword) in C++

    delete[] arr; //Used to free up the allocated memory

    return 0;
}
#include <iostream>
using namespace std;

template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapNumber(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    //Example One:
    cout << "The average number of 3 and 6 is " << average(3, 6) << endl
         << endl;

    cout << "The average number of 3.5 and 6.56 is " << average(3.5, 6.56) << endl
         << endl;

    //Example Two:
    int value1 = 89, value2 = 90;

    cout << "Before swap,value1 : " << value1 << " value2: " << value2 << endl;

    swapNumber(value1, value2);

    cout << "After swap,value1 : " << value1 << " value2: " << value2 << endl
         << endl;

    char value3 = 'A', value4 = 'V';

    cout << "Before swap,value3 : " << value3 << " value4: " << value4 << endl;

    swapNumber(value3, value4);

    cout << "After swap,value3 : " << value3 << " value4: " << value4 << endl
         << endl;

    return 0;
}
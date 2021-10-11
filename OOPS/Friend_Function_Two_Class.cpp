#include <iostream>
using namespace std;

//Forward Declaration of class that are going to be used in Program
class NumberOne;
class NumberTwo;

class NumberOne
{
    int one;

    friend int sum(NumberOne, NumberTwo);

public:
    void setData(int a)
    {
        one = a;
    }
};

class NumberTwo
{
    int two;
    friend int sum(NumberOne, NumberTwo);

public:
    void setData(int a)
    {
        two = a;
    }
};

int sum(NumberOne a, NumberTwo b)
{
    return a.one + b.two;
}
int main()
{
    NumberOne a;
    NumberTwo b;
    int sum_of_number;

    a.setData(4);
    b.setData(5);

    sum_of_number = sum(a, b);

    cout << "The sum of two number is " << sum_of_number << endl;

    return 0;
}
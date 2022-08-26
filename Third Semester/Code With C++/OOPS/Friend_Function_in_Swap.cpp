#include <iostream>
using namespace std;

class NumberOne;
class NumberTwo;

class NumberOne
{
    int one;
    friend void swap(NumberOne &, NumberTwo &);

public:
    void setData(int a)
    {
        one = a;
    }
    void printData(void)
    {
        cout << one << endl;
    }
};
class NumberTwo
{
    int two;
    friend void swap(NumberOne &, NumberTwo &);

public:
    void setData(int a)
    {
        two = a;
    }
    void printData(void)
    {
        cout << two << endl;
    }
};

void swap(NumberOne &a, NumberTwo &b)
{
    int temp = a.one;
    a.one = b.two;
    b.two = temp;
}

int main()
{
    NumberOne a;
    NumberTwo b;

    a.setData(8);
    b.setData(7);

    cout << "Before swap: " << endl;
    a.printData();
    b.printData();

    swap(a, b);

    cout << "After swap: " << endl;
    a.printData();
    b.printData();

    return 0;
}
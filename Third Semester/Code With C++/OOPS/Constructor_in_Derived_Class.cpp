#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor" << endl;
    }
    void printData(void)
    {
        cout << "Data: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor" << endl;
    }
    void printData(void)
    {
        cout << "Data: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int one, int two, int three, int four) : Base1(one), Base2(two)
    {
        derived1 = three;
        derived2 = four;
        cout << "Derived Class Constructor Called" << endl;
    }

    void printData(void)
    {
        cout << "Derived One: " << derived1 << endl;
        cout << "Derived Two: " << derived2 << endl;
    }
};
int main()
{
    Derived object_one(10, 20, 30, 40);

    /*
    After running this program, we can see on which order it(constructor) has executed

    We notice that it works in order the order as written in "Constructor.txt"

    You can try with other different case as mention in that text file
    */

    return 0;
}
#include <iostream>
using namespace std;

template <class I, class C>
class MyClass
{
public:
    I data1;
    C data2;

    MyClass(I a, C b) : data1(a), data2(b) {}

    void display(void)
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << endl;
    }
};

int main()
{
    MyClass<int, char> object_one(1, 'C');

    object_one.display();

    MyClass<float, char> object_two(50.4, 'C');

    object_two.display();

    MyClass<char, string> object_three('@', "Master");

    object_three.display();

    return 0;
}
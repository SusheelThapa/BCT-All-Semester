#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        /*
        this is a keyword which is a pointer which points to the object which invokes the member function
        */
        this->a = a;
    }

    void getData(void)
    {
        cout << "Value of element is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(3);
    a.getData();

    return 0;
}
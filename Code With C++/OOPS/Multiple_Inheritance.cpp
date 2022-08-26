#include <iostream>
using namespace std;

class Base1
{
protected:
    int base_one_int;

public:
    void setBaseOneInt(int a)
    {
        base_one_int = a;
    }
};

class Base2
{
protected:
    int base_two_int;

public:
    void setBaseTwoInt(int a)
    {
        base_two_int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base one is " << base_one_int << endl;
        cout << "The value of base two is " << base_two_int << endl;
        cout << "The sum of those two value is " << base_one_int + base_two_int << endl;
    }
};

int main()
{
    Derived Noone;

    Noone.setBaseOneInt(10);
    Noone.setBaseTwoInt(40);

    Noone.show();
    
    return 0;
}
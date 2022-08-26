#include <iostream>
using namespace std;

class Base
{
private:
    int data1; //This won't inherited to derived class

public:
    //This will be inherited to derived class and is accessible by derived class
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1(void)
{
    return data1;
}

int Base::getData2(void)
{
    return data2;
}

//Derived Class form Base class
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    /*
    data2 is inherited but data1 is not inherited
    Moreover, getData1 has been inherited so that we can use it to get data1 
    but we cannot use data1 direclty as it isn't inherited as mentioned in line 7
    */
    cout << "Value of Data 1 is " << getData1() << endl;
    cout << "Value of Data 2 is " << data2 << endl;
    cout << "Value of Data 3 is " << data3 << endl;
}

int main()
{
    Derived der;

    der.setData();
    der.process();
    der.display();

    return 0;
}
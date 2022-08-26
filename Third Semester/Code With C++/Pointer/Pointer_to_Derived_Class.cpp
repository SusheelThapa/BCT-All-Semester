#include <iostream>
using namespace std;

class BaseClass
{
private:
    int a;

public:
    void display(void)
    {
        cout << "I am Base Class" << endl;
        cout << "Value of a is " << a << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void display(void)
    {
        cout << "I am Derived Class" << endl;
    }

    void newFeature(void)
    {
        cout << "I am new features" << endl;
    }
};
int main()
{
    BaseClass base_object;
    DerivedClass derived_object;

    BaseClass *base_pointer;
    DerivedClass *derived_pointer;

    //Pointing Base class pointer to derived class pointer
    base_pointer = &derived_object;    //This binds will base class. And member are accessbile which are inherited to derived class
    derived_pointer = &derived_object; //This binds with derived class

    base_pointer->display();

    derived_pointer->newFeature();

    /*
    It is legal that Base class pointer point to derived class pointer.

    But it will binds with all the function that is being inherited, other new feature of derived class wonot be accessible.
    
    Such type of bind is late bind.

    Moreover Derived class pointer can't point to Base class object

    Try accessing newFeature by using
        base_pointer->newFeature(); 

    */
    return 0;
}
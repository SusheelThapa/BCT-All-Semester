#include <iostream>
using namespace std;

//Base Class
class Employee
{

public:
    int id;
    float salary;

    //Default Constructor
    Employee(void) {}

    Employee(int i)
    {
        id = i;
        salary = 34;
    }
};

/*
Derived Class Syntax:

    class {{derived-class_name}} : {{visibility_mode}} {{base_class_name}}
    {
        //code
    };

    Note:
   ->Default visiblity_mode is private
   ->Private member of base class won't be inheritance

    Private Visibility Mode:
        Public member of base class becomes private member of derived class
    
    Public Visibility Mode:
        Public member of base class becomes private member of derived class

*/
class Programmer : Employee
{

public:
    int language_code = 9;

    //Before execution of this constructor, it try to call the default constructor of Base class
    Programmer(int i)
    {
        id = i;
    }

    //To print id as it is inaaccessible outside this derived class since it is inherited from base class and will be private.
    void getData(void)
    {
        cout << id << endl;
    }
};

int main()
{
    //Base Class
    Employee one(1), two(2), three(3);

    cout << one.salary << endl;
    cout << two.salary << endl;
    cout << three.salary << endl;

    //Derived Class
    Programmer skillf(10);

    cout << skillf.language_code << endl;

    skillf.getData();

    return 0;
}
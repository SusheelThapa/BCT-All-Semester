#include <iostream>
using namespace std;

class GreetOne
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
    void say()
    {
        cout << "I am Greet One" << endl;
    }
};

class GreetTwo
{
public:
    void greet()
    {
        cout << "Good Morning" << endl;
    }

    void say()
    {
        cout << "I am Greet Two" << endl;
    }
};

class DerivedGreet : public GreetOne, public GreetTwo
{

public:
    //Ambuguity Resolution
    void greet()
    {
        GreetTwo ::greet();
    }

    //Inherited function has less priority than its own function
    void say()
    {
        cout << "I am Derived Greet" << endl;
    }
};

int main()
{
    GreetOne g_one;
    GreetTwo g_two;
    DerivedGreet dg_one;

    g_one.greet();
    g_two.greet();

    dg_one.greet();
    /*This is ambiguity as greet from both class is inheritance and compiler has no idea about which to use. To solve this ambuguity refer line number 26-29*/

    dg_one.say();//This will run function of Derived class not inherited one. Refer line number 41 

    return 0;
}
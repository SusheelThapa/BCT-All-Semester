#include <iostream>
#include <string>

using namespace std;

class Default
{
public:
    Default(void);
};

Default ::Default(void)
{
    cout << "This is default constructor" << endl;
}

class Parametized
{
public:
    Parametized(string name);
};

Parametized ::Parametized(string name)
{
    cout << "Hello " << name << ", this is parametized constructor" << endl;
}
int main()
{
    //Creating object of both class to see effect of constructor

    Default D;

    Parametized P("Susheel");

    return 0;
}
#include <iostream>
using namespace std;

/*
Access Modifier   Public Derivation  Private Derivation   Protected Derivation
Private Member    Not Inherited      Not Inherited        Not Inherited
Protected Member  Protected          Private              Protected
Public Member     Public             Private              Protected
*/
class Base
{
private:
    int b;

protected:
    int a;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;

    /*This both will throw error as both member are not accessible. Refer Table in line number 4-9*/
    d.a;
    d.b;

    return 0;
}
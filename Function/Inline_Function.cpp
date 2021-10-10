#include <iostream>
using namespace std;

//Creating inline function 
inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    cout << "Enter the value of a and b" << endl;
    cin >> a;
    cin >> b;

    cout << "Value of a + b is " << (sum(a, b)) << endl;
    /*
        Inline function provide better compilation time 

        Inline function is used when function has very few statement for long statement in function it isn't recomanded to used inline function

        For recursive function too inline function isn't recomanded

        For static varaible we donot use inline variable

        If Loop or switch is present in function inline is not used

    */
    return 0;
}
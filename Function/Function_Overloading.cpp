#include <iostream>
using namespace std;

/*
Function Oveloading
It means function with same name but its argument will be different

In below we have two function with same name but its arguments are different
One has two argument and another has three arguments

If we call function with 2 parameter then function with two argument will be called 
If we call function with 3 parameter then function with three argument will be called
*/

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Sum of 3 and 8 is " << add(3, 8) << endl;

    cout << "Sum of 4, 6 and 7 is " << add(4, 6, 7);

    return 0;
}
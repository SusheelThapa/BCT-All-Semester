#include <iostream>
using namespace std;

/*
Syntax for intialation list:

    constructor(argument_list) : initialization-section
    {
        assignment + other code;
    }

*/

//Different Forms of initialization section
class Test1
{
    int a;
    int b;

public:
    Test1(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed Test One" << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl
             << endl;
    }
};
class Test2
{
    int a;
    int b;

public:
    Test2(int i, int j) : a(i), b(i + j)
    {
        cout << "Constructor executed Test Two" << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl
             << endl;
    }
};
class Test3
{
    int a;
    int b;

public:
    Test3(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor executed Test Three" << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl
             << endl;
    }
};
class Test4
{
    int a;
    int b;

public:
    Test4(int i, int j) : b(j), a(i)
    {
        cout << "Constructor executed Test Four" << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl
             << endl;
    }
};
class Test5
{
    int a;
    int b;

public:
    Test5(int i, int j) : b(j), a(b + i)
    {
        cout << "Constructor executed Test Five" << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl
             << endl;
    }
};

int main()
{
    Test1 a(1, 4);
    Test2 b(1, 4);
    Test3 c(1, 4);
    Test4 d(1, 4);
    Test5 e(1, 4);
    
    /*
    We can see that Test5 didnot provide expected answer.
    It is because as 
        ->A is initalized first due to which we donot have value of b at that moment 
          Hence,compiler put garbage value.

        ->Reason for initialization of a:
            Test5 class we have declare a first then b so in same order they will be initilized
    */
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int a = 6, b = 5;

    cout << "Operators in C++" << endl;

    //Arithematic Operator
    cout << "Sum : " << a + b << endl;
    cout << "Subtract : " << a - b << endl;
    cout << "Multiply : " << a * b << endl;
    cout << "Divide : " << a / b << endl;
    cout << "Modulus : " << a % b << endl;
    cout << "Increment(a++) :  " << a++ << endl;
    cout << "Increment(++a) :  " << ++a << endl;
    cout << "Decrement(a--) :  " << a-- << endl;
    cout << "Decrement(--a) :  " << --a << endl;

    cout << endl;

    //Asignment Operator -> used to assign the value of variable
    int c = 9;
    char d = 'a';
    float e = 9.0;

    cout << endl;

    //Comparision Operators
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;

    cout << endl;

    //Logical Operators
    cout << "The value of (a>b) && (a==b) is " << ((a > b) && (a == b)) << endl;
    cout << "The value of (a>b) || (a==b) is " << ((a > b) || (a == b)) << endl;
    cout << "The value of !(a>b) is " << !(a > b) << endl;

    return 0;
}
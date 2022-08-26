#include <iostream>

using namespace std;

int main()
{
    int a = 6, b = 5;

    cout << "Operators in C++" << endl;

    // Arithematic Operator->Binary and Unary
    // Binary Operator
    cout << "Sum : " << a + b << endl;
    cout << "Subtract : " << a - b << endl;
    cout << "Multiply : " << a * b << endl;
    cout << "Divide : " << a / b << endl;
    cout << "Modulus : " << a % b << endl;

    // Unary Operator
    cout << "Increment(a++) :  " << a++ << endl;
    cout << "Increment(++a) :  " << ++a << endl;
    cout << "Decrement(a--) :  " << a-- << endl;
    cout << "Decrement(--a) :  " << --a << endl;

    cout << endl;

    // Asignment Operator -> used to assign the value of variable
    float c = 9;
    char d = 'a';
    float e = 9.0;

    cout << "The value of c is " << c << endl;
    c += 2;
    cout << "The value of c is " << c << endl;
    c -= 5;
    cout << "The value of c is " << c << endl;
    c *= 4;
    cout << "The value of c is " << c << endl;
    c /= 3;
    cout << "The value of c is " << c << endl;

    cout << endl;

    // Comparision Operators
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;

    cout << endl;

    // Logical Operators
    cout << "The value of (a>b) && (a==b) is " << ((a > b) && (a == b)) << endl;
    cout << "The value of (a>b) || (a==b) is " << ((a > b) || (a == b)) << endl;
    cout << "The value of !(a>b) is " << !(a > b) << endl;

    cout << endl;

    // Miscellaneous Operator
    (1 < 2) ? (cout << 1 << " is small" << endl) : (cout << 2 << " is smaller" << endl); // Ternary Operator

    cout << "Size of int : " << sizeof(int) << endl; // sizeof operator

    char ch = 'A';
    cout << "Value of ch coverting to int is " << int(ch) << endl; // cast operator

    cout << "Address of ch is " << &ch << endl; //Reference operator

    char *ptr = &ch;
    cout << "Value of *ptr is " << *ptr << endl; //Pointer Operator

    return 0;
}
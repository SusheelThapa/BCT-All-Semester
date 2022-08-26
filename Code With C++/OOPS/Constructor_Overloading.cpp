#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:

    //More than one constructor with different parameter is called constructor overloading
    Complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    Complex(int x)
    {
        real = x;
        imaginary = 0;
    }

    Complex(void)
    {
        real = imaginary = 0;
    }

    void printComplex()
    {
        cout << "Complex Number is " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex a(4, 5); //Implicit call
    Complex b = Complex(7); //Explicit call
    Complex c;

    a.printComplex();
    b.printComplex();
    c.printComplex();

    return 0;
}
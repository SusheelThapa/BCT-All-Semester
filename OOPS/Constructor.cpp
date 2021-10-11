#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    //Declaration of Constructor
    Complex(int a, int b);

    void printData(void)
    {
        cout << "Complex Number is " << real << " + " << imaginary << "i" << endl;
    }
};

//Constructor Body
Complex::Complex(int a, int b)
{
    real = a;
    imaginary = b;
}

int main()
{
    Complex a(2, 5);
    a.printData();

    return 0;
}
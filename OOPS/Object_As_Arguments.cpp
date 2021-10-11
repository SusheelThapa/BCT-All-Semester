#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(void);
    void printData(void);
    void setDataBySum(Complex c_one, Complex c_two);
};

void Complex ::setData()
{
    cout << "Real part: ";
    cin >> real;
    cout << "Imaginary part: ";
    cin >> imaginary;
}

void Complex::setDataBySum(Complex c_one, Complex c_two)
{
    real = c_one.real + c_two.real;
    imaginary = c_one.imaginary + c_two.imaginary;
}

void Complex ::printData()
{
    cout << "Complex Number is " << real << " + i" << imaginary << endl;
}

int main()
{
    Complex one, two, three;

    one.setData();

    two.setData();

    three.setDataBySum(one, two);

    one.printData();
    two.printData();
    three.printData();

    return 0;
}
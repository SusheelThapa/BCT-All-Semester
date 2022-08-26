#include <iostream>
using namespace std;

//Forward declaration to ensure that you will find Complex class later on program
class Complex;

class Calculator
{
public:
    int sumReal(Complex, Complex);
    int sumComplex(Complex, Complex);
};

class Complex
{

private:
    int real;
    int imaginary;

public:
    //Declaring function of another class one by one
    friend int Calculator::sumReal(Complex, Complex);
    friend int Calculator::sumComplex(Complex, Complex);

    /*But a class has 100 function then it is tedious to declared all function as friend function so we declare class as friend*/
    friend class Calculator;

    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void printData()
    {
        cout << "Complex Number is " << real << " + " << imaginary << "i" << endl;
    }
};

int Calculator ::sumReal(Complex one, Complex two)
{
    return (one.real + two.real);
}

int Calculator ::sumComplex(Complex one, Complex two)
{
    return (one.imaginary + two.imaginary);
}

int main()
{
    Complex one, two;

    Calculator sum;

    one.setData(3, 5);
    two.setData(5, 7);

    one.printData();
    two.printData();

    cout << "Complex number is " << sum.sumReal(one, two) << " + " << sum.sumComplex(one, two) << "i" << endl;

    return 0;
}
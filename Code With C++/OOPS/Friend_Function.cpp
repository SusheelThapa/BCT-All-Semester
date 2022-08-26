
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    //Declaring sumComplex as friend of class Complex
    friend Complex sumComplex(Complex, Complex);
    
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

/*This function is outside the class so technically it is not able to access private data.
But it can access it if we mention that this function is Friend of Complex class
As seen in line number 13 we have set sumComplex as friend of Complex class*/
Complex sumComplex(Complex one, Complex two)
{
    Complex sum;
    sum.setData((one.real + two.real), (one.imaginary + two.imaginary));
    return sum;
}

int main()
{
    Complex one, two, sum;

    one.setData(1, 2);
    two.setData(3, 4);

    sum = sumComplex(one, two);

    one.printData();
    two.printData();
    sum.printData();

    return 0;
}
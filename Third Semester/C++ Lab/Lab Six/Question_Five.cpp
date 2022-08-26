
/*
Question_Five.cpp

Write a base class that asks the user to enter a complex number and make a derived class that
adds the complex number of its own with the base.Finally, make a third class that is a friend
of derived and calculate the difference of the base complex number and its own complex number.
*/

#include <iostream>

class BaseClass
{
private:
    float real, imaginary;

protected:
    void askComplexNumber()
    {
        std::cout << "\n\nBase Class\n";

        std::cout << "Real Part: ";
        std::cin >> this->real;

        std::cout << "Imaginary Part: ";
        std::cin >> this->imaginary;
    }

    float getReal() { return real; }
    float getImaginary() { return imaginary; }

    void setReal(float real) { this->real = real; }
    void setImaginary(float imaginary) { this->imaginary = imaginary; }

    void displayBaseClass()
    {
        std::cout << "Base class\n";

        std::cout << "Real : " << this->real;
        std::cout << "\nImaginary: " << this->imaginary;
    }
};

class DerivedClass : public BaseClass
{
private:
    float real;
    float imaginary;

public:
    DerivedClass(float real, float imaginary)
    {
        this->BaseClass::askComplexNumber();

        this->real = real;
        this->imaginary = imaginary;
    }

    DerivedClass addComplexNumber()
    {
        this->real += this->BaseClass::getReal();
        this->imaginary += this->BaseClass::getImaginary();

        return *this;
    }

    friend class DerivedSubtract;

    void displayDerivedClass()
    {

        this->BaseClass::displayBaseClass();
        std::cout << "\nDerived class\n";

        std::cout << "Real : " << this->real;
        std::cout << "\nImaginary: " << this->imaginary;
    }
};

class DerivedSubtract
{
public:
    DerivedClass subtract(DerivedClass d)
    {

        d.real -= d.BaseClass::getReal();
        d.imaginary -= d.BaseClass::getImaginary();

        return d;
    }
};

int main(int argc, char const *argv[])
{
    (DerivedClass(2, 3).addComplexNumber()).displayDerivedClass();

    DerivedSubtract().subtract(DerivedClass(2, 4)).displayDerivedClass();

    return 0;
}

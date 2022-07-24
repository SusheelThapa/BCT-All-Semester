/*
Question_Three.com

Write a program to overload stream operators to read a complex
number and display the complex number in a+ib format.
*/

#include <iostream>

class Complex
{
    float real, imaginary;

public:
    Complex(float r, float i) : real(r), imaginary(i){};

    friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};

std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.real << "+" << c.imaginary << "i\n"
        << std::flush;
    return out;
}

int main(int argc, char const *argv[])
{
    std::cout << "Complex Number: " << Complex(1, 2);
    return 0;
}

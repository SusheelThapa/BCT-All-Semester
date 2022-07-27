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
    Complex(){};
    Complex(float r, float i) : real(r), imaginary(i){};

    friend std::istream &operator>>(std::istream &in, Complex &c);
    friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};

std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.real << "+" << c.imaginary << "i\n"
        << std::flush;
    return out;
}
std::istream &operator>>(std::istream &in, Complex &c)
{
    std::cout << "Real part: ";
    std::cin >> c.real;
    std::cout << "Imaginary part:";
    std::cin >> c.imaginary;
    return in;
}

int main(int argc, char const *argv[])
{
    Complex c;

    std::cin >> c;
    std::cout << "Complex Number: " << c;
    return 0;
}

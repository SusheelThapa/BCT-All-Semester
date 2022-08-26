/*
Question_Two.cpp

Write a program using the function overloading that converts feet to inches. Use function with no
argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by
reference in any one of the function above.

*/

#include <iostream>

float feetToInches()
{
    std::cout << "No argument is provide to convert feet to inches\n";
    return 0;
}

float feetToInches(float feet)
{
    return feet * 12;
}

float feetToInches(float &feet, float &inches)
{
    return feet * 12 + inches;
}

int main(int argc, char const *argv[])
{
    float feet, inches;

    std::cout << "Feet : ";
    std::cin >> feet;

    std::cout << "Inches : ";
    std::cin >> inches;

    feetToInches();
    std::cout << "Single argument(feet) function : "
              << feetToInches(feet) << "\n";
    std::cout << "Double argument(feet,inches) function : "
              << feetToInches(feet, inches) << "\n";
    return 0;
}

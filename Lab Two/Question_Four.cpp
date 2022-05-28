/*
Question_Four.cpp

Write a function that passes two temperatures by reference and sets the larger of the two numbers to a
value entered by user by using return by reference.

*/

#include <iostream>

int &larger(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char const *argv[])
{
    int temp_one, temp_two, value;

    std::cout << "Temperature one: ";
    std::cin >> temp_one;

    std::cout << "Temperature Two: ";
    std::cin >> temp_two;

    std::cout << "\nBefore function call\n";
    std::cout << "Temperature One: " << temp_one;
    std::cout << "\nTemperature Two: " << temp_two;

    std::cout << "\n\nValue: ";
    std::cin >> value;

    larger(temp_one, temp_two) = value;

    std::cout << "\nAfter function call\n";
    std::cout << "Temperature One: " << temp_one;
    std::cout << "\nTemperature Two: " << temp_two;

    return 0;
}

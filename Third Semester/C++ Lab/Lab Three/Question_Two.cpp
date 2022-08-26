/*
Author : Susheel Thapa

Question_Two.cpp

Assume that you want to check whether the number is prime or not.
Write a program that asks for numbers repeatedly.
When it finishes checking a number the program asks if the user wants to do another calculation.
The response can be 'y' or 'n'.
Don't forget to use the object-oriented concept.
*/

#include <iostream>

class Number
{
private:
    int number;

public:
    void setNumber(int number);
    int getNumber();
    bool isPrime();
};

int main(int argc, char const *argv[])
{
    Number n;

    int number;
    char choice;

    while (true)
    {
        std::cout << "\nNumber: ";
        std::cin >> number;

        n.setNumber(number);

        std::cout << "Prime Number : " << (n.isPrime() ? ("True") : ("False")) << "\n";

        std::cout << "Do you want to do another calculation?\n";
        std::cin >> choice;

        if (!(choice == 'y'))
        {
            break;
        }
    }

    return 0;
}

// Number Class
void Number::setNumber(int number) { this->number = number; }

int Number::getNumber() { return this->number; }

bool Number::isPrime()
{
    if (this->number == 1 || this->number == 0)
    {
        return false;
    }

    for (int i = 2; i < this->number; i++)
    {
        if (this->number % i == 0)
        {
            return false;
        }
    }

    return true;
}
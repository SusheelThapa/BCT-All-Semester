/*

Question_Three.cpp

Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal(!=),
greater than or equal to(>=), and
less than or equal to(<=) operators using member operator functions.
*/

#include <iostream>

class Integer
{
    int data;

public:
    Integer(int n) : data(n){};

    bool operator==(const Integer &number)
    {
        return number.data == this->data;
    }
    bool operator!=(const Integer &number)
    {
        return number.data != this->data;
    }
    bool operator<=(const Integer &number)
    {
        return this->data <= number.data;
    }
    bool operator>=(const Integer &number)
    {
        return this->data >= number.data;
    }
    bool operator<(const Integer &number)
    {
        return this->data < number.data;
    }
    bool operator>(const Integer &number)
    {
        return this->data > number.data;
    }
};

int main(int argc, char const *argv[])
{

    std::cout << (Integer(10) == Integer(10)) << std::endl;
    std::cout << (Integer(450) != Integer(70)) << std::endl;
    std::cout << (Integer(23) <= Integer(80)) << std::endl;
    std::cout << (Integer(12) >= Integer(120)) << std::endl;
    std::cout << (Integer(56) > Integer(104)) << std::endl;
    std::cout << (Integer(4350) < Integer(12)) << std::endl;
    
    return 0;
}

/*

Question_Six.cpp

Create a class with a data member to hold a "serial number" for each object created from the class.
That is, the first object created will be numbered 1, the second 2, and
so on by using the basic concept of static data members.
Use static member function if it is useful in the program.
Otherwise, make a separate program that demonstrates the use of static member function.
*/

#include <iostream>

class Demo
{
private:
    static int serial_number;

public:
    Demo()
    {
        serial_number = serial_number + 1;
    }

    static int getSerialNumber()
    {
        return serial_number;
    }
};

int Demo::serial_number = 0;

int main()
{
    Demo d1, d2, d3, d4;

    std::cout << "The current value of serial number is " << Demo::getSerialNumber() << "\n";

    return 0;
}
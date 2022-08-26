#include <iostream>

/*
1 meter = 3.2808399 feet
*/

class Feet;
class Meter;

class Feet
{
    float value;

public:
    Feet(float value) : value(value) {}

    operator Meter();

    void display()
    {
        std::cout << "Feet: " << this->value << "\n";
    }
};

class Meter
{
    float value;

public:
    Meter(float value) : value(value) {}

    operator Feet();

    void display()
    {
        std::cout << "Meter: " << this->value << "\n";
    }
};

int main()
{
    Meter m(10);

    Feet(m).display();

    Feet f(9);

    Meter(f).display();

    return 0;
}

Meter::operator Feet()
{

    return Feet(this->value * 3.2808399);
}

Feet::operator Meter()
{
    return Meter(this->value / 3.2808399);
}
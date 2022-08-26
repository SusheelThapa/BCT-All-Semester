#include <iostream>

/*
1 meter = 3.2808399 feet
*/

class Feet;
class Meter;

class Feet
{
    float feet;
    float inches;

public:
    Feet(float feet, float inches) : feet(feet), inches(inches) {}

    operator Meter();

    void display()
    {
        std::cout << "Feet: " << this->feet << "\n";
        std::cout << "Inches: " << this->inches << "\n";
    }
};

class Meter
{
    float meter;
    float centimeter;

public:
    Meter(float meter, float centimeter) : meter(meter), centimeter(centimeter) {}

    operator Feet();

    void display()
    {
        std::cout << "Meter: " << this->meter << "\n";
        std::cout << "Centimeter: " << this->centimeter << "\n";
    }
};

int main()
{
    Meter m(1, 80);

    Feet(m).display();

    Feet f(5, 11);

    Meter(f).display();

    return 0;
}

Meter::operator Feet()
{
    float total_meter = this->meter + this->centimeter / 100;

    float feet = int(total_meter * 3.2808399);

    float inches = (total_meter * 3.2808399 - feet) * 12;
    return Feet(feet, inches);
}

Feet::operator Meter()
{
    float total_feet = this->feet + this->inches / 12;

    float meter = int(total_feet / 3.2808399);

    float centimeter = (total_feet /3.2808399 - meter) * 100;

    return Meter(meter, centimeter);
}
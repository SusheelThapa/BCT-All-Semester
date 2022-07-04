
/*
Question_Two.cpp

Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
Write conversions functions so that the program can convert objects of both types.
*/

/*
1 inches = 2.54 cm
*/

#include <iostream>

class MetricSystem;
class BritishSystem;

class MetricSystem
{
    float meter, centimeter;

public:
    MetricSystem(){};
    MetricSystem(float _meter, float _centimeter)
    {
        meter = _meter;
        centimeter = _centimeter;
    };

    MetricSystem(float _centimeter)
    {
        meter = static_cast<int>(_centimeter) / 100;
        centimeter = _centimeter - meter * 100;
    }

    operator BritishSystem();

    void display()
    {
        std::cout << "\nMeter : " << meter
                  << "\nCentimeter: " << centimeter;
    }
};
class BritishSystem
{
    float feet, inch;

public:
    BritishSystem(){};
    BritishSystem(float _feet, float _inch)
    {
        feet = _feet;
        inch = _inch;
    }
    BritishSystem(float _inch)
    {
        feet = static_cast<int>(_inch) / 12;
        inch = _inch - feet * 12;
    }

    operator MetricSystem();

    void display()
    {
        std::cout << "\nFeet : " << feet
                  << "\nInch: " << inch;
    }
};

int main(int argc, char const *argv[])
{
    MetricSystem(BritishSystem(5, 11)).display();

    BritishSystem(MetricSystem(1, 80.34)).display();

    return 0;
}

MetricSystem::operator BritishSystem()
{
    float total_centimeter = meter * 100 + centimeter;

    float total_inches = total_centimeter / 2.54;

    return BritishSystem(total_inches);
}

BritishSystem::operator MetricSystem()
{
    float total_inches = feet * 12 + inch;

    float total_centimeter = total_inches * 2.54;

    return MetricSystem(total_centimeter);
}
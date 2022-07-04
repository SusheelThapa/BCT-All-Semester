/*

Question_One.cpp

Write a program that can convert the Distance(meter, centimeter) to meters measurement in float and vice versa.
Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.
*/

#include <iostream>

class Distance
{
    float meter, centimeter;

public:
    Distance() {}
    Distance(float _meter, float _centimeter)
    {
        meter = _meter;
        centimeter = _centimeter;
    }

    Distance(float _centimeter)
    {
        meter = static_cast<int>(_centimeter) / 100;
        centimeter = _centimeter - meter * 100;
    }

    void display()
    {
        std::cout << "\nMeter : " << meter
                  << "\nCentimeter: " << centimeter;
    }

    operator float()
    {
        return meter * 100 + centimeter;
    }
};

int main(int argc, char const *argv[])
{

    Distance d1;
    d1 = 639;
    d1.display();

    std::cout << "\nType conversion from Distance to float " << float(d1);

    return 0;
}

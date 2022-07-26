#include <iostream>

/*
1 pound = 0.45359237 kilogram
*/

class Kilogram;
class Pound;

class Kilogram
{
    float value;

public:
    Kilogram(float value) : value(value){};

    operator Pound();

    float getValue()
    {
        return value;
    }
};

class Pound
{
    float value;

public:
    Pound(float value) : value(value){};

    operator Kilogram();

    float getValue()
    {
        return value;
    }
};

int main()
{
    Kilogram k(100);

    std::cout << "100 Kg = " << Pound(k).getValue() << " Pound\n";

    Pound p(100);
    std::cout << "100 Pound = " << Kilogram(p).getValue() << " Kilogram\n";
    return 0;
}

Kilogram::operator Pound()
{
    return Pound(this->value / 0.45359237);
}

Pound::operator Kilogram()
{
    return Kilogram(this->value * 0.45359237);
}
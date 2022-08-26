#include <iostream>

/*
1 pound = 0.45359237 kilogram
1 Pound = 16 ounch
*/

class Kilogram;
class Pound;

class Kilogram
{
    float kg;
    float gram;

public:
    Kilogram(float kg, float gram) : kg(kg), gram(gram){};

    operator Pound();

    void display()
    {
        std::cout << "Kilogram : " << this->kg << "\n"
                  << "Gram : " << this->gram << "\n";
    }
};

class Pound
{
    float pound;
    float ounch;

public:
    Pound(float pound, float ounch) : pound(pound), ounch(ounch){};

    operator Kilogram();

    void display()
    {
        std::cout << "Pound : " << this->pound << "\n"
                  << "Ounch : " << this->ounch << "\n";
    }
};

int main()
{

    Kilogram k(1, 0);

    Pound p(1, 0);

    Pound(k).display();

    Kilogram(p).display();

    return 0;
}

Kilogram::operator Pound()
{

    float total_kilogram = this->kg + this->gram / 1000;

    float pound = int(total_kilogram / 0.45359237);
    float ounch = (total_kilogram / 0.45359237 - pound) * 16;
    return Pound(pound, ounch);
}

Pound::operator Kilogram()
{
    float total_pound = this->pound + this->ounch / 16;

    float kilogram = int(total_pound * 0.45359237);
    float gram = (total_pound * 0.45359237 - kilogram) * 1000;
    return Kilogram(kilogram, gram);
}
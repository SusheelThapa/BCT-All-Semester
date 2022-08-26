#include <iostream>

/*
1 Liter = 0.21996915 Imperial gallon
*/

class Liter;
class Gallon;

class Liter
{
    float value;

public:
    Liter(float value) : value(value){};

    operator Gallon();

    void display()
    {
        std::cout << "Liter : " << this->value << "\n";
    }
};

class Gallon
{
    float value;

public:
    Gallon(float value) : value(value){};

    operator Liter();

    void display()
    {
        std::cout << "Gallon : " << this->value << "\n";
    }
};

int main()
{
    Liter l(1);

    Gallon g(1);

    Liter(g).display();

    Gallon(l).display();
    
    return 0;
}

Gallon::operator Liter()
{
    return Liter(this->value / 0.21996915);
}

Liter::operator Gallon()
{
    return Gallon(this->value * 0.21996915);
}
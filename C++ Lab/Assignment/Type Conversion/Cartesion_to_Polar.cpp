#include <iostream>
#include <cmath>
class Cartesian;
class Polar;

class Cartesian
{
    float x;
    float y;

public:
    Cartesian(float x, float y) : x(x), y(y){};

    operator Polar();

    void display()
    {
        std::cout << "X: " << this->x
                  << "\nY: " << this->y << "\n";
    }
};

class Polar
{
    float r;
    float thita;

public:
    Polar(float r, float thita) : r(r), thita(thita){};

    operator Cartesian();

    void display()
    {
        std::cout << "R: " << this->r
                  << "\nThita: " << this->thita << "\n";
    }
};

int main()
{
    Cartesian c(1, 1);

    Polar(c).display();

    Polar p(std::sqrt(2), M_PI / 4);

    Cartesian(p).display();

    return 0;
}

Cartesian::operator Polar()
{

    return Polar(std ::sqrt(this->x * this->x + this->y * this->y), std::atan(this->y / this->x));
}

Polar::operator Cartesian()
{
    return Cartesian(this->r * std::cos(this->thita), this->r * std::sin(this->thita));
}
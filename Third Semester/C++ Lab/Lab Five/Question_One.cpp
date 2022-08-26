/*

Question_One.cpp


Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.
*/

#include <iostream>

class Coordinate;
class AnotherCoordinate;

class FriendClass
{
    void showMessage()
    {
        std::cout << "I am the friend class of Coordinate\n";
    }

    friend class Coordinate;
};

class Coordinate
{
    float x, y;

public:
    Coordinate(float x, float y) : x(x), y(y) {}
    Coordinate add(Coordinate &a, AnotherCoordinate &b);

    friend Coordinate multiply(Coordinate &a, AnotherCoordinate &b);
    friend Coordinate divide(Coordinate &a, AnotherCoordinate &b);
    friend Coordinate subtract(Coordinate &a, AnotherCoordinate &b);

    void display()
    {
        std::cout << "X = " << this->x << ", Y = " << this->y << "\n";
    }

    void callFriendClass();
};

class AnotherCoordinate
{
private:
    float x, y;

public:
    AnotherCoordinate(float x, float y) : x(x), y(y) {}

    void display()
    {
        std::cout << "X = " << this->x << ", Y = " << this->y << "\n";
    }

    friend Coordinate Coordinate::add(Coordinate &a, AnotherCoordinate &b);

    friend Coordinate multiply(Coordinate &a, AnotherCoordinate &b);
    friend Coordinate divide(Coordinate &a, AnotherCoordinate &b);
    friend Coordinate subtract(Coordinate &a, AnotherCoordinate &b);
};

int main(int argc, char const *argv[])
{
    AnotherCoordinate one(1, 2);
    Coordinate two(3, 4);

    two.add(two, one).display();

    subtract(two, one).display();
    multiply(two, one).display();
    divide(two, one).display();

    two.callFriendClass();

    return 0;
}

Coordinate Coordinate::add(Coordinate &a, AnotherCoordinate &b) { return Coordinate(a.x + b.x, a.y + b.y); }

Coordinate multiply(Coordinate &a, AnotherCoordinate &b) { return Coordinate(a.x * b.x, a.y * b.y); }
Coordinate divide(Coordinate &a, AnotherCoordinate &b) { return Coordinate(a.x / b.x, a.y / b.y); }
Coordinate subtract(Coordinate &a, AnotherCoordinate &b) { return Coordinate(a.x - b.x, a.y - b.y); }

void Coordinate ::callFriendClass()
{
    FriendClass().showMessage();
}
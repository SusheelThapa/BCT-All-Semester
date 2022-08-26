/*

Author : Susheel Thapa

Question_Four.cpp

Write a program with classes to represent a circle, rectangle, and triangle.
Each class should have data members to represent the actual objects and member functions to read and display objects,
find perimeter and area of the objects, and other useful functions.
Use the classes to create objects in your program.
*/

#include <iostream>
#include <cmath>

class AbstractShape
{
private:
public:
    virtual float perimeter();
    virtual float area();
    virtual void detail();
};

class Circle : public AbstractShape
{
private:
    float radius;

public:
    Circle();
    Circle(float);

    void setRadius(float);
    float getRadius();

    float perimeter();
    float area();

    void detail();
};

class Rectangle : public AbstractShape
{
private:
    float length;
    float breadth;

public:
    Rectangle();
    Rectangle(float, float);

    void setLength(float);
    void setBreadth(float);
    float getLength();
    float getBreadth();

    float perimeter();
    float area();

    void detail();
};

class Triangle : public AbstractShape
{
private:
    float side_one, side_two, side_three;

public:
    Triangle();
    Triangle(float, float, float);

    void setSideOne(float);
    void setSideTwo(float);
    void setSideThree(float);

    float getSideOne();
    float getSideTwo();
    float getSideThree();

    float area();
    float perimeter();

    void detail();
};

int main(int argc, char const *argv[])
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.setRadius(20);

    r.setLength(40);
    r.setBreadth(20);

    t.setSideOne(10);
    t.setSideThree(25);
    t.setSideTwo(20);

    c.detail();
    r.detail();
    t.detail();

    return 0;
}

// Abstract Class
float AbstractShape::perimeter() { return 0; }
float AbstractShape::area() { return 0; }
void AbstractShape::detail() {}

// Circle Class
Circle::Circle(){};
Circle::Circle(float radius) { this->setRadius(radius); }

void Circle::setRadius(float radius) { this->radius = radius; }
float Circle ::getRadius() { return this->radius; }

float Circle::perimeter() { return this->radius * 2 * 3.14; }
float Circle::area() { return this->radius * this->radius * 3.14; }

void Circle::detail()
{
    std::cout << "\nCircle\n"
              << "Radius: " << this->getRadius() << " meter"
              << "\nPerimeter: " << this->perimeter() << " meter"
              << "\nArea: " << this->area() << " square meter.\n";
}

// Rectangle Class
Rectangle::Rectangle() {}
Rectangle::Rectangle(float l, float b)
{
    this->length = l;
    this->breadth = b;
}

void Rectangle::setLength(float l) { this->length = l; }
void Rectangle::setBreadth(float b) { this->breadth = b; }

float Rectangle::getLength() { return this->length; }
float Rectangle::getBreadth() { return this->length; }

float Rectangle::perimeter() { return 2 * (this->length + this->breadth); }
float Rectangle::area() { return this->length * this->breadth; }

void Rectangle::detail()
{
    std::cout << "\nRectangle\n"
              << "Length: " << this->getLength() << " meter"
              << "\nBreadth: " << this->getBreadth() << " meter"
              << "\nPerimeter: " << this->perimeter() << " meter"
              << "\nArea: " << this->area() << " square meter.\n";
}

// Triangle Class
Triangle::Triangle() {}
Triangle::Triangle(float side_one, float side_two, float side_three)
{
    this->setSideOne(side_one);
    this->setSideTwo(side_two);
    this->setSideThree(side_three);
};

void Triangle::setSideOne(float side_one) { this->side_one = side_one; }
void Triangle::setSideTwo(float side_two) { this->side_two = side_two; }
void Triangle::setSideThree(float side_three) { this->side_three = side_three; }

float Triangle::getSideOne() { return this->side_one; }
float Triangle::getSideTwo() { return this->side_two; }
float Triangle::getSideThree() { return this->side_three; }

float Triangle::perimeter() { return this->side_one + this->side_two + this->side_three; }
float Triangle::area()
{
    float semi_perimeter = this->perimeter() / 2.0;

    return sqrt(semi_perimeter * (semi_perimeter - this->side_one) * (semi_perimeter - this->side_three) * (semi_perimeter - this->side_two));
}

void Triangle::detail()
{
    std::cout << "\nTriangle\n"
              << "Side One: " << this->getSideOne() << " meter"
              << "\nSide Two: " << this->getSideTwo() << " meter"
              << "\nSide Three: " << this->getSideThree() << " meter"
              << "\nPerimeter: " << this->perimeter()
              << "\nArea: " << this->area() << " square meter.\n";
}
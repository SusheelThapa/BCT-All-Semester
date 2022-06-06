# Lab Three

## Question One

**Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa
using the basic concept of class and object.
Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and
make conversion functions in each class for conversion from one to another.
For example,
you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.**

```C++
#include <iostream>

class Celsius
{
private:
    float temperature;

public:
    Celsius();
    Celsius(float temperature);

    void setTemperatue(float temperature);
    float toFahrenheit();
    float getTemperature();
    void display();
};

class Fahrenheit
{
private:
    float temperature;

public:
    Fahrenheit();
    Fahrenheit(float temperature);

    void setTemperatue(float temperature);
    float getTemperature();
    float toCelsius();
    void display();
};

int main()
{
    Celsius t_one;
    Fahrenheit t_two;

    t_one.setTemperatue(37);
    t_two.setTemperatue(98.6);

    std::cout << t_one.getTemperature() << " degree celsius = " << t_one.toFahrenheit() << " degree fahhrenheit.\n";
    std::cout << t_two.getTemperature() << " degree fahrenheit = " << t_two.toCelsius() << " degree celsius.\n";

    return 0;
}

// Celsius Class
Celsius::Celsius() {}

Celsius::Celsius(float temperature) { this->setTemperatue(temperature); }

void Celsius::setTemperatue(float temperature) { this->temperature = temperature; }

float Celsius::getTemperature() { return this->temperature; }

float Celsius::toFahrenheit() { return this->temperature * 9 / 5.0 + 32; }

void Celsius::display() { std::cout << "The temperatue is " << this->temperature << " degree celsius.\n"; }

// Fahremheit Class
Fahrenheit::Fahrenheit() {}

Fahrenheit::Fahrenheit(float temperature) { this->setTemperatue(temperature); }

void Fahrenheit::setTemperatue(float temperature) { this->temperature = temperature; }

float Fahrenheit::getTemperature() { return this->temperature; }

float Fahrenheit::toCelsius() { return (this->temperature - 32) * 5 / 9.0; }

void Fahrenheit::display() { std::cout << "The temperatue is " << this->temperature << " degree celsius.\n"; }
```

## Question Two

**Assume that you want to check whether the number is prime or not.
Write a program that asks for numbers repeatedly.
When it finishes checking a number the program asks if the user wants to do another calculation.
The response can be 'y' or 'n'.
Don't forget to use the object-oriented concept.**

```C++

#include <iostream>

class Number
{
private:
    int number;

public:
    void setNumber(int number);
    int getNumber();
    bool isPrime();
};

int main(int argc, char const *argv[])
{
    Number n;

    int number;
    char choice;

    while (true)
    {
        std::cout << "\nNumber: ";
        std::cin >> number;

        n.setNumber(number);

        std::cout << "Prime Number : " << (n.isPrime() ? ("True") : ("False")) << "\n";

        std::cout << "Do you want to do another calculation?\n";
        std::cin >> choice;

        if (!(choice == 'y'))
        {
            break;
        }
    }

    return 0;
}

// Number Class
void Number::setNumber(int number) { this->number = number; }

int Number::getNumber() { return this->number; }

bool Number::isPrime()
{
    if (this->number == 1 || this->number == 0)
    {
        return false;
    }

    for (int i = 2; i < this->number; i++)
    {
        if (this->number % i == 0)
        {
            return false;
        }
    }

    return true;
}
```

## Question Three

**reate a class called car park that has int data member for car id, int data member for charge/hour,
and float data member for the parked time.
Make functions to set data members and show the charges and parked hours of the corresponding car id.
Make functions for setting and showing the data members.
Member function should be called from other functions.**

```C++

#include <iostream>
#include <iomanip>

class CarPark
{
private:
    int car_id;
    const int charge_per_hour = 100;
    float parked_time; // Time is taken in terms of hours

public:
    void setId(int);
    void setParkedTime(float);

    int getChargeperHour();
    int getId();
    float getParkedTime();
    void detail();
};

int main(int argc, char const *argv[])
{
    CarPark car_one;

    car_one.setId(12);
    car_one.setParkedTime(1);

    car_one.detail();

    return 0;
}

// CarPark Class
void CarPark::setId(int car_id) { this->car_id = car_id; }
void CarPark::setParkedTime(float parked_time_in_hour) { this->parked_time = parked_time_in_hour; }

int CarPark::getChargeperHour() { return this->charge_per_hour; }
int CarPark::getId() { return this->car_id; }
float CarPark::getParkedTime() { return this->parked_time; }

void CarPark::detail()
{
    std::cout << std::left << std::setw(10) << "Car ID"
              << std::left << std::setw(25) << "Charge per Hour(Rs)"
              << std::left << std::setw(15) << "Time(hrs)"
              << std::left << std::setw(10) << "Total charge(Rs)\n";

    std::cout << std::left << std::setw(10) << this->car_id
              << std::left << std::setw(25) << this->charge_per_hour
              << std::left << std::setw(15) << this->parked_time
              << std::left << std::setw(10) << this->charge_per_hour * this->parked_time << "\n";
}
```

## Question Four

**Write a program with classes to represent a circle, rectangle, and triangle.
Each class should have data members to represent the actual objects and member functions to read and display objects,
find perimeter and area of the objects, and other useful functions.
Use the classes to create objects in your program.**

```C++
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
```

## Question Five

**Assume that an object represents an employee report that contains information like
employee id, total bonus, total overtime in a particular year.
Use an array of objects to represent n employees' reports.
Write a program that displays the report.
Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.**

**An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ..**

```c++
#include <iostream>
#include <time.h>

class Employee
{
private:
    int employee_id;
    float total_bonus;
    float total_overtime;

public:
    void setParm(int, float, float);

    void displayReport();
};

int main(int argc, char const *argv[])
{
    int total_number_of_employee;

    std::cout << "Total number of employee: ";
    std::cin >> total_number_of_employee;

    Employee e[total_number_of_employee];
    int id;
    float bonus, overtime;

    for (int i = 0; i < total_number_of_employee; i++)
    {
        std::cout << "Id: ";
        std::cin >> id;

        std::cout << "Bonus: ";
        std::cin >> bonus;

        std::cout << "Overtime: ";
        std::cin >> overtime;

        std::cout << "\n";

        e[i].setParm(id, bonus, overtime);
    }

    for (int i = 0; i < total_number_of_employee; i++)
    {
        e[i].displayReport();
    }

    return 0;
}

// Employee Class
void Employee::setParm(int employee_id, float total_bonus, float total_overtime)
{
    this->employee_id = employee_id;
    this->total_bonus = total_bonus;
    this->total_overtime = total_overtime;
}

void Employee::displayReport()
{
    std::cout << "An employee with employee id " << this->employee_id << " has received Rs." << this->total_bonus << " as a bonus and had worked " << this->total_overtime << " hours as overtime in " << __DATE__ << "\n";
}
```

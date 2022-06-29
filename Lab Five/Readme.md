# Lab Five

## Question One

**Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.**

```c++
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
```

## Question Two

**Write a class to store x, y, and z coordinates of a point in three-dimensional space.
Overload addition and subtraction operators for addition and subtraction of two coordinate objects.
Implement the operator functions as non-member functions (friend operator functions).**

```C++
#include <iostream>

class Coordinate
{
    int x, y, z;

public:
    Coordinate(int x, int y, int z) : x(x), y(y), z(z){};

    Coordinate operator+(const Coordinate &point)
    {
        return Coordinate(
            this->x + point.x,
            this->y + point.y,
            this->z + point.z);
    }
    Coordinate operator-(const Coordinate &point)
    {
        return Coordinate(
            this->x - point.x,
            this->y - point.y,
            this->z - point.z);
    }

    void showCoordinate()
    {
        std::cout << "X = " << x
                  << " Y = " << y
                  << " Z = " << z << "\n";
    }
};

int main(int argc, char const *argv[])
{
    (Coordinate(1, 2, 3) + Coordinate(4, 5, 6)).showCoordinate();
    (Coordinate(1, 2, 3) - Coordinate(4, 5, 6)).showCoordinate();

    return 0;
}
```

## Question Three

**Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal(!=),
greater than or equal to(>=), and
less than or equal to(<=) operators using member operator functions.**

```C++
#include <iostream>

class Integer
{
    int data;

public:
    Integer(int n) : data(n){};

    bool operator==(const Integer &number)
    {
        return number.data == this->data;
    }
    bool operator!=(const Integer &number)
    {
        return number.data != this->data;
    }
    bool operator<=(const Integer &number)
    {
        return this->data <= number.data;
    }
    bool operator>=(const Integer &number)
    {
        return this->data >= number.data;
    }
    bool operator<(const Integer &number)
    {
        return this->data < number.data;
    }
    bool operator>(const Integer &number)
    {
        return this->data > number.data;
    }
};

int main(int argc, char const *argv[])
{

    std::cout << (Integer(10) == Integer(10)) << std::endl;
    std::cout << (Integer(450) != Integer(70)) << std::endl;
    std::cout << (Integer(23) <= Integer(80)) << std::endl;
    std::cout << (Integer(12) >= Integer(120)) << std::endl;
    std::cout << (Integer(56) > Integer(104)) << std::endl;
    std::cout << (Integer(4350) < Integer(12)) << std::endl;

    return 0;
}
```

## Question Four

**
Write a class Date that overloads prefix and postfix operators to increase the Date object by one day,
while causing appropriate increments to the month and year (use the appropriate condition for leap year).
The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.**

```C++

#include <iostream>

class Date
{
    int year, total_days;
    bool isLeapYear()
    {
        if (this->year % 400)
        {
            return true;
        }
        else if (this->year % 100)
        {
            return false;
        }
        else if (this->year % 4 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Date(int month, int day, int year)
    {

        this->year = year;

        total_days = (month - 1) * 30 + day;
    }

    void printDate()
    {
        int month = (((total_days / 30 + 1) < 12) ? (total_days / 30 + 1)
                                                  : (12));
        // if (isLeapYear())
        {
            std::cout << month << "/" << total_days - (month - 1) * 30 << "/" << year << "\n";
        }
    }

    void operator++()
    {
        this->total_days += 1;

        if (total_days > 361 && isLeapYear())
        {
            total_days = 0;
            this->year += 1;
        }
        else if (total_days > 360 && !isLeapYear())
        {
            total_days = 0;
            this->year += 1;
        }
    }
    void operator++(int)
    {
        this->total_days += 1;

        if (total_days > 361 && isLeapYear())
        {
            total_days = 0;
            this->year += 1;
        }
        else if (total_days > 360 && !isLeapYear())
        {
            total_days = 0;
            this->year += 1;
        }
    }
};

int main(int argc, char const *argv[])
{
    Date d1(12, 29, 2000);

    d1.printDate();

    ++d1;

    d1.printDate();

    d1++;

    d1.printDate();

    d1++;

    d1.printDate();
    return 0;
}
```

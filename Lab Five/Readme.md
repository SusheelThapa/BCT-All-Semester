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

int day_month_in_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date
{
    int year;
    int month;
    int day;

    bool isLeapYear()
    {
        if (year % 4 == 0 && !(year % 100 == 0) && year % 400 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    return true;
            }
            else
                return true;
        }
        return false;
    }

public:
    Date(int month, int day, int year)
    {

        this->year = year;
        this->month = month;
        this->day = day;
    }

    void printDate()
    {

        std::cout << month << "/" << day << "/" << year << "\n";
    }

    /*Prefix*/
    Date operator++()
    {
        int total_days_in_month = day_month_in_year[month - 1];

        if (isLeapYear() && month == 2)
        {
            if (this->day == 29)
            {
                month++;
                this->day = 1;
            }
            else
            {
                this->day++;
            };

            return *this;
        }

        if (this->day + 1 > total_days_in_month)
        {
            this->day = 1;
            month++;
        }
        else
        {
            this->day++;
        }

        if (month > 12)
        {
            month = 1;
            year++;
        }

        return *this;
    }
    /*Post fix*/
    Date operator++(int)
    {
        Date return_date = *this;

        int total_days_in_month = day_month_in_year[month - 1];

        if (isLeapYear() && day == 28 && month == 2)
        {
            this->day++;
            return return_date;
        }

        if (this->day + 1 > total_days_in_month)
        {
            this->day = 1;
            month++;
        }
        else
        {
            this->day++;
        }

        if (month > 12)
        {
            month = 1;
            year++;
        }
        return return_date;
    }
};

int main(int argc, char const *argv[])
{
    Date d1(2, 27, 2000);

    d1.printDate();

    ++d1;
    // d1 = d1 +1;

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

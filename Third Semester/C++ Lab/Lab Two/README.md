# Lab Two

## Question One

**Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the \
structure and print out the values in the format 11/28/2004 by function. Pass the structure to the \
function**

```C++

#include <iostream>
#include <iomanip>

struct Date
{
    int month;
    int day;
    int year;
};

void printDate(struct Date d)
{
    std::cout << "Date: ";
    std::cout << std::setw(2)
              << d.month
              << "/"
              << std::setw(2)
              << d.day
              << "/"
              << std::setw(4)
              << d.year
              << "\n";
    return;
}

int main(int argc, char const *argv[])
{

    struct Date current_date;

    std::cout << "Year: ";
    std::cin >> current_date.year;
    std::cout << "Month: ";
    std::cin >> current_date.month;
    std::cout << "Day: ";
    std::cin >> current_date.day;

    printDate(current_date);

    return 0;
}
```

## Question Two

**Write a program using the function overloading that converts feet to inches. Use function with no
argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by
reference in any one of the function above.**

```C++

#include <iostream>

float feetToInches()
{
    std::cout << "No argument is provide to convert feet to inches\n";
    return 0;
}

float feetToInches(float feet)
{
    return feet * 12;
}

float feetToInches(float &feet, float &inches)
{
    return feet * 12 + inches;
}

int main(int argc, char const *argv[])
{
    float feet, inches;

    std::cout << "Feet : ";
    std::cin >> feet;

    std::cout << "Inches : ";
    std::cin >> inches;

    feetToInches();
    std::cout << "Single argument(feet) function : "
              << feetToInches(feet) << "\n";
    std::cout << "Double argument(feet,inches) function : "
              << feetToInches(feet, inches) << "\n";
    return 0;
}
```

## Question Three

**Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named
"num" and a function named "fun". The "fun" function in "Square" namespace, should return the
square of an integer passed as an argument while the "fun" function in "Cube" namespace, should
return the cube of an integer passed as an argument. In the main function, set the integer variables
"num" of both the namespaces with different values. Then, compute and print the cube of the integer
variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace and the
square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square"
namespace.**

```C++
#include <iostream>

namespace square
{
    int num;

    int fun(int n) { return n * n; }
}

namespace cube
{
    int num;

    int fun(int n) { return n * n * n; }
}

int main(int argc, char const *argv[])
{
    square::num = 3;
    cube::num = 4;

    std::cout << "\n"
              << square::fun(cube::num);
    std::cout << "\n"
              << cube ::fun(square::num);

    return 0;
}

```

## Question Four

Write a function that passes two temperatures by reference and sets the larger of the two numbers to a
value entered by user by using return by reference.

```C++

#include <iostream>

int &larger(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char const *argv[])
{
    int temp_one, temp_two, value;

    std::cout << "Temperature one: ";
    std::cin >> temp_one;

    std::cout << "Temperature Two: ";
    std::cin >> temp_two;

    std::cout << "\nBefore function call\n";
    std::cout << "Temperature One: " << temp_one;
    std::cout << "\nTemperature Two: " << temp_two;

    std::cout << "\n\nValue: ";
    std::cin >> value;

    larger(temp_one, temp_two) = value;

    std::cout << "\nAfter function call\n";
    std::cout << "Temperature One: " << temp_one;
    std::cout << "\nTemperature Two: " << temp_two;

    return 0;
}
```

## Question Five

**Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the
employee salary. Use inline function to display the net payment to the employee by the company.**

```C++
#include <iostream>

inline void displayPaymentToEmployee(int salary)
{
    std::cout << "You wil get Rs." << salary - salary * .1 << " from the company\n";
}

int main(int argc, char const *argv[])
{
    int salary;

    std::cout << "Salary: ";
    std::cin >> salary;

    displayPaymentToEmployee(salary);

    return 0;
}
```

## Question Six

**Write a program that displays the current monthly salary of chief executive officer, information officer,
and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively
in year 2010.
Let us assume that the salaries in year 2009 are
Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default
argument.**

```C++
#include <iostream>

void displayCurrentSalary(int salary, int increment = 0)
{
    std::cout << "Current Salary is " << salary * (100 + increment) / 100.0 << "\n";
}

int main()
{
    int programmer_salary = 18000;
    int system_analyst_salary = 24000;
    int information_officer_salary = 25000;
    int chief_executive_salary = 18000;

    displayCurrentSalary(10000);
    displayCurrentSalary(programmer_salary, 9);
    displayCurrentSalary(system_analyst_salary, 10);
    displayCurrentSalary(information_officer_salary, 12);
    displayCurrentSalary(chief_executive_salary, 12);

    return 0;
}
```

/*
Question_Four.cpp

Write a class Date that overloads prefix and postfix operators to increase the Date object by one day,
while causing appropriate increments to the month and year (use the appropriate condition for leap year).
The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.
*/

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

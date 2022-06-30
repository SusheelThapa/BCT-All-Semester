/*
Question_Four.cpp

Write a class Date that overloads prefix and postfix operators to increase the Date object by one day,
while causing appropriate increments to the month and year (use the appropriate condition for leap year).
The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.
*/

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

    d1.printDate();

    ++d1;

    d1.printDate();

    d1++;

    d1.printDate();

    d1++;

    d1.printDate();

    return 0;
}

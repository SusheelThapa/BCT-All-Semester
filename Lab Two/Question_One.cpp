/*
Question_One.cpp

Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the
structure and print out the values in the format 11/28/2004 by function. Pass the structure to the
function
*/

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

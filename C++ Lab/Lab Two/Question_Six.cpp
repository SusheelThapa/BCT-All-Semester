/*
Question_Six.cpp

Write a program that displays the current monthly salary of chief executive officer, information officer,
and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively
in year 2010.
Let us assume that the salaries in year 2009 are
Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default
argument.
*/

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

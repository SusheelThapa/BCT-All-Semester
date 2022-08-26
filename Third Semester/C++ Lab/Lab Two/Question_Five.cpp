/*
Question_Five.cpp

Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the
employee salary. Use inline function to display the net payment to the employee by the company.

*/

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

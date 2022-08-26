/*

Author : Susheel Thapa

Question_Five_cpp

Assume that an object represents an employee report that contains information like
employee id, total bonus, total overtime in a particular year.
Use an array of objects to represent n employees' reports.
Write a program that displays the report.
Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ...
*/

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
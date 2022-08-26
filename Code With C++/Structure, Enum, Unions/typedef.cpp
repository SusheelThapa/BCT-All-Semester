#include <iostream>
using namespace std;

typedef struct Employee
{
    int id;
    float salary;
    char gender;
} Employee;
//If we use typedef in structure then use can just the name to make structre variable

int main()
{
    //Creating Structure Variable
    Employee E;

    //Assigning Value to variable
    E.id = 8;
    E.salary = 90.89;
    E.gender = 'M';

    cout << "Id : " << E.id << endl;
    cout << "Salary : " << E.salary << endl;
    cout << "Gender : " << E.gender << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Employee
{
private:
    // Declaration inside private modifier are access by only inside class so we made a function to set data and to display data.

    float salary;
    int age;
    char gender;

public:
    //Function Declaration
    void setData(float, int, int);
    void getData();
    // Note both function are kept public so that function are accessible outside the class and on calling function we are able to set data or varible defined under private
};

//Function body
void Employee ::setData(float s, int a, int g)
{
    salary = s;
    age = a;
    gender = g;
}
void Employee ::getData()
{
    cout << "Salary is " << salary << endl;
    cout << "Age is " << age << endl;
    cout << "Gender is " << gender << endl;
}

int main()
{
    //Creaing Object of Employee
    Employee Someone;

    //Calling function to set data
    Someone.setData(546.56, 18, 'M');

    //Calling Function to display the data
    Someone.getData();

    return 0;
}
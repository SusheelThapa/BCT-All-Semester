/*

Question_Two.cpp

Create a class Person and two derived classes Employee and Student,
inherited from class Person.
Now create a class Manager which is derived from two base classes Employee and Student.
Show the use of the virtual base class.
*/

#include <iostream>

class Person
{
public:
    void show()
    {
        std::cout << "Running show function\n";
    }
};

class Employee : public virtual Person
{
};

class Student : public virtual Person
{
};

class Manager : public Employee, public Student
{
};

int main(int argc, char const *argv[])
{
    Manager().show();
    return 0;
}

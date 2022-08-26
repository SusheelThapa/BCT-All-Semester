/*
Question_Four.cpp

Write three derived classes inheriting functionality of base class person
(should have a member function that asks to enter name and age) and with added unique
features of student, and employee, and functionality to assign, change and delete records of
student and employee. And make one member function for printing the address of the objects of
classes (base and derived) using this pointer. Create two objects of the base class and
derived classes each and print the addresses of individual objects. Using a calculator,
calculate the address space occupied by each object and verify this with address spaces
printed by the program.

*/
#include <stdio.h>
#include <iostream>
#include <string>

class Person
{

protected:
    std::string name;
    int age;

public:
    void askDetails()
    {
        std::cout << "Name : ";
        std::cin >> this->name;

        std::cout << "Age: ";
        std::cin >> age;
    }

    void showDetails()
    {
        std::cout << "Name : " << this->name;

        std::cout << "Age: " << age;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};

class Student : public Person
{
public:
    void assignRecord(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void changeRecord(std::string name = "", int age = 0)
    {
        if (name != "")
        {
            this->name = name;
        }
        if (age > 0)
        {
            this->age = age;
        }
    }

    void deleteRecord()
    {
        this->name = "";
        this->age = 0;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};
class Employee : public Person
{

public:
    void assignRecord(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void changeRecord(std::string name = "", int age = 0)
    {
        if (name != "")
        {
            this->name = name;
        }
        if (age > 0)
        {
            this->age = age;
        }
    }

    void deleteRecord()
    {
        this->name = "";
        this->age = 0;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};

int main()
{
    Person p1;
    Person p2;

    Student s;

    Employee e;

    p1.showAddress();
    p2.showAddress();
    s.showAddress();
    e.showAddress();

    std::cout << sizeof(p1) << std::endl;
    std::cout << sizeof(p2) << std::endl;
    std::cout << sizeof(s) << std::endl;
    std::cout << sizeof(e) << std::endl;
    return 0;
}

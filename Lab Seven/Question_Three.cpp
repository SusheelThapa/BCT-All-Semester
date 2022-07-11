/*
Question_Three.cpp

Write a program with an abstract class Student and create derive classes Engineering,
Medicine and Science from base class Student.Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.

*/

#include <iostream>

class Student
{
public:
    void display()
    {
        std::cout << "Student class";
    }
};

class Engineering : public Student
{
public:
    void display()
    {
        std::cout << "Engineering class";
    }
};
class Medical : public Student
{
};
class Science : public Student
{
};

int main()
{
    Engineering *e = new Engineering;
    Medical *m = new Medical;
    Science *s = new Science;

    Student *a[3];
    a[0] = e;
    a[1] = m;
    a[2] = s;

    std::cout << sizeof(a[0]) << " ";
    std::cout << sizeof(a[1]) << " ";
    std::cout << sizeof(a[2]) << " ";

    a[0]->display();
    e->display();
    return 0;
}

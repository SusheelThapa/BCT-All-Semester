
/*
Question_Four.cpp

Write a program that stores the information about students (name, student id, department, and address)
in a structure and then transfers the information to a file in your directory.
Finally, retrieve the information from your file and print it in the proper format on your output screen.
*/

#include <iostream>
#include <fstream>
#include <string>

class Student
{
    std::string name;
    int student_id;
    std::string department;
    std::string address;

public:
    Student(){};
    Student(std::string name, int student_id, std::string department, std::string address)
    {
        this->name = name;
        this->student_id = student_id;
        this->department = department;
        this->address = address;
    }
    void display()
    {
        std::cout << "Name :" << name
                  << "\nStudent Id: " << student_id
                  << "\nDepartment: " << department
                  << "\nAddress: " << address;
    }
};

int main(int argc, char const *argv[])
{
    Student a = Student("Someona", 4, "BCT", "Nepal");
    Student b;

    std::fstream file;
    file.open("File.txt", std::ios::in | std::ios::out);

    file.write(reinterpret_cast<char *>(&a), sizeof(a));

    file.seekg(0);

    file.read(reinterpret_cast<char *>(&a), sizeof(a));

    file.close();

    a.display();

    return 0;
}

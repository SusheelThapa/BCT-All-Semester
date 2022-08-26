/*

Question_Three.cpp

Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope".
Your program should be made such that it should show the order of constructor and destructor invocation.
*/

#include <iostream>

class Department
{
private:
    int id;
    const char *name;

public:
    Department(int i, const char *n) : id(i), name(n)
    {
        std::cout << "Object is created with id " << id << " and department name " << name << "\n";
    }
    ~Department()
    {
        std::cout << "Object had gone out of scope.\n";
    }
};

int main()
{
    Department d(4, std::string("BCT").c_str());
    return 0;
}

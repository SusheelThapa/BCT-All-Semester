#include <iostream>
using namespace std;

//Creating structure
struct Student
{
    int id;
    int phone_number;
    char gender;
};

int main()
{
    //Creating structure variable
    struct Student s;

    //Assigning value and printing to structure variable
    s.id = 4;
    s.phone_number = 98456;
    s.gender = 'M';

    cout << "Id : " << s.id << endl;
    cout << "Phone number : " << s.phone_number << endl;
    cout << "Gender : " << s.gender << endl;

    return 0;
}
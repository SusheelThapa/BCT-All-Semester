#include <iostream>
using namespace std;

//Creating Class
class Student
{
    
public:
//Since Access modifier is public so value inside public can be access outside the class 
    int id, standard, age;
    char section;
};

int main()
{
    //Creating Object
    Student Susheel;

    //Setting value
    Susheel.id = 66;
    Susheel.standard = 10;
    Susheel.age = 18;
    Susheel.section = 'A';

    //Showing output
    cout << "ID is " << Susheel.id << endl;
    cout << "Standard is " << Susheel.standard << endl;
    cout << "Age is " << Susheel.age << endl;
    cout << "Section is " << Susheel.section << endl;

    return 0;
}
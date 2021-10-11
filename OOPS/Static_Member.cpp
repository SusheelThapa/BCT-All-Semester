#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count; //Static Variable

public:
    void setData(void);
    void getData(void);
    void getCount(void);
};

int Employee ::count; //Default value is Zero for  static variable. Outside class, storage class should not be mentioned

void Employee::setData()
{
    cout << "Id of Employee: ";
    cin >> id;
    count++;
}

void Employee::getData()
{
    cout << "Id of this employee is " << id << endl;
}

void Employee::getCount()
{
    cout << "Total number of Employee is " << count << endl;
}

int main()
{
    Employee Someone, Noone, Anyone;

    Someone.setData();
    Someone.getData();
    Someone.getCount();

    Anyone.setData();
    Anyone.getData();
    Anyone.getCount();

    Noone.setData();
    Noone.getData();
    Noone.getCount();

    return 0;
}
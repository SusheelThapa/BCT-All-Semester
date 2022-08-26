#include <iostream>
using namespace std;

class Student
{
    int student_id;
    int monthly_fee;
    static int count;

public:
    void setData(void)
    {
        count = count + 1;
        monthly_fee = 2000;
        cout << "Id of student " << count << " : ";
        cin >> student_id;
    }

    void getData(void)
    {
        cout << "Student Id : " << student_id << endl;
        cout << "Monthly Fee : " << monthly_fee << endl
             << endl;
    }
};

int Student ::count;
int main()
{
    Student GradeEight[4];

    for (int i = 0; i < 4; i++)
    {
        GradeEight[i].setData();
    }

    for (int i = 0; i < 4; i++)
    {
        GradeEight[i].getData();
    }

    return 0;
}
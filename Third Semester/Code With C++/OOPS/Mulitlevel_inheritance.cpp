#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
    //Since it is inherited publicly so protected member(roll number) is inherited as protected and public member as public
protected:
    float maths_marks;
    float physics_marks;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m, float p)
{
    maths_marks = m;
    physics_marks = p;
}
void Exam::get_marks(void)
{
    cout << "Maths marks is " << maths_marks << endl;
    cout << "Physics marks is " << physics_marks << endl;
}

class Result : public Exam
{
    //Since it is inherited publicly so protected member is inherited as protected and public member as public
protected:
    float percentage;

public:
    void display();
};
void Result ::display()
{
    percentage = (maths_marks + physics_marks) / 2.0;
    get_roll_number();
    get_marks();
    cout << "Percentage is " << percentage << "%" << endl;
}

int main()
{
    Result Someone;

    Someone.set_roll_number(420);
    Someone.set_marks(99.9, 100);

    Someone.display();

    return 0;
}
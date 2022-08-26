#include <iostream>
using namespace std;

/*
From Base class Student, we have derived two class
Then, from two created class we have create another class name Result

But roll_number from Student has been inherited to both class Test and Sports.
When we make class Result from Test and Sport then we have two roll_number(one from each class) so that will created error

And this is solve using virtual class 

Refer code in line 33 and 52
*/

class Students
{
protected:
    int roll_number;

public:
    void setRollNumber(int roll)
    {
        roll_number = roll;
    }

    void printRollNumber(void)
    {
        cout << "Roll Number : " << roll_number << endl;
    }
};

class Test : virtual public Students
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void printMarks(void)
    {
        cout << "Maths marks : " << maths << endl;
        cout << "Physics marks : " << physics << endl;
    }
};

class Sports : virtual public Students
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }

    void printScore(void)
    {
        cout << "PT Score : " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total_marks;

public:
    void printResult(void)
    {
        total_marks = maths + physics + score;
        printRollNumber();
        printMarks();
        printScore();
        cout << "Total Marks : " << total_marks << endl;
    }
};

int main()
{
    Result Anyone;

    Anyone.setRollNumber(20);
    Anyone.setMarks(100, 95);
    Anyone.setScore(90);
    Anyone.printResult();
    return 0;
}
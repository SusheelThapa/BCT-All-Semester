#include <iostream>
using namespace std;

//Class with pure virtual functions is called Abstract Base Class
class HumanBluePrint
{
protected:
    string name;
    int age;
    int intelligent;

public:
    HumanBluePrint(string n, int a, int i) : name(n), age(a), intelligent(i) {}

    // Creating a Pure virtual Class --> This will say us to overwrite this function when we derive class from it.
    virtual void introduceYourSelf(void) = 0;
};

class AdvanceHuman : public HumanBluePrint
{
protected:
    string special_power;

public:
    AdvanceHuman(string n, int a, int i, string s) : HumanBluePrint(n, a, i), special_power(s) {}

    //OverWrite to Pure Virtual Function
    void introduceYourSelf(void)
    {
        cout << "Name: " << name << endl
             << "Age : " << age << endl
             << "Intelligent : " << intelligent << endl
             << "Speical Power : " << special_power << endl;
    }
};

int main()
{
    AdvanceHuman Nobita = AdvanceHuman("Nobita", 18, 120, "Time Travel");

    Nobita.introduceYourSelf();

    return 0;
}
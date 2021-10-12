#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Noone
{
public:
    T1 first;
    T2 second;
    T3 third;

    Noone(T1 a, T2 b, T2 c)
    {
        first = a;
        second = b;
        third = c;
    }

    void display(void)
    {
        cout << "The value of first is " << first << endl
             << "The value of second is " << second << endl
             << "The value of third is " << third << endl
             << endl;
    }
};
int main()
{
    Noone<> object_one(3, 6, 'A');

    object_one.display();

    Noone<char, float, int> object_two('N', 3.4, 2);

    object_two.display();

    return 0;
}
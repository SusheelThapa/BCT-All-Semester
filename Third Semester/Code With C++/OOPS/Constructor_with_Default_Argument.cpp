#include <iostream>
using namespace std;

class Coordinate
{
    int x;
    int y;

public:

    //Constructor with default arguments
    Coordinate(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    void printData(void)
    {
        cout << "Coordinate is (" << x << ',' << y << ')' << endl;
    }
};

int main()
{
    Coordinate point_one(3, 6), point_two(6), point_three;

    point_one.printData();
    point_two.printData();
    point_three.printData();

    return 0;
}
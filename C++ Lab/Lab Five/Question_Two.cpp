/*

Question_Two.cpp
Write a class to store x, y, and z coordinates of a point in three-dimensional space.
Overload addition and subtraction operators for addition and subtraction of two coordinate objects.
Implement the operator functions as non-member functions (friend operator functions).
*/

#include <iostream>

class Coordinate
{
    int x, y, z;

public:
    Coordinate(int x, int y, int z) : x(x), y(y), z(z){};

    Coordinate operator+(const Coordinate &point)
    {
        return Coordinate(
            this->x + point.x,
            this->y + point.y,
            this->z + point.z);
    }
    Coordinate operator-(const Coordinate &point)
    {
        return Coordinate(
            this->x - point.x,
            this->y - point.y,
            this->z - point.z);
    }

    void showCoordinate()
    {
        std::cout << "X = " << x
                  << " Y = " << y
                  << " Z = " << z << "\n";
    }
};

int main(int argc, char const *argv[])
{
    (Coordinate(1, 2, 3) + Coordinate(4, 5, 6)).showCoordinate();
    (Coordinate(1, 2, 3) - Coordinate(4, 5, 6)).showCoordinate();

    return 0;
}

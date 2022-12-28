#include <iostream>
#include <cmath>
using namespace std;

struct Coordinates
{
    float x, y;
};

float getSumOfX(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += coordinates[i].x;
    }
    return sum;
}

float getSumOfY(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += coordinates[i].y;
    }
    return sum;
}

float getSumOfLogY(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += log(coordinates[i].y);
    }
    return sum;
}

float getSumOfXY(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += coordinates[i].x * coordinates[i].y;
    }
    return sum;
}
float getSumOfXLogY(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += coordinates[i].x * log(coordinates[i].y);
    }
    return sum;
}

float getSumOfXX(Coordinates *coordinates, int totalCoordinate)
{
    float sum = 0;
    for (int i = 0; i < totalCoordinate; i++)
    {
        sum += coordinates[i].x * coordinates[i].x;
    }
    return sum;
}

void solvePatternTwo(Coordinates *coordinates, int totalCoordinate)
{
    float sumX = getSumOfX(coordinates, totalCoordinate);
    float sumLogY = getSumOfLogY(coordinates, totalCoordinate);
    float sumXX = getSumOfXX(coordinates, totalCoordinate);
    float sumXLogY = getSumOfXLogY(coordinates, totalCoordinate);

    float determinant = totalCoordinate * sumXX - sumX * sumX;

    float determinantA = sumLogY * sumXX - sumXLogY * sumX;
    float determinantB = totalCoordinate * sumXLogY - sumLogY * sumX;

    float a = exp(determinantA / determinant);
    float b = determinantB / determinant;

    cout << "The best fit linear curve is y = " << a << "e^" << b << "x" << endl;
}

void solvePatternOne(Coordinates *coordinates, int totalCoordinate)
{

    float sumX = getSumOfX(coordinates, totalCoordinate);
    float sumY = getSumOfY(coordinates, totalCoordinate);
    float sumXX = getSumOfXX(coordinates, totalCoordinate);
    float sumXY = getSumOfXY(coordinates, totalCoordinate);

    float determinant = totalCoordinate * sumXX - sumX * sumX;

    float determinantA = sumY * sumXX - sumXY * sumX;
    float determinantB = totalCoordinate * sumXY - sumY * sumX;

    float a = determinantA / determinant;
    float b = determinantB / determinant;

    cout << "The best fit linear curve is y = " << a << " + " << b << "x" << endl;
}

int main()
{

    int totalCoordinate;

    Coordinates *coordinates;

    cout << "Total Coordinate: ";
    cin >> totalCoordinate;

    coordinates = new Coordinates[totalCoordinate];

    for (int i = 0; i < totalCoordinate; i++)
    {
        cout << "X: ";
        cin >> coordinates[i].x;
        cout << "Y: ";
        cin >> coordinates[i].y;
    }

    /**
     * Using only one based on which you are doing
     * Pattern One: y = a + bx
     * Pattern Two: y = a * e^x
    */
    solvePatternOne(coordinates, totalCoordinate);
    solvePatternTwo(coordinates, totalCoordinate);
    
    return 0;
}
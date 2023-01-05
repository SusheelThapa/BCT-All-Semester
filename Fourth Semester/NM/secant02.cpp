/*
Program: Secant Method
*/

#include <iostream>
#include <cmath>

using namespace std;

typedef struct interval
{
    /*
     * A custom data type to store the interval
     */

    float start;
    float end;
} interval;

float getFunctionValue(float x)
{
    /*
     * It is used to get the value of y after putting x in function
     */

    return x * sin(x) + cos(x);
}

float getC(interval i)
{
    /*
     * It is used to get the value of c defined in secant method.
     */

    float numerator = i.end * getFunctionValue(i.start) - i.start * getFunctionValue(i.end);
    float denominator = getFunctionValue(i.start) - getFunctionValue(i.end);

    return numerator / denominator;
}

float solveBySecant(interval i)
{
    /*
     * It finds the root of the function in recursive manner
     */

    float c = getC(i);

    if (fabs(getFunctionValue(c)) <= 0.0001)
    {
        return c;
    }

    interval newInterval = {i.end, c};
    solveBySecant(newInterval);
}

int main()
{

    interval startingInterval;

    cout << "Starting point: ";
    cin >> startingInterval.start;

    cout << "Ending point: ";
    cin >> startingInterval.end;

    cout << "The root of the expression x * sinx + cosx is "
         << solveBySecant(startingInterval)
         << endl;

    return 0;
}
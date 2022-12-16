/*
Program: Bisection Method
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

bool checkInterval(interval i)
{
    /*
     * It is used to check if the interval consist of root or not
     */

    return getFunctionValue(i.start) * getFunctionValue(i.end) < 0;
}

float getIntervalMidPoint(interval i)
{
    /*
     * It is used to get the midpoint of the interval.
     */

    return (i.start + i.end) / 2.0;
}

float solveByBisection(interval i)
{
    /*
     * It finds the root of the function in recursive manner
     */

    float midPoint = getIntervalMidPoint(i);

    // Terminating Condition
    if (fabs(getFunctionValue(midPoint)) <= 0.0001)
    {
        return midPoint;
    }

    // Possible Interval
    interval leftInterval = {i.start, midPoint};
    interval rightInterval = {midPoint, i.end};

    // Checking which interval consist of root and calling recursively
    if (checkInterval(leftInterval))
    {
        solveByBisection(leftInterval);
    }
    else if (checkInterval(rightInterval))
    {
        solveByBisection(rightInterval);
    }
}

int main()
{

    interval startingInterval;

    do
    {
        cout << "Starting point: ";
        cin >> startingInterval.start;

        cout << "Ending point: ";
        cin >> startingInterval.end;

    } while (!checkInterval(startingInterval));

    cout << "The root of the expression x * sinx + cosx is "
         << solveByBisection(startingInterval)
         << endl;

    return 0;
}
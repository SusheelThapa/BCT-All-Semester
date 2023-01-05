/**
 * You can write only one function while writing in you report
 * form getFunctionValue() and getDerivative() function.
 * Make sure you write corresponding function and its derivative
 */

#include <iostream>
#include <cmath>
using namespace std;

float getFunctionValue(float x)
{
    // return x * x * x + x * x + x + 7;
    // return 3 * x - exp(-x);
    return x * sin(x) + cos(x);
}

float getDerivative(float x)
{

    // return 3 * x * x + 2 * x + 1;
    // return 3 + exp(-x);
    return x * cos(x);
}

float solveByNetwonRaphson(float x)
{
    if (fabs(getFunctionValue(x)) < 0.0001)
    {
        return x;
    }
    else
    {
        float derivativeValue = getDerivative(x);

        if (derivativeValue != 0)
        {
            x = x - getFunctionValue(x) / derivativeValue;
            solveByNetwonRaphson(x);
        }
        else
        {
            return x;
        }
    }
}

int main()
{
    float x;

    cout << "Initial value of x: ";
    cin >> x;

    cout << solveByNetwonRaphson(x) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int getFactorial(int number, int fact = 1)
{
    if (number == 1)
    {
        return fact;
    }
    else
    {
        return getFactorial(number - 1, number * fact);
    }
}

int main()
{
    cout << "The factorial of number 6 is " << getFactorial(6) << endl;

    return 0;
}
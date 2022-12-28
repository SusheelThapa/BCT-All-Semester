#include <iostream>
using namespace std;

int getFactorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * getFactorial(number - 1);
    }
}

int main()
{
    cout << "The factorial of number 6 is " << getFactorial(6) << endl;

    return 0;
}
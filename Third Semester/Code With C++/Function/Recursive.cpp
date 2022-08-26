#include <iostream>
using namespace std;

//Function that calls itself is called Recursive function
int factorial(int n)
{
    //Base condition
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); //Calling itself
    }
}

int main()
{
    int number;

    cout << "Number : ";
    cin >> number;

    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
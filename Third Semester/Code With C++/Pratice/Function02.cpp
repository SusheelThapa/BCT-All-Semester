#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int number;

    cout << "Number: ";
    cin >> number;

    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    
    return 0;
}
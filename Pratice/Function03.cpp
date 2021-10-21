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

float combination(int n, int r)
{
    if (r > n || r < 0 || n < 0)
    {
        return -1;
    }
    else
    {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r?\n";
    cin >> n >> r;

    cout << "The combination is " << combination(n, r) << endl;

    return 0;
}
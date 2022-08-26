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
    int n;
    
    cout << "Value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
            
        }
        cout << endl;
    }

    return 0;
}
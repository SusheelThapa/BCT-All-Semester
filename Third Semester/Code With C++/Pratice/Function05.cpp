#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of first " << n << " natural number is " << sum;
    return 0;
}
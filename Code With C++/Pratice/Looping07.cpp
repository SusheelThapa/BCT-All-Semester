#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int number, remainder, reverse = 0;

    cin >> number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    cout << "The reverse number is " << reverse << endl;
    
    return 0;
}
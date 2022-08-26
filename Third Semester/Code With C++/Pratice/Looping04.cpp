#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int number, i;

    cin >> number;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "Not Prime Number" << endl;
            break;
        }
    }
    if (i == number)
    {
        cout << "Prime Number" << endl;
    }
    
    return 0;
}
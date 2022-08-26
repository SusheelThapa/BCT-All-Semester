#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greater" << endl;
        }
        else
        {
            cout << c << " is greater" << endl;
        }
    }
    else if (a < b)
    {
        if (b > c)
        {
            cout << b << " is greater" << endl;
        }
        else
        {
            cout << c << " is greater" << endl;
        }
    }
    
    return 0;
}
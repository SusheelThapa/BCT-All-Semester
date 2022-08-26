#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0){
            continue;
        }
            cout << i << endl;
    }
    return 0;
}
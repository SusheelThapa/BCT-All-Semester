#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int a, b;
    int i, j;

    cin >> a >> b;

    for (i = a; i <= b; i++)
    {

        for (j = 2; j < i;j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (j != i)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
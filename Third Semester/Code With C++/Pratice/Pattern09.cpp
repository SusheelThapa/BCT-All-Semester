#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Height of 0-1 Pattern: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ((i + j) % 2 == 0) ? (cout << 1 << " ") : (cout << 0 << " ");
        }
        cout << endl;
    }

    return 0;
}
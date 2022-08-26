#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Height of Pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= (height - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Height of Pyramid: ";
    cin >> height;

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
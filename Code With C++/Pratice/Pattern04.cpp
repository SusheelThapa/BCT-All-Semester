#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height;

    cout << "Height of Pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (i + j >= 6)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
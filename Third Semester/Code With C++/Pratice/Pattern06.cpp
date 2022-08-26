#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height, number = 1;

    cout << "Height of Pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << number++ << " ";
        }
        cout << endl;
    }

    return 0;
}
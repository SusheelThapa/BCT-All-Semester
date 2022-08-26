#include <iostream>
using namespace std;

int main()
{
    int size, space;
    cout << "Size of Rhombus: ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        space = size;
        for (int j = 1; j <= size; j++)
        {
            while (space + 1 - i != 0)
            {
                cout << " ";
                space--;
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int number = 4;
    int track = 1;

    for (int i = 1; i <= 2 * number; i++)
    {
        for (int j = 1; j <= 2 * number; j++)
        {
            if (j <= track || j > 2 * number - track)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;

        if (i < number)
        {
            track++;
        }
        else if (i > number)
        {
            track--;
        }
       
    }

    return 0;
}
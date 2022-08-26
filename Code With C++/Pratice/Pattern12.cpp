#include <iostream>
using namespace std;

int main()
{
    int height, j, status = 0;

    cout << "Height of Palindromic Pattern: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int k = height - i; k >= 1; k--)
        {
            cout << "  ";
        }
        j = i;
        do
        {
            cout << j << " ";
            if (j > 1 && status == 0)
            {
                j--;
            }
            else if (j >= 1 && status == 1)
            {
                j++;
            }

            if (j - 1==0)
            {
                status == 1;
            }

        } while (j != i);
    }

    return 0;
}
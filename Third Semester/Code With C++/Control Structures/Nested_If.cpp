#include <iostream>
using namespace std;

int main()
{
    int savings;

    cout << "Savings:";
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Party in ClubHouse.\n";
        }
        else
        {
            cout << "Party in 5 star hotel\n";
        }
    }
    else
    {
        cout << "I wonot have party with my friends.\n";
    }
    
    return 0;
}
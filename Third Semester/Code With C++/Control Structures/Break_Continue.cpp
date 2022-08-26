#include <iostream>
using namespace std;

int main()
{
    /*
    Hari's Mother allows him to go out only in odd date of month.
    And pocket money of Hari is 3000 rupees

    When he go out he spend 300 rupees
    Find out on which date he can go out.
    */

    int pocket_money = 3000;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocket_money == 0)
        {
            break;
        }
        cout << "Date: " << date << endl;
        cout << "You can go out.\n";

        pocket_money -= 300;
    }

    /*
    break is used to terminate the loop
    continue is used to skip current iteration of the loop
    */

    return 0;
}
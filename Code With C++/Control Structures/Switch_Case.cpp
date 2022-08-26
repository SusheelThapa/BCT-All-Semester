#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Number from 1-7 : " << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;

    default:
        cout << "Number doesnot lies between 1-7." << endl;
        break;
    }

    return 0;
}
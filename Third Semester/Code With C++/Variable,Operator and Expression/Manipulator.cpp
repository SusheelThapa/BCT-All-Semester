#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
        Endl is used to creata newline
        setw(number) is used to create width for the data to display

        setw is similary to formatted output in C

    */
   
    int a = 9, b = 89, c = 4567;

    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;
    cout << "Value of a is " << setw(6) << a << endl;
    cout << "Value of b is " << setw(6) << b << endl;
    cout << "Value of c is " << setw(6) << c << endl;

    return 0;
}
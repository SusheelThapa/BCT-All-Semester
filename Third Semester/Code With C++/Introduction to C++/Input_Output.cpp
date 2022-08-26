#include <iostream>

using namespace std;

int main()
{
    int number_one, number_two;

    cout << "Enter the value of number one?\n";
    cin >> number_one;
    cout << "Enter the value of number two?\n";
    cin >> number_two;

    cout << "The sum is " << number_one + number_two;

    /*
        << --> This is insertion operator
        >> --> This is extraction operator
    */
    return 0;
}
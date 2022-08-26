/*
    In Line number 12 we have declare constant 'pi' and
    we try to change its value in line number 17, where 
    error has been encountered.
    Value of constant cannot be change
*/

#include <iostream>

using namespace std;

int main()
{

    const double pi = 22 / 7.0;
    cout << pi << endl;

    pi = 684204;

    return 0;
}
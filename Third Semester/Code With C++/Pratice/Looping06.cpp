#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    char operand;
    float operator_one, operator_two;

    cin >> operator_one >> operator_two >> operand;

    switch (operand)
    {
    case '+':
        cout << operator_one + operator_two;
        break;

    case '-':
        cout << operator_one - operator_two;
        break;

    case '*':
        cout << operator_one * operator_two;
        break;

    case '/':
        cout << operator_one / operator_two;
        break;

    default:
        cout << "Operator Error";
        break;
    }
    return 0;
}
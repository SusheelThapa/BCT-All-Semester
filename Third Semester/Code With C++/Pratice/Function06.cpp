#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
    return (a * a + b * b == c * c) || (a * a + c * c == b * b) || (a * a == b * b + c * c);
}

int main()
{
    int a, b, c;

    cout << "Enter three number?\n";
    cin >> a >> b >> c;

    if (check(a, b, c))
    {
        cout << "It is pythagorian triplet." << endl;
    }
    else
    {
        cout << "It isn't pythagorian triplet." << endl;
    }

    return 0;
}
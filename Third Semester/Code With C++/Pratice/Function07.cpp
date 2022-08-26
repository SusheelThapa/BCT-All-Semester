#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary)
{

    int remainder, power = 0, decimal = 0;

    while (binary != 0)
    {
        remainder = binary % 10;

        decimal = pow(2, power) * remainder + decimal;

        binary /= 10;

        power++;
    }

    return decimal;
}
int main()
{
    int binary;

    // cout << "Binary Number :";
    cin >> binary;

    cout << "Decimal : " << binaryToDecimal(binary);

    return 0;
}
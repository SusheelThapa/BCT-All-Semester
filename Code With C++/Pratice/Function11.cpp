#include <bits/stdc++.h>

using namespace std;

int decimalToOctal(int decimal)
{
    int octal = 0, power = 0;

    while (decimal != 0)
    {
        octal += (decimal % 8) * pow(10, power);
        power++;
        decimal /= 8;
    }
    return octal;
}
int main()
{
    int decimal;

    cout << "Decimal : ";
    cin >> decimal;

    cout << "Octal is " << decimalToOctal(decimal);

    return 0;
}
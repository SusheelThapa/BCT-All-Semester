#include <bits/stdc++.h>

using namespace std;

int decimalToBinary(int decimal)
{
    int binary = 0, power = 0;

    while (decimal != 0)
    {
        binary += (decimal % 2) * pow(10, power);
        power++;
        decimal /= 2;
    }
    return binary;
}
int main()
{
    int decimal;

    cout << "Decimal : ";
    cin >> decimal;

    cout << "Binary is " << decimalToBinary(decimal);

    return 0;
}
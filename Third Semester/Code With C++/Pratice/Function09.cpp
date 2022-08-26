#include <bits/stdc++.h>

using namespace std;

int hexaToDecimal(string hexa)
{
    int remainder, decimal = 0, power = 0;

    int size = hexa.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (hexa[i] >= '0' && hexa[i] <= '9')
        {
            decimal += pow(16, power) * (hexa[i] - '0');
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            decimal += pow(16, power) * (hexa[i] - 'A' + 10);
        }
        power++;
    }

    return decimal;
}
int main()
{
    string hexa;
    
    cout << "HexaDecimal: ";
    cin >> hexa;

    cout << "Decimal Number is " << hexaToDecimal(hexa);
    return 0;
}
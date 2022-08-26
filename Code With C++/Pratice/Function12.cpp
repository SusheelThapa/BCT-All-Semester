#include <iostream>
#include <string>

using namespace std;

string decimalToHexadecimal(int decimal)
{
    string hexa;
    char digit;

    int copy = decimal, base_power = 1;

    while (copy != 0)
    {
        if (copy >= base_power)
        {
            base_power *= 16;
            continue;
        }
        break;
    }

    while (base_power != 0)
    {
        digit = decimal / base_power;

        decimal = decimal - int(digit) * base_power;

        if (digit <= 9)
        {
            digit = digit + '0';
        }
        else if (digit <= 15)
        {
            digit = digit - 10 + 'A';
        }

        hexa.push_back(digit);

        base_power /= 16;
    }

    return hexa;
}

int main()
{

    int decimal;

    cout << "Decimal : ";
    cin >> decimal;

    cout << "HexaDecimal is " << decimalToHexadecimal(decimal);

    return 0;
}
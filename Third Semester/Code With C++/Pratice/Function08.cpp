 #include <iostream>
#include <cmath>

using namespace std;

int octalToBinary(int octal)
{
    int remainder, decimal = 0, power = 0;

    while (octal != 0)
    {
        remainder = octal % 10;
        decimal = pow(8, power) * remainder + decimal;
        power++;
        octal /= 10;
    }

    return decimal;
}
int main()
{
    int octal;

    cout << "Octal Number: ";
    cin >> octal;

    cout << "Decimal Number is " << octalToBinary(octal);

    return 0;
}
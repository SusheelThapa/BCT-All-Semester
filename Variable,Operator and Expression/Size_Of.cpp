#include <iostream>

using namespace std;

int main()
{
    cout << "SIZE OF DIFFERENT DATA TYPE IN C++" << endl
         << endl;

    cout << "Size of int " << sizeof(int) << " bytes" << endl;
    cout << "Size of float " << sizeof(float) << " bytes" << endl;
    cout << "Size of char " << sizeof(char) << " bytes" << endl;
    cout << "Size of double " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool " << sizeof(bool) << " bytes" << endl
         << endl
         << endl
         << endl;

    cout << "SIZE OF TYPE MODIFIER WITH INT IN C++" << endl
         << endl;
    cout << "Size of signed int " << sizeof(signed int) << " bytes" << endl;
    cout << "Size of unsigned int " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of short int " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int " << sizeof(long long int) << " bytes" << endl;

    return 0;
}
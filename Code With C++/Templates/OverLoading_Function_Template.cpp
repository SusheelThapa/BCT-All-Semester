#include <iostream>
using namespace std;

template <class T1>
void greet(T1 any)
{
    cout << "Good  Morning , " << any << " from template function" << endl
         << endl;
}

void greet(string any)
{
    cout << "Good  Morning , " << any << " from non-template function" << endl
         << endl;
}

int main()
{
    greet(string("Susheel")); //Exact Match take top most priority

    greet(3);

    return 0;
}
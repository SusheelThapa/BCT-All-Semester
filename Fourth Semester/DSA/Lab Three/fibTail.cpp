#include <iostream>
using namespace std;

int fibonacci(int index, int a = 0, int b = 1)
{
    if (index == 1)
        return a;
    else if (index == 2)
        return b;
    return fibonacci(index - 1, b, a + b);
}
int main()
{
    cout << fibonacci(5);
    return 0;
}
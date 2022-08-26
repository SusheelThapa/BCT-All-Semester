#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 9, b = 7;

    cout << "Before Function call, value of a and b is " << a << " and " << b << endl;

    swap(a, b);

    cout << "After Function Call, value of a and b is " << a << " and " << b << endl;

    /*
    You will find that the value won't swap(get exchanged) as a copy of a,b is passed to the function not the orginal value

    It is just like giving photocopy to your friend. And even if he tear it apart, it won't affect the orginal copy.
    */

    return 0;
}
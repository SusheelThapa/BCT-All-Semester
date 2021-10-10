#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 9, b = 10;

    cout << "Before Function call, value of a and b is " << a << " and " << b << endl;

    swap(&a, &b);

    cout << "After Function Call, value of a and b is " << a << " and " << b << endl;

    /*
    Here we can see that the value of a and b has been changed(swap).
    As when have provided them address of variable not the copy

    It is just like giving the location of orginal file in computer to you friend.
    And if he does any change in that then it will reflect in the orginal copy too(as orginal file has been changed)
    */
    return 0;
}
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    //Call By Refrence Normal Method
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

    //Call by Refrence Refrence Variable Method
    int c = 90, d = 79;

    cout << "Before Function call, value of a and b is " << c << " and " << d << endl;

    swapRefVar(c, d);

    cout << "After Function Call, value of a and b is " << c << " and " << d << endl;

    /*
    Here we can see the value has been changed.

    As a person can be called by many name like mother call babu , father call chora and his friends call him Ram.
    Then he some one punch on nose of babu , then punch is over chora and Ram as name is different but what they refer is same

    In above program, both c and a refer same thing only name are different so change in a is reflect in c too. 
    Same goes with d and b
    */
    return 0;
}
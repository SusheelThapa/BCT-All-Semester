#include <iostream>

using namespace std;

int main()
{
    int number = 90;

    //Declaration of Pointer Variable
    int *pointer;

    //Assigning address of number to pointer
    pointer = &number;

    //Printing address of variable number
    cout << "The address of number is " << &number << endl;
    cout << "The value of pointer is " << pointer << endl;

    //Printing value of number and value store in address stored by pointer
    cout << "Value of number is " << number << endl;
    cout << "Value stored in address stored by pointer is " << *pointer << endl;

    //Printing address of pointer variable
    cout << "Address value of pointer is " << &pointer << endl;

    /*
        Note:
            * --> This is derefrence operator used to get the value store in the given address

            & --> This is address of operator used to get the address of any variable
    */
   
    return 0;
}
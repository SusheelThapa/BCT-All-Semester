#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Number: ";
    cin >> number;

    /*
    If statement
    Syntax:
       if (// condition )
   {
       // code 
   } 
    */

    if (number % 2==0)
    {
        cout << "It is even number" << endl;
    }

    /*
    If..else statement
    Syntax:
       if (// condition )
   {
       // code 
   } 
    else
    {
        //code
    }
    */

    if (number % 2 ==0)
    {
        cout << "It is even number" << endl;
    }
    else
    {
        cout << "It is odd number" << endl;
    }

    /*
    if..elif..else ladder

    if ( condition )
    {
         code 
    }
    else if ( condition )
    {
         code 
    }
    else if ( condition )
    {
         code 
    }
    .
    .
    .
    else {
         code 
    } 
    */

    if (number < 25)
    {
        cout << "Number is less than 25" << endl;
    }
    else if (number < 50)
    {
        cout << "Number is less than 50" << endl;
    }
    else if (number < 75)
    {
        cout << "Number is less than 75" << endl;
    }
    else
    {
        cout << "Number is less than 100" << endl;
    }
    return 0;
}

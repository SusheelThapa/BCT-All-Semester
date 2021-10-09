#include <iostream>
using namespace std;

int main()
{
    /*
        Just like a person is called by different name by different people.Same this can be accomplish as Refrence Varible in C++
        For eg:
        Mom call her child beta , Father call him Choro and his friend call is bunty.
        Here person is same but name is many

        We can accomplish this is C++ as Refrence variable
    */
   
    //Creating normal vaiable
    int number = 90;

    //Creating Refrence Variable
    int &refrence_number = number;

    //Printing both value
    cout << "Value of number " << number << endl;
    cout << "Value of refrence is " << refrence_number << endl;

    return 0;
}
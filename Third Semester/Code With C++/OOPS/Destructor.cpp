#include <iostream>
using namespace std;

class Alphabet
{
public:

    //Constructor
    Alphabet(void)
    {
        cout << "Constructor is called" << endl;
    }

    //Destructor: It start wil ~ . Other are as same as constructor
    ~Alphabet(void)
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    cout << "In the main function" << endl;
    cout << "Creating an object: " << endl;

    Alphabet one;

    {
        cout << "    In the block" << endl;
        cout << "    Creating another two object" << endl;

        cout << "    ";
        Alphabet two;

        cout << "    ";
        Alphabet three;

        cout << "    Exiting the block" << endl;
        cout << "    ";
    }

    cout << "Back to main" << endl;

    return 0;
}
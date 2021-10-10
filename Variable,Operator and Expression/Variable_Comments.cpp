#include <iostream>

using namespace std;

//Declaration of global variable
int age = 18;

int main()
{
    cout << "Variable and Comments" << endl;

    //Declaration of Variable(Local)
    int a = 6;
    float pi = 22 / 7;
    char alpha = 't';
    bool status = true;

    //Printing variable(local)
    cout << a << endl;
    cout << pi << endl;
    cout << alpha << endl;
    cout << status << endl;

    //Printing variable(global)
    cout << age << endl;

    /* 
        In Visual Studio Code, just select the lines you want to comment and press.

            CTRL + /
    */

    //Local varible with same name as global variable
    int age = 90;

    //Printing Local and global variable with same name
    cout << "Local Variable age : " << age << endl;
    cout << "Global Variable age : " << ::age << endl; //:: -> is scope resolution operator
    return 0;
}
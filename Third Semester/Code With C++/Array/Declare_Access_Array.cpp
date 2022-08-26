#include <iostream>
using namespace std;

int main()
{
    cout << "Method one" << endl;
    
    //Declartion of Array
    int marks[] = {90, 89, 78, 100};

    //Accessing each items of array and printing the value
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "Method Two" << endl;
    //Give value to array another method
    int new_marks[3];
    new_marks[0] = 90;
    new_marks[1] = 78;
    new_marks[2] = 35;

    cout << new_marks[0] << endl;
    cout << new_marks[1] << endl;
    cout << new_marks[2] << endl;

    //Taking input and Accessing for array using loop
    int age[10];

    //Taking value of array
    cout << endl << "Value of age: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> age[i];
    }

    //Printing value of array
    cout << endl
         << "Value stored in age array is :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << age[i]<< " ";
    }

    return 0;
}
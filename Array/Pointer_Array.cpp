#include <iostream>
using namespace std;

int main()
{
    int array[10];

    //Normal method to read and access value of array
    cout << "Value of array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    //Pointer method to read and access value of array
    cout << endl << "Value of array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> *(array + i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << *(array + i) << " ";
    }

    /*
    Note:
        name of array holds the address of base element 
            i.e array = &array[0]
        
        And we use pointer arthematic to take input and derefrence opertor to get its value.
    */
   
    return 0;
}
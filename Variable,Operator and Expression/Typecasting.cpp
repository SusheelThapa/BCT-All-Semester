#include <iostream>
using namespace std;

int main()
{
    /*
        Typecasting:    
            It mean converting one data type into another data type.
    */

    //Creating Variable
    int number_one = 67;
    float number_two = 37.24;

    //Printing Value with type casting
    cout << "Value of number_one(char) is " << char(number_one) << endl;
    cout << "Value of numebr_two(int) is " << (int)number_two << endl;

    /*
        We can type cast any data type to another by two method;
            -->(new_data_type)variable name;
            -->new_data_type(variable name)
    */

    return 0;
}
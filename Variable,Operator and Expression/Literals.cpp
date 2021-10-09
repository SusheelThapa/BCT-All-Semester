#include <iostream>
using namespace std;

int main()
{
    cout << "Float and Long Double Literals" << endl << endl;

    cout << "Size of 34.4 is " << sizeof(34.4) << endl;
    cout << "Size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "Size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "Size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "Size of 34.4l is " << sizeof(34.4l) << endl;

    /*
        By defalut a number with decimal is double
        To define it as float we use F or f at the end
        Similary for long double we use l or L at the end 
    */

    return 0;
}
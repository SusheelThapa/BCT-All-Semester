#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void getData()
    {
        cout << "Complex Number : " << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1;

    Complex *ptr1 = &c1;
    Complex *ptr2 = new Complex;

    //Method One --> Normal Method
    (*ptr1).setData(1, 2);
    (*ptr1).getData();

    //Method Two --> Arrow Operator
    ptr2->setData(2, 3);
    ptr2->getData();

    //Creating Array of Pointer to Object
    Complex *ptr_array = new Complex[4];
    for (int i = 0; i < 4; i++)
    {
        (ptr_array + i)->setData(i+2*i +1, i + 3);
        (ptr_array + i)->getData();
    }

    return 0;
}
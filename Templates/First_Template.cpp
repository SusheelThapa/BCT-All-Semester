#include <iostream>
using namespace std;

//Creating Templaed in C++
template <class T>
class Vector

{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v)
    {
        T dot = 0;

        for (int i = 0; i < size; i++)
        {
            dot += this->arr[i] * v.arr[i];
        }
        return dot;
    }
};
int main()
{

    //Using Template for int data type
    Vector<int> v1(3);

    v1.arr[0] = 1;
    v1.arr[1] = 3;
    v1.arr[2] = 5;

    Vector<int> v2(3);

    v2.arr[0] = 4;
    v2.arr[1] = 6;
    v2.arr[2] = 8;

    int int_ans = v1.dotProduct(v2);

    cout << int_ans << endl;

// -------------------------------------------

    //Using Template for float data type
    Vector<float> v3(3);

    v3.arr[0] = 1.2;
    v3.arr[1] = 3.6;
    v3.arr[2] = 5.3;

    Vector<float> v4(3);

    v4.arr[0] = 4.2;
    v4.arr[1] = 6.5;
    v4.arr[2] = 8.9;

    float float_ans = v3.dotProduct(v4);

    cout << float_ans << endl;

    return 0;
}
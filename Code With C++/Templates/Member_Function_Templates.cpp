#include <iostream>
using namespace std;

template <class T>
class Simple
{
    T data;

public:
    Simple(T a) : data(a) {}

    void showData();
};

template <class T>
void Simple<T>::showData()
{
    cout << "The data is " << data << endl
         << endl;
}

int main()
{
    Simple<int> one(1);
    one.showData();

    Simple<char> one_alpha('A');
    one_alpha.showData();

    return 0;
}
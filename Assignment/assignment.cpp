#include <iostream>

class Int
{
private:
    int a;

public:
    Int(){};
    Int(int value) { this->a = value; }

    Int &operator=(int value)
    {

        std::cout << "Overloading = operator\n";
        this->a = value;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Int a;
    a = 5;

    return 0;
}

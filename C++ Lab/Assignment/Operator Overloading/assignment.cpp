#include <iostream>

class Int
{
private:
    int a;

public:
    Int(){};
	Int(int value){this->a = value; }

    Int &operator=(Int value)
    {

        std::cout << "Overloading = operator\n";
        this->a = value.a;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Int a;
    a = Int(5);

    return 0;
}

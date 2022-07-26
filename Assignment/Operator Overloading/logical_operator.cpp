#include <iostream>

class Int
{
    int value;

public:
    Int(int value) { this->value = value; }

    bool operator||(Int b)
    {
        std::cout << "Overloaded || operator\n";
        return this->value || b.value;
    }
    bool operator&&(Int b)
    {
        std::cout << "Overloaded && operator\n";
        return this->value && b.value;
    }
};

int main(int argc, char const *argv[])
{
    std::cout << (Int(1) || Int(0)) << std::endl;
    std::cout << (Int(0) || Int(0)) << std::endl;

    std::cout << (Int(1) && Int(0)) << std::endl;
    std::cout << (Int(0) && Int(0)) << std::endl;
    return 0;
}

#include <iostream>

class Int
{

public:
    int data;
    Int() { this->data = 0; };
    Int(int value) { this->data = value; }

    Int operator&(Int b)
    {
        return Int(this->data & b.data);
    }
};

int main(int argc, char const *argv[])
{
    std::cout << (Int(10) & Int(12)).data << std::endl;

    std::cout << (10 & 12) << std::endl;
    
    return 0;
}

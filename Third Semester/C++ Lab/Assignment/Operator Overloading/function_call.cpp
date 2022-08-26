#include <iostream>

class Int
{
private:
    int data;

public:
    Int(){};
    Int(int value) { this->data = value; };

    Int operator()(int value1, int value2)
    {
        std::cout << "Overloading function call\n";
        return Int(value1 + value2);
    }
    void displayData()
    {
        std::cout << this->data;
    }
};

int main(int argc, char const *argv[])
{
    Int a = Int()(4, 5);
    a.displayData();
    return 0;
}

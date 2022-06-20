/*

Question_Two.cpp

Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function.
Use constructors to allocate and initialize the data member.
Also, write a destructor to free the allocated memory for the character array.
Make your own function for the concatenation of two strings.

*/

#include <iostream>

class CharacterArray
{
private:
    char *data;
    int length;

public:
    CharacterArray()
    {
        data = nullptr;
        length = 0;
    };
    CharacterArray(char *data, int);

    ~CharacterArray();

    void setData(char *data, int);

    void display();

    void join(CharacterArray &, CharacterArray &);
};

int main(int argc, char const *argv[])
{
    CharacterArray a, b, c;

    char one[] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 's', ' ', 'a', 'r', 'e'};
    char two[] = {' ', 'C', 'r', 'e', 'a', 't', 'u', 'r', 'e', 's', ' ', 'o', 'f', ' ', 'l', 'o', 'g', 'i', 'c'};

    a.setData(one, 13);
    b.setData(two, 19);

    c.join(a, b);

    c.display();

    return 0;
}

CharacterArray ::CharacterArray(char *data, int length)
{
    this->setData(data, length);
}

CharacterArray ::~CharacterArray()
{
    if (this->data != nullptr)
    {
        delete[] this->data;
    }
    this->length = 0;
    data = nullptr;
}

void CharacterArray::setData(char *data, int length)
{
    this->length = length;
    this->data = new char[length];

    for (int i = 0; i < length; i++)
    {
        this->data[i] = data[i];
    }
}
void CharacterArray::display()
{
    for (int i = 0; i < this->length; i++)
    {
        std::cout << data[i];
    }
    std::cout << std::endl;
}

void CharacterArray::join(CharacterArray &a, CharacterArray &b)
{

    this->length = a.length + b.length;
    this->data = new char[a.length + b.length];

    for (int i = 0; i < a.length; i++)
    {
        this->data[i] = a.data[i];
    }
    for (int j = 0; j < b.length; j++)
    {
        this->data[a.length + j] = b.data[j];
    }
}
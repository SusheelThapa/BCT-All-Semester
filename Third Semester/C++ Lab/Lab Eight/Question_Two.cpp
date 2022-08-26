/*
Question_Two.cpp

Write a program to create a user-defined manipulator that will format the output
by setting the width, precision, and fill character at the same time by passing arguments.
*/

#include <iostream>

class Manipulatar
{
    int width;
    int precision;
    char character_to_fill;

public:
    Manipulatar(int w, int p, char c) : width(w), precision(p), character_to_fill(c) {}
    friend std::ostream &operator<<(std::ostream &out, Manipulatar m);
};

std::ostream &operator<<(std::ostream &out, Manipulatar m)
{

    out.width(m.width);
    out.precision(m.precision);
    out.fill(m.character_to_fill);
    out << std::flush;
    return out;
}

int main(int argc, char const *argv[])
{
    std::cout << Manipulatar(10, 5, '#') << 10.34583942 << std::endl;
    return 0;
}

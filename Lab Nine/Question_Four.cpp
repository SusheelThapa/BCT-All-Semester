/*
Question_Four.cpp

Write any program that demonstrates the use of multiple catch handling, re-throwing an exception, and catching all exceptions.
*/

#include <iostream>

float divide(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw "Zero Division Error";
        }
    }
    catch (const char *error)
    {
        if (error == "Zero Division Error")
        {
            std::cerr << error << "\n";

            if (a == 0)
            {
                throw "Indeterminate: 0/0";
            }
        }
    }

    return float(a / b);
}

int main(int argc, char const *argv[])
{
    try
    {
        divide(0, 0);
    }
    catch (const char *error)
    {
        std::cerr << error << "\n";
    }

    return 0;
}

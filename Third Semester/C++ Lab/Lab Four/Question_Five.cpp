/*

Question_Five.cpp

Write a program that illustrates the following relationship and comment on them.
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function
*/

#include <iostream>

class Demo
{
public:
    void hello() const
    {
        std::cout << "Hello from constant function\n";
    }

    void goodMorning()
    {
        std::cout << "Good morning from non constant member function\n";
    }
};

int main()
{
    const Demo one;
    Demo two;

    one.hello();

    // one.goodMorning(); /*This wil gives us error*/

    two.goodMorning();

    two.hello();

    return 0;
}
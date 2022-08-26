/*
Question_Three.cpp


Modify the stack class given in the previous lab to add the exception
when a user tries to add an item while the stack is full and
when the user tries to add the item while the stack is empty.
Throw exceptions in both of the cases and handle these exceptions.
*/

#include <iostream>
#include <climits>

using namespace std;

template <typename T>
class Stack
{
private:
    int stack_array_size;
    int stack_top_index;
    T *stack_array;

public:
    Stack(int stack_size)
    {
        stack_array = new T(stack_size);
        stack_array_size = stack_size;
        stack_top_index = -1;
    }
    bool isEmpty()
    {
        return stack_top_index == -1;
    }
    bool isFull()
    {
        return stack_top_index + 1 == stack_array_size;
    }

    void push(T value)
    {
        if (isFull())
        {
            throw "Stack Overflow\n";
        }
        stack_top_index = stack_top_index + 1;
        stack_array[stack_top_index] = value;
    }
    T pop()
    {

        if (isEmpty())
        {
            throw "Stack Underflow\n";
            return INT_MIN;
        }
        T removed = stack_array[stack_top_index];
        stack_top_index -= 1;
        return removed;
    }

    void show()
    {
        if (stack_top_index != -1)
        {
            for (int i = stack_top_index; i >= 0; i--)
            {
                cout << stack_array[i] << endl;
            }
            std::cout << "\n";
        }
    }
};

int main()
{
    Stack<int> stack_one(4);

    try
    {
        stack_one.push(1);
        stack_one.pop();
        stack_one.pop();
    }

    catch (const char *error)
    {
        std::cout << error;
    }
    stack_one.show();

    Stack<float> stack_two(4);

    try
    {
        stack_two.push(1.2);
        stack_two.push(1.4);
    }
    catch (const char *error)
    {
        std::cout << error;
    }
    stack_two.show();
    return 0;
}
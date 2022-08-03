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
            cout << "Full Stack Exception" << endl;
            return;
        }
        stack_top_index = stack_top_index + 1;
        stack_array[stack_top_index] = value;
    }
    T pop()
    {

        if (isEmpty())
        {
            cout << "Stack Empty Exception" << endl;
            return INT_MIN;
        }
        T removed = stack_array[stack_top_index];
        stack_top_index -= 1;
        return removed;
    }

    void show()
    {
        for (int i = stack_top_index; i >= 0; i--)
        {
            cout << stack_array[i] << endl;
        }
        std::cout << "\n";
    }
};

int main()
{
    Stack<int> stack_one(4);

    stack_one.push(1);
    stack_one.push(2);
    stack_one.push(4);
    stack_one.pop();
    stack_one.show();

    Stack<float> stack_two(4);
    stack_two.push(1.2);
    stack_two.push(1.4);
    stack_two.show();

    Stack<char> stack_three(4);
    stack_three.push('a');
    stack_three.push('b');
    stack_three.show();

    return 0;
}
#include <iostream>
#include <climits>
#include "linkedList.hpp"

using namespace std;

template <class T>
class Stack
{
    LinkedList<T> stack;

public:
    T push(T data)
    {
        return stack.insertAtBeginning(data);
    }

    T pop()
    {
        if (stack.isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        return stack.deleteFromBeginning();
    }

    void display()
    {
        if (stack.isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        stack.display();
    }
};

int main()
{

    Stack<int> number;

    number.push(10);
    number.push(99);
    number.push(5);
    number.push(999);

    number.display();

    number.pop();
    number.pop();
    number.pop();

    number.display();

    return 0;
}

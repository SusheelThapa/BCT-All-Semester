#include <iostream>
#include <climits>

template <class T>
class Stack
{
    T *stackArray;
    int stackSize;
    int stackTopIndex;

public:
    Stack(int size)
    {
        this->stackArray = new T[size];
        this->stackSize = size;
        this->stackTopIndex = -1;
    }

    bool isFull()
    {
        return this->stackTopIndex == this->stackSize - 1;
    }

    bool isEmpty()
    {
        return this->stackTopIndex == -1;
    }

    T push(T value)
    {
        if (!this->isFull())
        {
            this->stackTopIndex++;
            this->stackArray[this->stackTopIndex] = value;
            return value;
        }
        else
        {
            std::cout << "Stack is full" << std::endl;
        }
    }
    T pop()
    {
        if (!isEmpty())
        {
            T poppedElement = this->stackArray[this->stackTopIndex];
            this->stackTopIndex--;
            return poppedElement;
        }
        else
        {
            std::cout << "Stack is empty" << std::endl;

            exit(1);
        }
    }

    T top()
    {
        return this->stackArray[this->stackTopIndex];
    }

    void display()
    {
        for (int i = this->stackTopIndex; i >= 0; i--)
        {
            std::cout << this->stackArray[i] << std::endl;
        }
    }
};

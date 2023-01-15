#include <iostream>
#include "list.hpp"

template <class T>
class Queue
{
    List<T> list;

public:
    T enqueue(T data)
    {
        if (list.isFull())
        {
            cout << "Queue is full" << endl;
        }
        return list.insert(data);
    }
    T dequeue()
    {
        if (list.isEmpty())
        {

            cout << "Queue is Empty" << endl;
        }
        return list.deleteFromHead();
    }

    void display()
    {
        if (list.isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        list.display();
    }
};
int main()
{
    Queue<int> number;

    number.enqueue(10);
    number.enqueue(99);
    number.enqueue(5);
    number.enqueue(999);

    number.display();

    number.dequeue();
    number.dequeue();
    number.dequeue();

    number.display();
    return 0;
}
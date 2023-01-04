#include <iostream>
#include <climits>
#include "linkedList.hpp"

using namespace std;

template <class T>
class Queue
{
    LinkedList<T> queue;

public:
    T enqueue(T data)
    {
        return queue.insertAtEnd(data);
    }

    T dequeue()
    {
        if (queue.isEmpty())
        {
            cout << "queue is empty" << endl;
            return INT_MIN;
        }
        return queue.deleteFromBeginning();
    }

    void display()
    {
        if (queue.isEmpty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        queue.display();
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

/*
Question_Two.cpp

Write a class template for queue class. Assume the programmer using the queue won't make mistakes,
like exceeding the capacity of the queue or trying to remove an item when the queue is empty.
Define several queues of different data types and insert and remove data from them.
*/

#include <iostream>
#include <climits>

using namespace std;

template <typename T>
class Queue
{
private:
    T *queue_array;
    int queue_front;
    int queue_size;
    int queue_rear;

public:
    Queue(T size)
    {
        queue_size = size;
        queue_array = new T(size);
        queue_front = -1;
        queue_rear = -1;
    }
    int queueSize()
    {
        if (queue_front == -1 && queue_rear == -1)
        {
            return 0;
        }
        if (queue_front < queue_rear)
        {
            return queue_rear - queue_front;
        }
        else if (queue_front > queue_rear)
        {
            return queue_size - queue_front + queue_rear;
        }
        else
        {
            if (queue_array[queue_front] == INT_MIN)
            {
                return 0;
            }
            else
            {
                return queue_size;
            }
        }
    }
    bool isEmpty()
    {
        return queueSize() == 0;
    }
    bool isFull()
    {
        return queueSize() == queue_size;
    }
    int front()
    {
        return queue_array[(queue_front + 1) % queue_size];
    }
    void enQueue(T value)
    {
        if (isFull())
        {
            cout << "Overflow Error" << endl;
            return;
        }
        queue_rear = (queue_rear + 1) % queue_size; // This will move rear in circular manner.
        queue_array[queue_rear] = value;
    }
    T deQueue()
    {
        if (isEmpty())
        {
            cout << "Underflow Error" << endl;
            return INT_MIN;
        }

        T removed;

        queue_front = (queue_front + 1) % queue_size; // This will move front in circular manner.
        removed = queue_array[queue_front];

        queue_array[queue_front] = INT_MIN;

        return removed;
    }

    void show()
    {

        for (int i = (queue_front + 1) % queue_size; i != queue_rear; i = (i + 1) % queue_size)
        {
            cout << queue_array[i] << " ";
        }
        cout << queue_array[queue_rear] << endl;
    }
};

int main()
{
    Queue<int> queue_one(3);

    queue_one.enQueue(1);
    queue_one.enQueue(2);
    queue_one.enQueue(3);

    queue_one.show();

    Queue<float> queue_two(3);

    queue_two.enQueue(1.2);
    queue_two.enQueue(2.2);
    queue_two.enQueue(3.8);

    queue_two.show();

    Queue<char> queue_three(3);

    queue_three.enQueue('a');
    queue_three.enQueue('b');
    queue_three.enQueue('c');

    queue_three.show();

    return 0;
}
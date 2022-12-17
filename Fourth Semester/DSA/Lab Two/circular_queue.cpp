#include <iostream>
using namespace std;

template <class T>
class CircularQueue
{
    T *queueArray;
    int queueSize, totalElement, front, rear;

public:
    CircularQueue(int queueSize)
    {
        this->queueArray = new T[queueSize];
        this->queueSize = queueSize;
        front = 0;
        rear = -1;
        totalElement = 0;
    }

    bool isFull()
    {
        return totalElement == queueSize;
    }

    bool isEmpty()
    {
        return totalElement == 0;
    }

    T enqueue(T value)
    {
        if (!isFull())
        {

            this->rear = (this->rear + 1) % this->queueSize;
            this->queueArray[this->rear] = value;

            totalElement++;

            return value;
        }
        else
        {
            cout << "ENQUEUE ERROR: Queue is Full" << endl;
        }
    }

    T dequeue()
    {
        if (!isEmpty())
        {
            T dequeuedElement = queueArray[front];
            this->front = (this->front + 1) % this->queueSize;

            totalElement++;

            return dequeuedElement;
        }
        else
        {
            cout << "DEQUEUE ERROR: Queue is empty" << endl;
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i = (i + 1) % queueSize)
        {
            cout << this->queueArray[i] << " ";
        }
    }
};

int main()
{
    CircularQueue<int> a(10);

    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.enqueue(10);
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.enqueue(10);

    a.display();
    return 0;
}
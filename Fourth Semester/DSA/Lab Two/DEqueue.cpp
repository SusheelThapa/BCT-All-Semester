#include <iostream>
using namespace std;

template <class T>
class DEQueue
{
    T *queueArray;
    int queueSize;
    int front;
    int rear;
    int totalElement;

public:
    DEQueue(int queueSize)
    {
        this->queueSize = queueSize;
        this->queueArray = new T[queueSize];
        front = -1;
        rear = -1;
        totalElement = 0;
    }

    bool isEmpty()
    {
        return totalElement == 0;
    }

    bool isFull()
    {
        return totalElement == queueSize;
    }

    T enqueueFront(T value)
    {
        if (totalElement == 0)
        {
            front = 7;
            rear = 7;
            this->queueArray[front] = value;
            totalElement++;

            return value;
        }

        if (!isFull())
        {
            if (front == 0)
            {
                front = queueSize - 1;
            }
            else
            {
                front = (front - 1) % queueSize;
            }
            this->queueArray[front] = value;
            totalElement++;

            return value;
        }
        else
        {
            cout << (isFull()) ? "DEQueue IS FULL" : "DEQueue IS EMPTY";
        }
    }

    T enqueueRear(T value)
    {
        if (totalElement == 0)
        {
            front = 0;
            rear = 0;
            this->queueArray[front] = value;
            totalElement++;

            return value;
        }

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

    T deQueueFront()
    {
        if (!isEmpty())
        {
            T deQueuedElement = queueArray[front];
            this->front = (this->front + 1) % this->queueSize;

            totalElement--;

            return deQueuedElement;
        }
        else
        {
            cout << "DEQUEUE ERROR: Queue is empty" << endl;
        }
    }
    T deQueueRear()
    {
        if (!isEmpty())
        {
            T deQueuedElement = queueArray[rear];

            if (rear == 0)
            {
                rear = queueSize - 1;
            }
            else
            {
                rear = (rear - 1) % queueSize;
            }

            this->front = (this->front + 1) % this->queueSize;

            totalElement--;

            return deQueuedElement;
        }
        else
        {
            cout << "DEQUEUE ERROR: Queue is empty" << endl;
        }
    }
    void display()
    {
        for (int i = front; i != rear; i = (i + 1) % queueSize)
        {
            cout << this->queueArray[i] << " ";
        }
        cout << this->queueArray[rear];
    }
};

int main()
{
    DEQueue<int> a(10);

    a.enqueueRear(10);
    a.deQueueRear();
    a.enqueueFront(20);
    a.enqueueRear(10);
    a.deQueueFront();
    a.enqueueFront(20);
    a.enqueueRear(10);
    a.enqueueFront(20);
    a.enqueueFront(20);
    a.deQueueFront();
    
    a.display();

    return 0;
}
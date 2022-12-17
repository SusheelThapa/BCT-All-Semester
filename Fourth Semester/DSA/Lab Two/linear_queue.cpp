#include <iostream>
using namespace std;

template <class T>
class LinearQueue
{
private:
    T *queueArray;
    int queueSize;
    int front;
    int rear;

public:
    LinearQueue(int queueSize)
    {
        this->queueArray = new T[queueSize];
        this->queueSize = queueSize;
        front = 0;
        rear = -1;
    }

    bool isFull()
    {
        return rear == queueSize - 1;
    }

    bool isEmpty()
    {
        return front - rear == 1;
    }

    T enqueue(T value)
    {
        if (!isFull())
        {

            this->rear++;
            this->queueArray[this->rear] = value;

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
            this->front++;
            return dequeuedElement;
        }
        else
        {
            cout << "DEQUEUE ERROR: Queue is empty" << endl;
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << this->queueArray[i] << " ";
        }
    }
};

int main()
{
    LinearQueue<int> a(10);

    a.enqueue(10);
    a.dequeue();

    a.display();
    return 0;
}
# Lab Nine

## Quesiton One

**Create a function called sum() that returns the sum of the elements of an array.
Make this function into a template so it will work with any numerical type.
Write a program that applies this function to data of various types.**

```c++
#include <iostream>

template <typename T>
T sum(T array[], int total_size)
{
    T total_sum = 0;

    for (int i = 0; i < total_size; i++)
    {
        total_sum += array[i];
    }

    return total_sum;
}

int main()
{
    int array_int[] = {1, 2, 3, 4};

    float array_float[] = {1.4, 2.5, 2.4};

    std::cout << sum<int>(array_int, 4) << std::endl;
    std::cout << sum<float>(array_float, 3) << std::endl;

    return 0;
}
```

## Quesiton Two

**Write a class template for queue class. Assume the programmer using the queue won't make mistakes,
like exceeding the capacity of the queue or trying to remove an item when the queue is empty.
Define several queues of different data types and insert and remove data from them.**

```c++


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

    void enQueue(T value)
    {
        if (isFull())
        {
            throw "Overflow Error\n";
        }
        queue_rear = (queue_rear + 1) % queue_size; // This will move rear in circular manner.
        queue_array[queue_rear] = value;
    }
    T deQueue()
    {
        if (isEmpty())
        {
            throw "Underflow Error\n";
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
    Queue<int> queue_one(1);

    try
    {
        queue_one.enQueue(1);
        queue_one.enQueue(2);
    }
    catch (const char *error)
    {
        std::cout << error;
    }

    queue_one.show();

    Queue<float> queue_two(3);

    try
    {
        queue_two.enQueue(1.2);
    }
    catch (const char *error)
    {
        std::cout << error;
    }

    queue_two.show();

    return 0;
}
```

## Quesiton Three

**Modify the stack class given in the previous lab to add the exception
when a user tries to add an item while the stack is full and
when the user tries to add the item while the stack is empty.
Throw exceptions in both of the cases and handle these exceptions.**

```c++

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
```

## Quesiton Four

**Write any program that demonstrates the use of multiple catch handling, re-throwing an exception, and catching all exceptions.**

```c++
#include <iostream>

float divide(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw "Zero Division Error";
        }
    }
    catch (const char *error)
    {
        if (error == "Zero Division Error")
        {
            std::cerr << error << "\n";

            if (a == 0)
            {
                throw "Indeterminate: 0/0";
            }
        }
    }

    return float(a / b);
}

int main(int argc, char const *argv[])
{
    try
    {
        divide(0, 0);
    }
    catch (const char *error)
    {
        std::cerr << error << "\n";
    }

    return 0;
}
```

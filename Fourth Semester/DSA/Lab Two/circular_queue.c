#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct CircularQueue
{
    int queue_first_index;
    int queue_last_index;
    int queue_size;
    int *queue_array;
} CircularQueue;

void init(CircularQueue *line, int size)
{
    "Initialized Circular Queue";

    line->queue_size = size;

    line->queue_first_index = line->queue_last_index = -1;

    line->queue_array = (int *)calloc(sizeof(int), size);
}

void show(CircularQueue line)
{
    "Display the Circular Queue";

    for (int i = line.queue_first_index + 1; i != line.queue_last_index; i = (i + 1) % line.queue_size)
    {
        printf("%d ", line.queue_array[i]);
    }
    printf("%d ", line.queue_array[line.queue_last_index]);
}

int queueSize(CircularQueue line)
{
    "Return the size of the queue. Takes 0(1)";
    
    if (line.queue_first_index <= line.queue_last_index)
    {
        return line.queue_last_index - line.queue_first_index;
    }
    else
    {
        return line.queue_size - line.queue_first_index + line.queue_last_index + 1;
    }
}

bool isFull(CircularQueue line)
{
    "Checking whether the Circular Queue is full or not. Time complexity is 0(1).";

    return line.queue_first_index == line.queue_last_index && line.queue_array[line.queue_first_index + 1] != 0;
}

bool isEmpty(CircularQueue line)
{
    "Checking whether the Circular Queue is empty or not. Time complexity is 0(1).";

    if (line.queue_first_index == line.queue_last_index && line.queue_array[line.queue_first_index + 1] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int front(CircularQueue line)
{
    "Return the front element of the Queue. Takes 0(1).";
    return line.queue_array[(line.queue_first_index + 1) % line.queue_size];
}

void enqueue(CircularQueue *line, int value)
{
    "Inserting element to the Circular Queue. Time Complexity is 0(1).";

    if (!isFull(*line))
    {
        line->queue_last_index = (line->queue_last_index + 1) % line->queue_size;
        line->queue_array[line->queue_last_index] = value;
    }
    else
    {
        printf("Overflow Error\n");
    }
}

int dequeue(CircularQueue *line)
{
    "Remove element for the Circular Queue. Time Complexity is 0(1).";

    if (!isEmpty(*line))
    {
        int removed = line->queue_array[line->queue_first_index + 1];

        line->queue_array[line->queue_first_index + 1] = 0;

        line->queue_first_index = (line->queue_first_index + 1) % line->queue_size;

        return removed;
    }
    else
    {
        printf("Underflow Error\n");
    }
}

int main()
{
    CircularQueue *bank_counter;

    init(bank_counter, 10);

    enqueue(bank_counter, 1);
    enqueue(bank_counter, 2);

    dequeue(bank_counter);

    enqueue(bank_counter, 3);

    dequeue(bank_counter);

    enqueue(bank_counter, 4);
    enqueue(bank_counter, 5);

    show(*bank_counter);

    printf("\nSize of Queue is %d\n", queueSize(*bank_counter));

    dequeue(bank_counter);

    enqueue(bank_counter, 7);

    show(*bank_counter);

    printf("\nFront element of the Queue is %d\n", front(*bank_counter));

    return 0;
}
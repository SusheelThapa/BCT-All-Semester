#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    int element;
    struct Node *next_address;
} Node;

Node *createNode(int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->element = value;
    node->next_address = NULL;
    return node;
}

typedef struct Queue
{
    Node *first;
    Node *last;
} Queue;

void init(Queue *line)
{
    line->first = NULL;
    line->last = NULL;
}

void show(Queue line)
{
    Node *node = line.first;

    while (node != NULL)
    {
        printf("%d ", node->element);
        node = node->next_address;
    }
}

void enqueue(Queue *line, int value)
{
    Node *link = createNode(value);

    if (line->first == NULL && line->last == NULL)
    {
        line->last = link;
        line->first = link;
    }
    else
    {
        line->last->next_address = link;
        line->last = link;
    }
}

int dequeue(Queue *line)
{
    int removed = line->first->element;

    Node *remove = line->first;

    line->first = line->first->next_address;

    return removed;
}

int front(Queue line)
{
    return line.first->element;
}
int main()
{
    Queue *bank_counter;

    init(bank_counter);

    enqueue(bank_counter, 1);
    enqueue(bank_counter, 2);

    dequeue(bank_counter);

    enqueue(bank_counter, 3);

    dequeue(bank_counter);

    enqueue(bank_counter, 4);
    enqueue(bank_counter, 5);

    dequeue(bank_counter);

    enqueue(bank_counter, 7);

    show(*bank_counter);

    printf("\nFront element of the Queue is %d", front(*bank_counter));

    return 0;
}
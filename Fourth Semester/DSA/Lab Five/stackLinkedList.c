#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int element;
    struct Node *address;
} Node;

Node *createNode(int value)
{
    "Create a node. Takes 0(1)";

    Node *node = (Node *)malloc(sizeof(Node));
    node->element = value;
    node->address = NULL;

    return node;
}

typedef struct Stack
{
    Node *head;
    int stack_size;
} Stack;

void init(Stack *s)
{
    "Initialize the stack. Takes 0(1).";

    s->head = NULL;
    s->stack_size = 0;
}

bool isEmpty(Stack s)
{
    "Check whether the stack is empty or not.";

    return s.head == NULL;
}

bool isFull(Stack *s)
{
    "Check whether the stack in full or not. Takes 0(1)";
    /*
    A stack is full(linked list) whether no memory is left
    */

    Node *node = createNode(5); /* if memory is full, node will be null */

    if (node == NULL)
    {
        free(node);
        return true;
    }
    else
    {
        free(node);
        return false;
    }
}

void push(Stack *s, int value)
{
    "Add the element to the stack. Takes 0(1).";

    if (isFull(s) == false)
    {
        Node *link = createNode(value);

        link->address = s->head;

        s->head = link;

        s->stack_size += 1;
    }
    else
    {
        printf("Full Stack Exception\n");
    }
}

int pop(Stack *s)
{
    "Removes Top element from the stack. Takes 0(1)";

    if (isEmpty(*s) == false)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node = s->head;
        int removed = node->element;

        s->head = node->address;

        free(node);
        s->stack_size -= 1;
        return removed;
    }
    else
    {
        printf("Stack Empty Exception\n");
    }
}

void show(Stack s)
{
    "Traverse the stack and display the element. Takes 0(n).";

    while (s.head != NULL)
    {
        printf("%d\n", s.head->element);
        s.head = s.head->address;
    }
}

int stackTop(Stack s)
{
    "Return the top element of the stack. Takes 0(1)";

    return s.head->element;
}

int stackBottom(Stack s)
{
    "Return the last element of the stack. Takes 0(n)";

    int value;

    while (s.head != NULL)
    {
        value = s.head->element;
        s.head = s.head->address;
    }
    return value;
}

int peek(Stack s, int position)
{
    "Return element present in the stack at the given index. Takes 0(n)";

    if (position > s.stack_size)
    {
        printf("Invalid Position\n");
        return -1;
    }
    else
    {
        Node *temp;
        temp = s.head;

        for (int i = 1; i < position; i++)
        {
            temp = temp->address;
        }

        return temp->element;
    }
}

int main()
{
    Stack *stack_one;

    init(stack_one);

    push(stack_one, 1);
    push(stack_one, 2);
    push(stack_one, 3);
    push(stack_one, 4);

    push(stack_one, 1);

    printf("After pushing element into the stack...\n");

    show(*stack_one);

    printf("After poping three element from the stack...\n");

    pop(stack_one);

    show(*stack_one);
    
    printf("Top element of the stack is %d\n", stackTop(*stack_one));
    printf("Bottom element of the stack is %d\n", stackBottom(*stack_one));

    printf("Element in position 4 is %d", peek(*stack_one, 4));

    return 0;
}
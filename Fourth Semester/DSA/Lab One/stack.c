#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack
{
    int stack_size;
    int stack_top_index;
    int *stack_array;
} Stack;

void init(Stack *s, int size)
{
    "Initialize stack. Takes 0(1)";

    s->stack_size = size;
    s->stack_top_index = -1;
    s->stack_array = (int *)malloc(sizeof(int) * size);
}

void show(Stack s)
{
    "To display the stack. Takes 0(n).";

    for (int i = s.stack_top_index; i >= 0; i--)
    {
        printf("%d\n", *(s.stack_array + i));
    }
}

bool isEmpty(Stack s)
{
    "To check whether the stack is empty or not. It has time complexity of 0(1).";

    if (s.stack_top_index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Stack s)
{
    "To check whether the stack is full or not. It has time complexity of 0(1).";

    if (s.stack_size == s.stack_top_index + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(Stack *s, int value)
{
    "To add element to the stack. It has time complexity of 0(1).";

    if (isFull(*s) == false)
    {
        s->stack_top_index += 1;
        *(s->stack_array + s->stack_top_index) = value;
    }
    else
    {
        printf("Full Stack Exception\n");
    }
}

void pop(Stack *s)
{
    "To remove element from the stack. It has time complexity of 0(1).";

    if (isEmpty(*s) == false)
    {
        s->stack_top_index -= 1;
    }
    else
    {
        printf("Stack Empty Exception\n");
    }
}

int peek(Stack s, int position)
{
    "To find the element at given position. Top element positon is 1 and goes on increasing when we go down. It has time complexity of 0(1).";

    if (position > s.stack_top_index + 1)
    {
        printf("Index Exception\n");

        return -1;
    }
    else
    {

        return s.stack_array[s.stack_top_index - position + 1];
    }
}

int stackTop(Stack s)
{
    "Return the top element of the stack. Takes 0(1).";

    return s.stack_array[s.stack_top_index];
}

int stackBottom(Stack s)
{
    "Return the bottom most element of the stack. Takes 0(1).";

    return s.stack_array[0];
}

Stack *deleteStack(Stack *s)
{
    "Delete the stack and return newly created stack. Takes 0(1)";

    free(s);
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    return stack;
}

int main()
{
    Stack *stack_one;

    int one = 1, two = 2, three = 3, four = 4, five = 5, six = 6;

    init(stack_one, 10);

    push(stack_one, one);

    push(stack_one, two);

    push(stack_one, two);

    pop(stack_one);

    push(stack_one, three);

    push(stack_one, three);

    pop(stack_one);

    push(stack_one, two);

    push(stack_one, three);

    push(stack_one, four);

    push(stack_one, one);

    push(stack_one, one);

    pop(stack_one);

    push(stack_one, 7);

    show(*stack_one);

    printf("Element at position 2 in stack is %d\n", peek(*stack_one, 7));

    printf("Top element of stack is %d.\n", stackTop(*stack_one));

    printf("Bottom element of stack is %d.\n", stackBottom(*stack_one));

    stack_one = deleteStack(stack_one);

    printf("The address of the stack array is %x", &(stack_one->stack_array[0]));

    return 0;
}
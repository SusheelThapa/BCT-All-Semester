#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    char element;
    struct Node *address;
} Node;

Node *createNode(char value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->element = value;
}

typedef struct Stack
{
    int stack_size;
    Node *head;
} Stack;

void init(Stack *s)
{
    s->stack_size = 0;
    s->head = NULL;
}

bool isEmpty(Stack s)
{
    if (s.stack_size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool push(Stack *s, char value)
{
    Node *link = createNode(value);

    link->address = s->head;

    s->head = link;

    s->stack_size += 1;

    return true;
}

bool parenthesisMatch(Stack s, char value)
{
    if (value == ')')
    {
        return (s.head->element == '(');
    }
    else if (value == '}')
    {
        return (s.head->element == '{');
    }
    else if (value == ']')
    {
        return (s.head->element == '[');
    }
}
bool pop(Stack *s, int value)
{
    if (isEmpty(*s))
    {
        return false;
    }
    else
    {

        if (parenthesisMatch(*s, value))
        {
            Node *link = s->head;

            s->head = s->head->address;

            free(link);
            s->stack_size -= 1;

            return true;
        }
        else
        {
            return false;
        }
    }
}

bool multiParenthesisMatch(char *expression)
{

    Stack s;

    init(&s);

    while (*expression != '\0')
    {
        if (*expression == '(')
        {
            push(&s, '(');
        }
        else if (*expression == '{')
        {
            push(&s, '{');
        }
        else if (*expression == '[')
        {
            push(&s, '[');
        }
        else if (*expression == ')')
        {
            if (pop(&s, ')'))
            {
            }
            else
            {
                return false;
            }
        }
        else if (*expression == '}')
        {
            if (pop(&s, '}'))
            {
            }
            else
            {
                return false;
            }
        }
        else if (*expression == ']')
        {
            if (pop(&s, ']'))
            {
            }
            else
            {
                return false;
            }
        }

        expression++;
    }

    if (isEmpty(s))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char expression[100];

    printf("Expression: ");
    gets(expression);

    if (multiParenthesisMatch(expression) == true)
    {
        printf("Parenthesis Matched\n");
    }
    else
    {
        printf("Parenthesis Unmatched\n");
    }

    return 0;
}
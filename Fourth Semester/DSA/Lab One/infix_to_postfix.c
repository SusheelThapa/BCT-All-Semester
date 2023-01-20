#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Stack
{
    int stack_size;
    int stack_top_index;
    char *stack_array;
} Stack;

void init(Stack *s, int size)
{
    s->stack_size = size;
    s->stack_top_index = -1;
    s->stack_array = (char *)malloc(sizeof(char) * size);
}

void push(Stack *s, char value)
{
    s->stack_top_index += 1;
    s->stack_array[s->stack_top_index] = value;
}

char pop(Stack *s)
{
    int removed;

    removed = s->stack_array[s->stack_top_index];

    s->stack_top_index -= 1;

    return removed;
}

bool isOperator(char operator)
{
    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int operatorPrecedance(char operator)
{
    switch (operator)
    {
    case '+':
        return 2;
    case '-':
        return 2;
    case '*':
        return 3;
    case '/':
        return 3;
    }
}

char *infixToPostfix(char *infix_expression)
{

    int size = strlen(infix_expression);

    Stack *stack_operator = (Stack *)malloc(sizeof(Stack));

    init(stack_operator, size);

    char *postfix_expression = (char *)malloc(sizeof(char) * (size + 1));

    int infix_counter = 0, postfix_counter = 0;

    while (*(infix_expression + infix_counter) != '\0')
    {
        if (isOperator(*(infix_expression + infix_counter)))
        {
            if (stack_operator->stack_top_index != -1)
            {
                if (operatorPrecedance(*(infix_expression + infix_counter)) >= operatorPrecedance(stack_operator->stack_array[stack_operator->stack_top_index]))
                {
                    push(stack_operator, *(infix_expression + infix_counter));
                }
                else
                {
                    *(postfix_expression + postfix_counter) = pop(stack_operator);
                    postfix_counter++;
                    continue;
                }
            }
            else
            {
                push(stack_operator, *(infix_expression + infix_counter));
            }
        }
        else
        {
            *(postfix_expression + postfix_counter) = *(infix_expression + infix_counter);
            postfix_counter++;
        }

        infix_counter++;
    }

    while (stack_operator->stack_top_index != -1)
    {
        *(postfix_expression + postfix_counter) = pop(stack_operator);
        postfix_counter++;
    }
    *(postfix_expression + postfix_counter) = '\0';

    free(stack_operator);
    return postfix_expression;
}

int main()
{
    char *infix = (char *)malloc(sizeof(char) * 100);

    printf("Infix Expression: ");
    gets(infix);

    printf("Postfix Expression: %s", infixToPostfix(infix));

    return 0;
}
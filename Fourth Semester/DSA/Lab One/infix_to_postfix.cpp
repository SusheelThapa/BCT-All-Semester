#include "stack.hpp"

bool isOpeningParenthesis(char character)
{
    return character == '(' ||
           character == '{' ||
           character == '[';
}

bool isClosingParenthesis(char character)
{
    return character == ')' ||
           character == '}' ||
           character == ']';
}

bool isOperator(char character)
{
    return isOpeningParenthesis(character) ||
           character == '/' ||
           character == '*' ||
           character == '+' ||
           character == '-';
}

int getPrecedance(char character)
{
    if (character == '*' || character == '/')
    {
        return 2;
    }
    else if (character == '-' || character == '+')
    {
        return 1;
    }
    return INT_MIN;
}

std::string infixToPostFix(std::string infix)
{
    std::string postfix = "";

    Stack<char> infixStack(10);

    for (int i = 0; i < infix.length(); i++)
    {
        char character = infix[i];

        if (isClosingParenthesis(character))
        {
            char poppedElement;

            do
            {
                poppedElement = infixStack.pop();
                if (isOpeningParenthesis(poppedElement))
                {
                    break;
                }
                postfix.push_back(poppedElement);
            } while (true);
        }
        else if (!isOperator(character))
        {
            postfix.push_back(character);
        }
        else
        {
            while (!(getPrecedance(character) > getPrecedance(infixStack.top()) || infixStack.isEmpty() || isOpeningParenthesis(character)))
            {
                char poppedElement = infixStack.pop();
                postfix.push_back(poppedElement);
            }
            infixStack.push(character);
        }
    }
    while (!infixStack.isEmpty())
    {
        postfix.push_back(infixStack.pop());
    }

    return postfix;
}

int main()
{
    std::string infixExpression;

    std::cout << "Expression: ";
    std::cin >> infixExpression;

    std::string postfix = infixToPostFix(infixExpression);

    std::cout << "Postfix Expression: " << postfix;

    return 0;
}
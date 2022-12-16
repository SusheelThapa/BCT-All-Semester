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
    return isClosingParenthesis(character) ||
           character == '/' ||
           character == '*' ||
           character == '+' ||
           character == '-';
}

std::string reverseString(std::string expression)
{
    std::string reverse;

    for (int i = expression.length() - 1; i >= 0; i--)
    {
        reverse.push_back(expression[i]);
    }
    return reverse;
}

int getPrecedance(char character)
{
    if (character == '^')
    {
        return 3;
    }
    else if (character == '*' || character == '/')
    {
        return 2;
    }
    else if (character == '-' || character == '+')
    {
        return 1;
    }
    return INT_MIN;
}

std::string infixToPreFix(std::string infix)
{
    std::string prefix = "";

    Stack<char> infixStack(10);

    infix = reverseString(infix);

    for (int i = 0; i < infix.length(); i++)
    {
        char character = infix[i];

        if (character == '^')
        {
            if (!infixStack.isEmpty())
            {
                if (infixStack.top() == '^')
                {
                    prefix.push_back(infixStack.pop());
                }
            }
            infixStack.push(character);
        }
        else if (isOpeningParenthesis(character))
        {
            char poppedElement;

            do
            {
                poppedElement = infixStack.pop();
                if (isClosingParenthesis(poppedElement))
                {
                    break;
                }
                prefix.push_back(poppedElement);
            } while (true);
        }
        else if (!isOperator(character))
        {
            prefix.push_back(character);
        }
        else
        {
            while (!(infixStack.isEmpty() || getPrecedance(character) >= getPrecedance(infixStack.top()) || isClosingParenthesis(character)))
            {
                char poppedElement = infixStack.pop();
                prefix.push_back(poppedElement);
            }
            infixStack.push(character);
        }
    }
    while (!infixStack.isEmpty())
    {
        prefix.push_back(infixStack.pop());
    }

    return reverseString(prefix);
}

int main()
{
    std::string infixExpression;

    std::cout << "Expression: ";
    std::cin >> infixExpression;

    std::string prefix = infixToPreFix(infixExpression);
    std::cout << "Prefix Expression: " << prefix;

    return 0;
}
#include "stack.hpp"
#include <string>

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

bool matchParenthesis(char opening, char closing)
{
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

bool checkBalanceParenthesis(std::string expression)
{
    bool result = true;

    Stack<char> parenthesisStack(10);

    for (int i = 0; i < expression.length(); i++)
    {
        char character = expression[i];

        if (isOpeningParenthesis(character))
        {
            parenthesisStack.push(character);
        }
        else if (isClosingParenthesis(character))
        {
            if (!parenthesisStack.isEmpty())
            {
                char poppedParenthesis = parenthesisStack.pop();

                if (!matchParenthesis(poppedParenthesis, character))
                {
                    std::cout << "Matched";
                    result = false;
                    break;
                }
            }
            else
            {
                std::cout << "Else";

                result = false;
                break;
            }
        }
    }

    if (!parenthesisStack.isEmpty())
    {
        result = false;
    }

    return result;
}

int main()
{

    std::string expression;

    std::cout << "Expression: ";
    std::cin >> expression;

    bool result = checkBalanceParenthesis(expression);

    std::cout << "The parenthesis of "
              << expression
              << " are "
              << (result ? "balanced" : "unbalance")
              << std::endl;
    return 0;
}
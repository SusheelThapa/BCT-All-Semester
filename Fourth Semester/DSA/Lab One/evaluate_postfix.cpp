#include "stack.hpp"

bool isOperator(char character)
{
    return character == '/' ||
           character == '*' ||
           character == '+' ||
           character == '-';
}

int evaluatePostFix(std::string postFixExpression)
{
    Stack<char> postFixStack(10);

    for (int i = 0; i < postFixExpression.length(); i++)
    {
        char character = postFixExpression[i];

        if (isOperator(character))
        {
            int operandOne = postFixStack.pop() - '0';
            int operandTwo = postFixStack.pop() - '0';

            std::cout << operandOne << "\n";
            std::cout << operandTwo << "\n";

            int result;
            switch (character)
            {
            case '-':
                result = operandOne - operandTwo;
                break;
            case '+':
                result = operandOne + operandTwo;
                break;
            case '*':
                result = operandOne * operandTwo;
                break;
            case '/':
                result = operandOne / operandTwo;
                break;
            }
            std::cout << result << "\n";

            postFixStack.push(result + '0');
        }
        else
        {
            postFixStack.push(character);
        }
    }

    return postFixStack.pop() - '0';
}

int main()
{

    std::string postFixExpression;

    std::cout << "Postfix Expression: ";
    std::cin >> postFixExpression;

    int result = evaluatePostFix(postFixExpression);

    std::cout << postFixExpression << " = " << result;

    return 0;
}
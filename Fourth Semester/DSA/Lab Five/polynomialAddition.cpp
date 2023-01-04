#include <iostream>
#include "linkedList.hpp"

using namespace std;

class PolynomialTerm
{
public:
    int coefficient;
    int power;
    PolynomialTerm(){};

    PolynomialTerm(int coefficient, int power)
    {
        this->coefficient = coefficient;
        this->power = power;
    }

    friend ostream &operator<<(ostream &output, PolynomialTerm p)
    {
        output << p.coefficient << "x^" << p.power;
        return output;
    }
};

int main()
{
    LinkedList<PolynomialTerm> one;
    LinkedList<PolynomialTerm> two;
    LinkedList<PolynomialTerm> third;

    PolynomialTerm oneFirstTerm(5, 2);
    PolynomialTerm oneSecondTerm(2, 1);
    PolynomialTerm oneThirdTerm(2, 0);

    one.insertAtEnd(oneFirstTerm);
    one.insertAtEnd(oneSecondTerm);
    one.insertAtEnd(oneThirdTerm);

    PolynomialTerm twoFirstTerm(5, 3);
    PolynomialTerm twoSecondTerm(2, 2);
    PolynomialTerm twoThirdTerm(2, 1);

    two.insertAtEnd(twoFirstTerm);
    two.insertAtEnd(twoSecondTerm);
    two.insertAtEnd(twoThirdTerm);

    cout << "First Expression: ";
    one.display();
    cout << "Second Expression: ";
    two.display();

    PolynomialTerm result, first, second;
    while (!one.isEmpty() && !two.isEmpty())
    {
        result;
        first = one.getNthElement(1);
        second = two.getNthElement(1);

        if (first.power == second.power)
        {
            result.coefficient = first.coefficient + second.coefficient;
            result.power = first.power;
            third.insertAtEnd(result);

            one.deleteFromBeginning();
            two.deleteFromBeginning();
        }
        else if (first.power > second.power)
        {
            result.coefficient = first.coefficient;
            result.power = first.power;
            third.insertAtEnd(result);

            one.deleteFromBeginning();
        }
        else if (first.power < second.power)
        {
            result.coefficient = second.coefficient;
            result.power = second.power;
            third.insertAtEnd(result);

            two.deleteFromBeginning();
        }
    }

    while (!one.isEmpty())
    {
        first = one.getNthElement(1);
        result.coefficient = first.coefficient;
        result.power = first.power;

        third.insertAtEnd(result);
        one.deleteFromBeginning();
    }
    
    while (!two.isEmpty())
    {
        second = one.getNthElement(1);
        result.coefficient = second.coefficient;
        result.power = second.power;

        third.insertAtEnd(result);
        two.deleteFromBeginning();
    }

    cout << "Addition: ";
    third.display();

    return 0;
}
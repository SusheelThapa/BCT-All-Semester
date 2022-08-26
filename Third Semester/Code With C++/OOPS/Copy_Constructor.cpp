#include <iostream>
using namespace std;

class Number
{
    int number;

public:
    Number(void)
    {
        number = 0;
    };

    Number(int a)
    {
        number = a;
    }

    //Constructor which helps to make exact copy of object is called copy constructor
    Number(Number &a)
    {
        cout << "Copy Constructor is called" << endl;
        number = a.number;
    }

    void printNumber(void)
    {
        cout << "The number is " << number << endl;
    }
};

class Alphabet
{
    char alpha;

public:
    //No copy constructor. See line number 67
    Alphabet(){};
    Alphabet(char a)
    {
        alpha = a;
    }

    void printAlphabet(void)
    {
        cout << "The alphabet is " << alpha << endl;
    }
};

int main()
{
//Class where copy constructor is present
    Number one, two(2);

    Number three(two); //Copy constuctor is called

    Number four = one; //Copy constuctor is called

    one.printNumber();
    two.printNumber();
    three.printNumber();
    four.printNumber();


//Class where copy constructor is absent
    Alphabet aaa, bbb('Y');

    Alphabet ccc = bbb; //If copy constructor is not avaliable then compiler automatically place a copy constructor

    aaa.printAlphabet();
    bbb.printAlphabet();
    ccc.printAlphabet();

    return 0;
}
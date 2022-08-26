#include <iostream>
#include <string>

using namespace std;

class Binary
{
private:
    string binary;
    void checkBinary(void);

public:
    void setData(string s1);
    void getData(void);
};

void Binary ::checkBinary()
{
    int i = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        if ((binary.at(i) != '1' && binary.at(i) != '0'))
        {
            cout << "Invalid Binary Number";
            exit(0);
        }
    }
}

/*
In this function, checkBinary in called internally so it is called nesting member of function.
As user wonot be able to run this function so it provide a kind of protection in program
*/
void Binary::setData(string s1)
{
    binary = s1;
    checkBinary();
}

void Binary ::getData()
{
    cout << "Binary Number is " << binary << endl;
}
int main()
{
    Binary B;
    string s;
    cout << "Binary Number: ";
    cin >> s;

    B.setData(s);
    B.getData();

    return 0;
}
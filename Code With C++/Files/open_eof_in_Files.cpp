#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Writing to files
    ofstream out;

    out.open("Dummy_One.txt");

    out << "I am dummy files number one." << endl;

    out.close();

    //Reading to files
    ifstream in;
    string line;

    in.open("Dummy_Four.txt");

    while (in.eof() == 0)
    {
        getline(in, line);
        cout << line << endl;
    }

    return 0;
}
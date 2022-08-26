#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string content;
    
    ifstream read("Dummy_Four.txt");

    read >> content; // wiil read till space, '\n' or '\t' encounter

    cout << content;

    getline(read, content); //To get whole line from files

    cout << content;

    read.close();
    
    return 0;
}
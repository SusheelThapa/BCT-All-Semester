#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
The useful classes for working with files in C++ are:
    fstreambase
    ifstream --> Derived from fstreambase
    ofstream --> Derived from fstreambase

In order to work with files,
There are two ways to open a files

1.Using a constructor
2.Using member function open() of the class

*/
int main()
{

    //Writing to Files
    string dummy_two = "I am dummy two file";

    ofstream out("Dummy_Two.txt");

    out << dummy_two;


    //Reading to files
    string dummy_one;
    string single_word;

    ifstream in("Dummy_One.txt");

    in >> single_word;      //Getting single word
    getline(in, dummy_one); //Getting whole line of files

    cout << single_word << endl;
    cout << dummy_one << endl;
    ;

    return 0;
}
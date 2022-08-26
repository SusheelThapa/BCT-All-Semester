#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;

    cout << "Name: ";
    cin >> name;

    ofstream write("Dummy_Three.txt");
    write << name;

    cout << name + " is very good human";
    
    write.close();

    return 0;
}
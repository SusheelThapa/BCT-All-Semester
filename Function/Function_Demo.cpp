#include <iostream>

using namespace std;

//Function Prototype
int sum(int a, int b);

int main()
{
    int answer;

    //Function Call
    answer = sum(5, 7);

    cout << "Addition of  5 and 7 is " << answer << endl;
    
    return 0;
}

//Function body
int sum(int a, int b)
{
    return a + b;
}
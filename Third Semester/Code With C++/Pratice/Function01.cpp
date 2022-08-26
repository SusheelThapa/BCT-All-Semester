#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first_term = 0;
    int second_term = 1;
    int third_term = first_term + second_term;

    for (int i = 0; i < n; i++)
    {
        cout << first_term << " ";
        first_term = second_term;
        second_term = third_term;
        third_term = first_term + second_term;
    }
}

int main()
{
    int n;

    cout << "Last term of Fibonacci Sequence: ";
    cin >> n;

    cout << "Fibonacci Sequence is :";
    fibonacci(n);

    return 0;
}
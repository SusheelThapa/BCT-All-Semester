#include <iostream>
using namespace std;

//Parameter that are used to catch the pass value to function are called formal parameter
float simpleInterest(int p, int r, int t)
{
    return (p * t * r) / 100.0;
}

//Here, argument (power) will take value specified in function if no value is passed to it. So default argument of power will be 2
//Default argument should be at last inside function argument
int powerOfNumber(int base, int power = 2)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * powerOfNumber(base, power - 1);
    }
}

//Here we have use const to make our argument constant so that its value doesnot change inside the function
//So argument define with const are constant argument.It is mostly used in array, pointer, string etc
int arraySum(const int a[])
{
    int sum;
    for (int i = 0; i < 4; i++)
    {
        sum = a[i];
    }
    return sum;
}

int main()
{
    int principal, rate, time;
    float simple_interest;

    cout << "Pricipal : ";
    cin >> principal;
    cout << "Time : ";
    cin >> time;
    cout << "Rate";
    cin >> rate;

    simple_interest = simpleInterest(principal, rate, time); //Here passed value are actual parameter

    cout << "Interest : " << simple_interest << endl;

    cout << "Defult Argument Test : " << powerOfNumber(5);

    int array[] = {2, 3, 4, 6};
    
    cout << "Constant Argument Test : " << arraySum(array);

    return 0;
}
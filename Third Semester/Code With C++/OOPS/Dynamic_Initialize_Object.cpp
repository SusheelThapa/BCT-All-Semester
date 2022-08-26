#include <iostream>
using namespace std;

class BankDeposit
{
    float principal;
    int time_of_years;
    float rate;
    float return_value;

public:

    //For dynamic inializeing of Object we need default constructor
    BankDeposit(void) {}

    //When R is in fraction number
    BankDeposit(float p, int t, float r)
    {
        principal = p;
        time_of_years = t;
        rate = r * 100;
        return_value = p;

        for (int i = 0; i < t; i++)
        {
            return_value = (1 + r) * return_value;
        }
    }

    //When R is in percentage
    BankDeposit(float p, int t, int r)
    {
        principal = p;
        time_of_years = t;
        rate = r;
        return_value = p;

        for (int i = 0; i < t; i++)
        {
            return_value = (1 + r / 100.0) * return_value;
        }
    }

    void printData(void)
    {
        cout << "Pricipal: Rs" << principal << endl;
        cout << "Time: " << time_of_years << " years" << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Interest: Rs" << return_value - principal << endl;
        cout << "Return Value: Rs" << return_value << endl
             << endl;
    }
};

int main()
{
    BankDeposit user_one;
    BankDeposit user_two;

    float p;
    int t;
    int r;

    cout << "Enter value of p,t,r?" << endl;
    cin >> p;
    cin >> t;
    cin >> r;

    user_one = BankDeposit(p, t, r);
    user_one.printData();

    float P;
    int T;
    float R;

    cout << "Enter value of P,T,R?" << endl;
    cin >> P;
    cin >> T;
    cin >> R;
    user_two = BankDeposit(P, T, R);
    user_two.printData();

    return 0;
}
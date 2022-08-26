#include <iostream>
using namespace std;

int sumBinary(int one, int two)
{
    int result = 0;

    int rem_one, rem_two, base_power = 1, carry_over = 0;

    do
    {
        rem_one = one % 10;
        rem_two = two % 10;

        if (rem_one == 0)
        {
            if (rem_two == 0)
            {

                if (carry_over == 0)
                {
                    carry_over = 0;
                    result = result + 0 * base_power;
                }
                else if (carry_over == 1)
                {
                    carry_over = 0;
                    result = result + 1 * base_power;
                }
            }
            else if (rem_two == 1)
            {

                if (carry_over == 0)
                {
                    carry_over = 0;
                    result = result + 1 * base_power;
                }
                else if (carry_over == 1)
                {
                    carry_over = 1;
                    result = result + 0 * base_power;
                }
            }
        }
        else if (rem_one == 1)
        {
            if (rem_two == 0)
            {
                if (carry_over == 0)
                {
                    carry_over = 0;
                    result = result + 1 * base_power;
                }
                else if (carry_over == 1)
                {
                    carry_over = 1;
                    result = result + 0 * base_power;
                }
            }
            else if (rem_two == 1)
            {
                if (carry_over == 0)
                {
                    carry_over = 1;
                    result = result + 0 * base_power;
                }
                else if (carry_over == 1)
                {
                    carry_over = 1;
                    result = result + 1 * base_power;
                }
            }
        }
        one /= 10;
        two /= 10;
        base_power *= 10;

        if (one == 0)
        {
            if (two == 0)
            {
                if (carry_over == 0)
                {
                    break;
                }
            }
        }
    } while (true);

    return result;
}

int main()
{
    int binary_one, binary_two;

    cout << "Enter two binary number?\n";
    cin >> binary_one >> binary_two;

    cout << "Sum of " << binary_one << " + " << binary_two << " is " << sumBinary(binary_one, binary_two) << endl;

    return 0;
}
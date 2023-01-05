#include <iostream>
#include <cmath>
using namespace std;

float getFunctionValue(float x, float y)
{
    return x + y;
}

void eulerMethod(float xo, float yo, float n, float xn)
{
    float h = (xn - xo) / n;

    for (int i = 0; i < n; i++)
    {

        yo = yo + h * getFunctionValue(xo, yo);
        xo = xo + h;

        cout << xo << " " << yo << endl;

        if (xo > xn)
        {
            return;
        }
    }
}

void rkTwoMethod(float xo, float yo, float n, float xn)
{
    float k1, k2, k;

    float h = (xn - xo) / n;
    float y1;

    for (int i = 0; i < n; i++)
    {
        k1 = h * getFunctionValue(xo, yo);
        k2 = h * getFunctionValue(xo + h, yo + k1);

        k = (k1 + k2) / 2;

        y1 = yo + k;
        xo = xo + h;
        yo = y1;
        cout << xo << " " << yo << endl;
    }
}

void rkFourMethod(float xo, float yo, float n, float xn)
{
    float k1, k2, k3, k4, k;

    float h = (xn - xo) / n;
    float y1;

    for (int i = 0; i < n; i++)
    {
        k1 = h * getFunctionValue(xo, yo);
        k2 = h * getFunctionValue(xo + h / 2, yo + k1 / 2);
        k3 = h * getFunctionValue(xo + h / 2, yo + k2 / 2);
        k4 = h * getFunctionValue(xo + h, yo + k3);

        k = (k1 + 2 * (k2 + k3) + k4) / 6;

        y1 = yo + k;
        xo = xo + h;
        yo = y1;
        cout << xo << " " << yo << endl;
    }
}

int main()
{
    float xo, yo, n, xn;

    cout << "Xo : ";
    cin >> xo;

    cout << "Yo : ";
    cin >> yo;

    cout << "n : ";
    cin >> n;

    cout << "Xn : ";
    cin >> xn;

    /*Use only one method at a time*/
    eulerMethod(xo, yo, n, xn);
    rkFourMethod(xo, yo, n, xn);
    rkTwoMethod(xo, yo, n, xn);

    return 0;
}

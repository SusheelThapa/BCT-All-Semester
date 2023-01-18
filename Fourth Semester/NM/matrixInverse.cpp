#include <iostream>
using namespace std;

int main()
{
    float matrix[20][20];
    int size;

    cout << "Size of the matrix:" << endl;
    cin >> size;

    /*Taking the matrix data*/
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];

            if (i == j)
                matrix[i][j + size] = 1;
            else if (i != j)
                matrix[i][j + size] = 0;
        }
    }

    /*Calculating matrix inverse*/
    float ratio;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                ratio = matrix[j][i] / matrix[i][i];
                for (int k = 0; k < size * 2; k++)
                {
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }

    /*Printing the inverse matrix*/
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            cout << matrix[i][j] / matrix[i][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

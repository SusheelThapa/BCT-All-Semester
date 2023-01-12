#include <iostream>

using namespace std;

int main()
{
    float augumentedMatrix[20][20];
    float result[20];
    float ratio;

    int size;
    cout << "Size of matrix: ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size + 1; j++)
        {
            cout << "A[" << i << "," << j << "] ";
            cin >> augumentedMatrix[i][j];
        }
    }

    for (int j = 1; j <= size; j++)
    {
        if (augumentedMatrix[j][j] == 0)
        {
            cout << "Mathematical Error";
        }
        for (int i = 1; i <= size; i++)
        {
            if (i != j)
            {
                ratio = augumentedMatrix[i][j] / augumentedMatrix[j][j];
                for (int k = 1; k <= size + 1; k++)
                {
                    augumentedMatrix[i][k] = augumentedMatrix[i][k] - ratio * augumentedMatrix[j][k];
                }
            }
        }
    }
    
    for (int i = 1; i <= size; i++)
    {
        result[i] = augumentedMatrix[i][size + 1] / augumentedMatrix[i][i];

        cout << result[i] << endl;
    }

    return 0;
}

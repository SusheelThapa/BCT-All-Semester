
#include <iostream>
using namespace std;

int SIZE = 3;

typedef struct DataPoint
{
    float x, y;
} DataPoint;

float *solveByGaussJordan(float matrix[20][20])
{
    float *result = new float[3];

    /*Calculating matrix inverse*/
    float ratio;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i != j)
            {
                ratio = matrix[j][i] / matrix[i][i];
                for (int k = 0; k < SIZE + 1; k++)
                {
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }

    /*Calculating the result*/
    for (int i = 0; i < SIZE; i++)
    {
        result[i] = matrix[i][SIZE] / matrix[i][i];
    }

    return result;
}

int main()
{

    int numberOfData;
    cout << "Total Data:";
    cin >> numberOfData;

    DataPoint *data = new DataPoint[numberOfData];

    for (int i = 0; i < numberOfData; i++)
    {

        cout << "X: ";
        cin >> data[i].x;

        cout << "Y: ";
        cin >> data[i].y;
    }

    float n = 0, x = 0, x2 = 0, x3 = 0, x4 = 0, y = 0, xy = 0, x2y = 0;

    for (int i = 0; i < numberOfData; i++)
    {
        n++;
        x += data[i].x;
        x2 += data[i].x * data[i].x;
        x3 += data[i].x * data[i].x * data[i].x;
        x4 += data[i].x * data[i].x * data[i].x * data[i].x;
        y += data[i].y;
        xy += data[i].x * data[i].y;
        x2y += data[i].x * data[i].x * data[i].y;
    }

    /*Creating the matrix the matrix data*/

    float matrix[20][20];

    matrix[0][0] = n;
    matrix[0][1] = x;
    matrix[0][2] = x2;
    matrix[1][0] = x;
    matrix[1][1] = x2;
    matrix[1][2] = x3;
    matrix[2][0] = x2;
    matrix[2][1] = x3;
    matrix[2][2] = x4;
    matrix[0][3] = y;
    matrix[1][3] = xy;
    matrix[2][3] = x2y;

    float *result = solveByGaussJordan(matrix);

    cout << "The best fit polynomial equation is y=" << result[0] << "+" << result[1] << "x"
         << "+" << result[2] << "x2" << endl;

    return 0;
}

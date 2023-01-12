#include<iostream>
using namespace std;
int main()
{
    float augumentedMatrix[20][20];
    float result [20];
    float ratio;


    int size;
    cout<<"Size of matrix: ";
    cin>>size;

    for(int k=1; k<=size; k++)
    {
        for(int j=1; j<=size+1; j++)
        {
            cout<<"A["<<k<<","<<j<<"] ";
            cin>>augumentedMatrix[k][j];
        }
    }

    for(int k =1; k<=size; k++)
    {

        if(augumentedMatrix[k][k]==0)
        {
            cout<<"Mathematical Error";
        }
        for(int i = 1; i<=size; i++)
        {
            if(i>k)
            {
                ratio = augumentedMatrix[i][k]/augumentedMatrix[k][k];
                for(int j=1; j<=size+1; j++)
                {
                    augumentedMatrix[i][j]= augumentedMatrix[i][j] -ratio * augumentedMatrix[k][j];

                }
            }
        }
    }
    result[size] = augumentedMatrix[size][size+1]/augumentedMatrix[size][size];

    float sum;
    for(int i = size-1; i>=1; i--)
    {

        sum =0;
        for(int j=i+1; j<=size; j++)
        {
            sum +=augumentedMatrix[i][j]*result[j];
        }
        result[i] =(augumentedMatrix[i][size+1]-sum)/augumentedMatrix[i][i];
    }

    for(int i =1; i<=size; i++)
    {
        cout<<result[i]<<endl;
    }


    return 0;
}

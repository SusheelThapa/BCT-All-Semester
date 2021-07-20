#include <math.h>

void inputOneDArray(int array[], int array_length)
{
    "Takes two argument array and length of array. Ask user to input the value in respective array element";

    for (int i = 0; i < array_length; i++)
    {
        printf("Value of %d element is ", i + 1);
        scanf("%d", &array[i]);
    }
}

void sortOneDArrayAscend(int array[], int array_length)
{
    "Sorted the array in ascending order";

    for (int i = 0; i < array_length; i++)
    {
        for (int j = 0; j < array_length; j++)
        {
            if (array[i] < array[j])
            {
                array[i] = array[i] + array[j] - (array[j] = array[i]);
            }
        }
    }
}

void sortOneDArrayDescend(int array[], int array_length)
{
    "Sorted the array in ascending order";

    for (int i = 0; i < array_length; i++)
    {
        for (int j = 0; j < array_length; j++)
        {
            if (array[i] > array[j])
            {
                array[i] = array[i] + array[j] - (array[j] = array[i]);
            }
        }
    }
}

float medianOneDArray(int array[], int array_length)
{
    "Calculate median and return value of median";

    float position_of_array = (array_length + 1) / 2.0;

    if (position_of_array - (int)position_of_array == 0.0)
    {
        return array[(int)position_of_array - 1];
    }
    else
    {
        return array[(int)position_of_array] + array[(int)position_of_array - 1] / 2.0;
    }
}

int smallOneDArray(int array[], int array_length)
{
    "Finds the smallest elements in array";

    int small = array[0];

    for (int i = 1; i < array_length; i++)
    {
        if (small > array[i])
        {
            small = array[i];
        }
    }

    printf("small = %d\n", small);

    return small;
}

int largeOneDArray(int array[], int array_length)
{
    "Finds the largest element of array";

    int large = array[0];

    for (int i = 1; i < array_length; i++)
    {
        if (large < array[i])
        {
            large = array[i];
        }
    }

    printf("large = %d\n", large);

    return large;
}

int sumOneDArray(int array[], int array_length)
{
    "Calculates the sum of elements of array";

    int sum = 0;

    for (int i = 0; i < array_length; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}

float meanOneDArray(int array[], int array_length)
{
    "Calculate the mean of elements of integer array";

    float mean = 0.0;

    mean = sumOneDArray(array, array_length) / (float)array_length;

    return mean;
}

float sdOneDArray(int array[], int array_length)
{
    "Calculates the standard deviation of elements of integer array";

    float sd, diverse;

    float mean = meanOneDArray(array, array_length);

    for (int i = 0; i < array_length; i++)
    {
        diverse = (mean - array[i]) * (mean - array[i]) + diverse;
    }

    sd = pow(diverse / array_length, 0.5);

    return sd;
}

float varianceOneDArray(int array[], int array_length)
{
    "Calculate the variance of elements of integer array";

    float variance = pow(sdOneDArray(array, array_length), 2);

    return variance;
}

void displayOneDArray(int array[], int array_length)
{
    "Display the array elements";

    for (int i = 0; i < array_length; i++)
    {
        printf("%d ", array[i]);
    }
}

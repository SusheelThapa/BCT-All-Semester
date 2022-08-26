/*
Question_One.cpp

Create a function called sum() that returns the sum of the elements of an array.
Make this function into a template so it will work with any numerical type.
Write a program that applies this function to data of various types.
*/

#include <iostream>

template <typename T>
T sum(T array[], int total_size)
{
    T total_sum = 0;

    for (int i = 0; i < total_size; i++)
    {
        total_sum += array[i];
    }

    return total_sum;
}

int main()
{
    int array_int[] = {1, 2, 3, 4};

    float array_float[] = {1.4, 2.5, 2.4};

    std::cout << sum<int>(array_int, 4) << std::endl;
    std::cout << sum<float>(array_float, 3) << std::endl;

    return 0;
}
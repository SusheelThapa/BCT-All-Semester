/*Write a program to find the average value of 5 elements of one dimensional array defined in program*/
#include <stdio.h>
#include <conio.h>

int main()
{
    /*Varaible declaration*/
    int sum=0;
    float average;
    /*Declaration of One Dimensional Array*/
    int array_one_d[5] = {1, 2, 3, 4, 5};

    /*Iterating over the loop*/
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array_one_d[i];
    }

    average = sum / 5.0;//Calculating average

    /*Meaningfuk information*/
    printf("Average Value of Array is:%.2f ", average);
    getch();
    return 0;
}
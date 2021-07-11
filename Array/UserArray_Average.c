/*Write a program to find the average value of % elements of one dimensional array given by user*/
#include <stdio.h>
#include <conio.h>

int main()
{
    /*Varaible declaration*/
    int sum = 0;
    float average;
    /*Declaration of One Dimensional Array*/
    int array_one_d[5];

    /*Taking input in array*/
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d number: ", i + 1);
        scanf("%d", &array_one_d[i]);
    }
    /*Iterating over the loop*/
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array_one_d[i];
    }

    average = sum / 5.0; //Calculating average

    /*Meaningfuk information*/
    printf("Average Value of Array is:%.2f ", average);
    getch();
    return 0;
}
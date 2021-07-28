/*
Write a program to read a year from the user and write it in the file if the year is leap year
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void leapYear(unsigned int year)
{

    unsigned int divisible_by_four, divisible_by_hundered, divisible_by_four_hundered;

    /*Below if check whether the year enter in after 1582 or not*/
    if (year >= 1582)
    {

        /*Needed tool for checking the variable*/
        divisible_by_four = year % 4;
        divisible_by_hundered = year % 100;
        divisible_by_four_hundered = year % 400;

        /*Check the condition to be a leap year*/
        if (divisible_by_four == 0)
        {
            if (!(divisible_by_hundered == 0) || divisible_by_four_hundered == 0)
            {
                printf("It is leap year.\n");

                printf("Writing to file 'Program01.txt'.\n");

                /*Writing data to files*/
                FILE *ptr_file; /*Files pointer*/

                ptr_file = fopen("Program01.txt", "a"); /*Pointing to the file*/

                fprintf(ptr_file, "%d is leap year.\n", year);

                fclose(ptr_file); /*Close the files pointer*/
                printf("\n\nDONE...");
            }
            else
            {
                printf("It isn't leap year.");
            }
        }
        else
        {
            printf("It isn't leap year.");
        }
    }
    else
    {
        printf("You didn't give input as per asked in questions.");
    }
}
int main()
{
    unsigned int year;

    system("cls");

    printf("Year(after 1582): ");
    scanf("%u", &year);

    leapYear(year);

    getch();
    return 0;
}

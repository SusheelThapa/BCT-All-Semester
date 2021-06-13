/*Program to find whether the year entered by the user is leap year or not*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
    Leap year: A Leap year has 366 days(the extra day is 29th of Feburary).

    Steps to know whether the year is leap year or not:
    -->Leap years are extaclty divisible by four.
        True: -->It is not exactly divisible by hundred
            True: It is not leap year
            False: --> It is exactly divisible by 400
                True: It is leap year
                False: It is not leap year
         False: It is not leap year.
            
    -->
    -->

*/
int main()
{
    /*Declaration of uesd variable*/
    unsigned int user_input_year, divisible_by_four, divisible_by_hundered, divisible_by_four_hundered;

    system("cls"); /*Clear the terminal screen*/

    /*Taking user input */
    printf("Enter the year after 1582?\n");
    scanf("%d", &user_input_year);

    system("cls");                         /*Clear the terminal screen*/
    printf("Year: %d\n", user_input_year); /*Prints the user input year*/

    /*Below if check whether the year enter in after 1582 or not*/
    if (user_input_year >= 1582)
    {

        /*Needed tool for checking the variable*/
        divisible_by_four = user_input_year % 4;
        divisible_by_hundered = user_input_year % 100;
        divisible_by_four_hundered = user_input_year % 400;

        /*Check the condition to be a leap year*/
        if (divisible_by_four == 0)
        {
            if (!(divisible_by_hundered == 0) || divisible_by_four_hundered == 0)
            {
                printf("It is leap year.");
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

    getch();
    return 0;
}
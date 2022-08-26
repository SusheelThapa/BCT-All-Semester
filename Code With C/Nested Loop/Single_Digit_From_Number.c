/*
Questions:
    193 = 1 + 9 + 3 = 13 = 1 + 3 = 4(single digit)

*/
/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Varaible Declaration*/
    int number, remainder, sum = 0, copy_number;

    system("cls"); /*Clear the screen*/

    /*Taking input*/
    printf("Number: ");
    scanf("%d", &number);

    /*Nested Loop*/
    do
    {
        copy_number = number;
        sum = 0;

        do
        {
            remainder = number % 10;
            sum = sum + remainder;
            number = number / 10;
        } while (number != 0);

        printf("\nSum of digits of %d is %d.", copy_number, sum); /*Meaningful Result*/

        number = sum; /*Value of number for next iteration*/

    } while ((number / 10) != 0);

    printf("\nSingle digit sum is %d. ", sum); /*Meaningful
     result*/

    getch();
    return 0;
}

/*
Logic of Code:
    Will be written soon!
*/
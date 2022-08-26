/*Write a progrma to create a function: int findLowest(int,int ,int); and int findHighest(int,int,int); The task of findLowest() is to find the lowest of three integers and return an integers to the calling functions. Similarly, the task of findHighest() is to find the highest of three integers and return an integers to the calling function. Call these functions in main() giving appropriate arguments.
Note: Use conditional operator (test expression? expression1: expression2) to find highest and lowest*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function definition*/
int findLowest(int, int, int);
int findHighest(int, int, int);

int main()
{
    /*Variable Declaration*/
    int number_one, number_two, number_three;

    system("cls");/*Clear the screen*/

    /*Taking Input*/
    printf("Number One: ");
    scanf("%d", &number_one);
    printf("Number Two: ");
    scanf("%d", &number_two);
    printf("Number Three: ");
    scanf("%d", &number_three);

    /*Function call and printing*/
    printf("\nLowest number is %d", findLowest(number_one, number_two, number_three));
    printf("\nHighest number is %d", findHighest(number_one, number_two, number_three));

    getch();
    return 0;
}

/*Function body*/
int findLowest(int a, int b, int c)
{
    int low;
    (a < b && a < c) ? ((low = a)) : ((b < c) ? ((low = b)) : ((low = c)));
    return low;
}
int findHighest(int a, int b, int c)
{
    int high;
    (a > b && a > c) ? ((high = a)) : ((b > c) ? ((high = b)) : ((high = c)));
    return high;
}

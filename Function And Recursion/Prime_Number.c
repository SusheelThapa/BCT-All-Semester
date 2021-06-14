/*
    Program to check whether the number is Prime number or Composite Number
*/

/* Importing the required variable*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
Logic of code:
    Prime number are those number whose can be peefectly divisible by only two number(one b itself and next one by 1)
            Number      Perfectly Divisible    Remarks
             2               1,2             Prime Number
             9               1,3,9           Composite Number

    With the defination, we iterate over the number by finding remainder by numbers(user input number -1 to 2). if we get zero remainder in any of the step then the number will be composite since the number is not dividing and 1 is also dividing.
    In mathematical form,
            Number      Divided by       Remainder
              13          12                1
              13          11                2
              13          10                3
              13           9                4
              13           8                5
              13           7                6
              13           6                1
              13           5                2
              13           4                3
              13           3                1
              13           2                1

            Since none of the remainder is 0 so 13 is prime number.

            Number      Divided by       Remainder
              8          7                 1
              8          6                 2
              8          5                 3
              8          4                 0
              

            Since,we obtian any one of the remainder as 0 so 8 is compostite number.

        In Code:
            number = 18;
            i = number - 1 = 17
            for (;i>1;i--){
                if(!(i==1 || i == 0)){
                    if (number %i == 0){
                        printf("Composite Number.")
                        break;
                    }
                }
                else{
                    printf("Compostite Number");
                }
            }
        What if number is 1 or 0 is input which are netiher prime nor composite number. We simply write condition
            if (number == 0 || number == 1){
                printf("It is neither prime nor composite");
            }
            else{
                above loop copy paste
            }
*/
int main()
{
    /*Declaration of required variable*/
    int number, i;

    /* Taking user input */
    printf("Enter the number: ");
    scanf("%d", &number);

    /*Below lines are explained above*/
    i = number - 1;

    if (number == 0 || number == 1)
    {
        printf("It is neither prime nor composite.");
    }
    else
    {
        for (; i; i--)
        {

            if (!(i == 0 || i == 1))

            {
                if (number % i == 0)
                {
                    printf("Composite Number\n");
                    break;
                }
            }
            else
            {
                printf("Prime Number");
            }
        }
    }
}

/*If you have better idea, feel free to contact us*/

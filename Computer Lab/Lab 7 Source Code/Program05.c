/*Combine Question 1 2 3 4 using switch statement. For this display a menu on the screen to prompt user whether he wants to sum two number or sumof digits of an integer or calculate factorial of an integer or to know whether number is prime or not*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*Function taken from Program 1,2,3,4*/
float add(int a, float b)
{
    return (float)a + b;
}

int sumOfDigits(int a)
{
    if (a < 0)
    {
        return 0;
    }
    else
    {
        while (a != 0)
        {

            int rem = a % 10;
            a = a / 10;
            return rem + sumOfDigits(a);
        }
    }
}

unsigned int fact(unsigned int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}

void check_prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("\nIt is compostite number");
            exit(0);
        }
    }
    printf("\nIt is prime number");
}

/*Function to display Option*/
void menu()
{
    printf("<--------------Menu-------------->\n");
    printf("%5s%s\n", "", "1.Sum of Numbers");
    printf("%5s%s\n", "", "2.Sum of Digits");
    printf("%5s%s\n", "", "3.Factorial");
    printf("%5s%s\n", "", "4.Check Prime or Composite");
}

int main()
{
    /*Variable Declaration*/
    int one_number_one;
    float one_number_two, one_sum;

    int two_number, two_sum;

    unsigned three_number, three_factorial;

    int four_number;

    int choice;

    /*Clear the screen*/
    system("cls");

    menu();/*Function call*/


    /*Taking input*/
    printf("Choice: ");
    scanf("%d", &choice);

    /*Simple switch case and in every case code copy from Program 1,2,3,4*/
    switch (choice)
    {
    case 1:

        system("cls"); /*Clear the Screen*/

        /*Taking input*/
        printf("Number one:");
        scanf("%d", &one_number_one);
        printf("Number two:");
        scanf("%f", &one_number_two);

        /*Function call*/
        one_sum = add(one_number_one, one_number_two);

        /*Desplay the result*/
        printf("\nAddition of %d and %.2f is %.2f", one_number_one, one_number_two, one_sum);
        break;

    case 2:

        system("cls");

        printf("Number: ");
        scanf("%d", &two_number);

        two_sum = sumOfDigits(two_number);
        printf("Sum of digits in %d is %d", two_number, two_sum);

    case 3:

        system("cls");

        printf("Number : ");
        scanf("%u", &three_number);

        three_factorial = fact(three_number);

        printf("\nFactorial of %u is %u", three_number, three_factorial);

        break;

    case 4:

        system("cls");

        printf("Number: ");
        scanf("%d", &four_number);

        check_prime(four_number);

    default:
        printf("You didn't choose right option.");
        break;
    }

    getch();
    return 0;
}
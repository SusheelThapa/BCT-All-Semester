/* 
Questions:
    1+ x/1! +x^2/2! + x^3/3!.......... till sum of terms is less thab 10^-6

*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    /*Variable Declaration*/
    int power =0;
    double x, term = 1, sum_of_term = 0,condition;

    system("cls");/*Clear the screen*/

    /*Taking user input*/
    printf("Value of x: ");
    scanf("%lf", &x);

    printf("\n\nSequence with value of x till term>10^-6: \n");/*Information*/

    /*While loop and it exit whenever condition is <=0*/
    while(condition >(double)0){

        term = pow(x, power) / tgamma(power + 1);

        printf("%.10f +", term);/*Print the term*/

        sum_of_term = term + sum_of_term; /*Calculate the sum of term*/
        condition=term - 0.000001; /*Calculate the condition*/
        power++; /*Increase the power*/
    }

    /*Meaningful Result*/
    printf("\n\nSum of term : %.5f\n", sum_of_term);
    printf("\nAt %d term,term is less than 10^-6\n", power);

    getch();/*Wait till key is presssed*/
    return 0;
}
/*
We use formula fof t(n) term:
    t(n) = x^0/0!
    We use tgamma function to calculate the factorial of number
        SYNTAX:
            tgamma(n)= (n-1)!
        
    We use pow function for calculating power of x
        SYNTAX:
            pow(x,power)

    On each iteration we increased the value of power
        power++

    Now we have given condition to run while loop in questions:
        term>10^-6
        term-10^-6>0
        condition= term-10^-6>0

    Compile all these in code:
*/
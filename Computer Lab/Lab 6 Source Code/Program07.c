/* 
1+ x/1! +x^2/2! + x^3/3!.......... till sum of terms is less thab 10^-6
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int power =0;
    double x, term = 1, sum_of_term = 0,condition;
    system("cls");
    printf("Value of x: ");
    scanf("%lf", &x);
    printf("\n\nSequence with value of x till term>10^-6: \n");
    while(condition >(double)0){
        term = pow(x, power) / tgamma(power + 1);
        printf("%.10f +", term);
        sum_of_term = term + sum_of_term;
        condition=term - 0.000001;
        power++;
    }
    printf("\n\nSum of term : %.5f\n", sum_of_term);
    printf("\nAt %d term,term is less than 10^-6\n", power);

    getch();
    return 0;
}
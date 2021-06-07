
/*Calculate the income tax paid by the employee to the government as per the slabs mentioned below
    
      Income Slab           Tax
      2.5L-5.0L             5%
      5.0L-10.0L            20%
      Above 10L             30%
      */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float salary, tax1, tax2, tax3;

    system("cls");

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary >= 250000)
    {
        tax1 = (salary - 250000) * 5 / 100;

        if (salary >= 500000)
        {
            tax2 = 250000 * 5 / 100 + (salary - 500000) * 20 / 100;
            if (salary >= 1000000)
            {
                tax3 = 500000 * 20 / 100 + 250000 * 5 / 100 + (salary - 1000000) * 30 / 100;
                printf("You should pay %.0f rupees tax.", tax3);
            }
            else
            {
                printf("You should pay %.  tax.", tax2);
            }
        }
        else
        {
            printf("You should pay %.0f rupees tax.", tax1);
        }
    }
    else
    {
        printf("You should not pay any tax.");
    }

    getch();
    return 0;
}
/*
Question_One.c

Write a program to find the average expenditure of a company, for each month of each year over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.
*/

#include <stdio.h>

int main()
{
    int lower_limit_of_year, upper_limit_of_year, number_of_year;

    printf("Lower Limit Of Year: ");
    scanf("%d", &lower_limit_of_year);

    printf("Lower Limit Of Year: ");
    scanf("%d", &upper_limit_of_year);

    number_of_year = upper_limit_of_year - lower_limit_of_year;

    int expenditure[number_of_year][12];

    for (int i = 0; i < number_of_year; i++)
    {
        printf("Year: %d\n", lower_limit_of_year + i);

        for (int j = 0; j < 12; j++)
        {
            printf("Expenditure in %d month : ", j + 1);
            scanf("%d", &expenditure[i][j]);
        }

        printf("\n");
    }

    printf("\n%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "Year ", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec", "Sum", "Expenditure");

    for (int i = 0; i < 15 * 12; i++)
        printf("-");

    printf("\n");

    int sum = 0, total_sum = 0;

    float average_expenditure = 0, total_average_expenditure = 0;

    for (int i = 0; i < number_of_year; i++)
    {
        sum = 0;
        printf("%-12d", lower_limit_of_year + i);

        for (int j = 0; j < 12; j++)
        {
            printf("%-12d", expenditure[i][j]);
            sum += expenditure[i][j];
        }

        average_expenditure = sum / 12.0;

        total_sum += sum;

        total_average_expenditure += average_expenditure;

        printf("%-12d%-12.3f\n",  sum, average_expenditure);
    }

    for (int i = 0; i < 15 * 12; i++)
        printf("-");

    printf("\n%-156s%-12d%-12.3f", "Total : ", total_sum, total_average_expenditure);

    return 0;
}
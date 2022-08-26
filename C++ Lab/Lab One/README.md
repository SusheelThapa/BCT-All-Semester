# Lab One

## Question One

**Write a program to find the average expenditure of a company, for each month of each year over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.**

```C++

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
```

## Question Two

**Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.**

```C++
#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "idea without execution is worthless";

    char *string_pointer = string;

    printf("String : %s\n", string);

    for (int i = 0; i < strlen(string); i++)
    {
        if (*(string_pointer + i) == 'c' || *(string_pointer + i) == 'C')
        {
            printf("The position of c in the string is %.d\n", i + 1);
        }
    }

    return 0;
}
```

## Question Three

**Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.**

```C++

#include <stdio.h>

struct StudentSemesterExamRecord
{
    char name[20];
    int marks_obtained_in_c_programming;
} student[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Name of Student %d: ", i + 1);
        scanf("%s", student[i].name);

        printf("Marks obtained in C 'Programming : ");
        scanf("%d", &student[i].marks_obtained_in_c_programming);
    }

    printf("\n%-20s %-6s\n", "Name", "Marks");

    for (int i = 0; i < 5; i++)
    {
        printf("%-20s %-6d\n", student[i].name, student[i].marks_obtained_in_c_programming);
    }

    return 0;
}
```

## Question Four

**Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the nformation alphabetically according to the name.**

```C++

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct StudentRecord
{
    char name[20];
    int roll_number;
    char address[20];
    char phonenumber[11];
};

int main()
{
    FILE *file_pointer = fopen("Question_Four_File.txt", "wb");

    if (file_pointer == NULL)
    {
        printf("Error while opening file");
        fclose(file_pointer);
    }
    else
    {
        struct StudentRecord student[5];

        for (int i = 0; i < 5; i++)
        {

            fflush(stdin);

            printf("Name: ");
            scanf("%s", student[i].name);

            fflush(stdin);

            printf("Roll Number: ");
            scanf("%d", &student[i].roll_number);

            fflush(stdin);

            printf("Address: ");
            scanf("%s", student[i].address);

            fflush(stdin);

            printf("Phone Number: ");
            scanf("%s", &student[i].phonenumber);

            fwrite(&student[i], sizeof(struct StudentRecord), 1, file_pointer);
        }

        fclose(file_pointer);

        file_pointer = fopen("Question_Four_File.txt", "rb");

        if (file_pointer == NULL)
        {
            printf("Error while opening file");
            fclose(file_pointer);
        }
        else
        {
            struct StudentRecord student_record[5];

            for (int i = 0; i < 5; i++)
            {
                fread(&student_record[i], sizeof(struct StudentRecord), 1, file_pointer);
            }

            // Bubble sort algorithm to sort student by their name
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (strcmp(student_record[i].name, student_record[j].name) < 0)
                    {
                        struct StudentRecord temp_student;

                        temp_student = student_record[i];
                        student_record[i] = student_record[j];
                        student_record[j] = temp_student;
                    }
                }
            }

            system("clear");

            printf("\n%-16s%-16s%-16s%-16s\n", "Name", "Roll Number", "Address", "Phone number");

            for (int i = 0; i < 5; i++)
            {
                printf("%-16s%-16d%-16s%-16d\n", student_record[i].name, student_record[i].roll_number, student_record[i].address, student_record[i].phonenumber);
            }
        }
    }

    return 0;
}
```

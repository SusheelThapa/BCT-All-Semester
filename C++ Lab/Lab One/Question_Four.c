/*
Question_Two.c

Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the nformation alphabetically according to the name.

*/

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
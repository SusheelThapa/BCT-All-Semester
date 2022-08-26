#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Declartion of character varaible*/
    char ch;

    /*Declaration of Files pointer*/
    FILE *create_files;

    /*Files will be created in not present and FILE pointer will points to that file memory*/
    create_files = fopen("D:\\Coding Universe\\Code With C\\1.txt", "w");

    system("cls");

    /*Error handling*/
    if (create_files == NULL)
    {
        printf("Files cannot be opened");
        exit(1);
    }

    /*Writing to the files*/
    fprintf(create_files, "This is my first file");

    /*Closing the files*/
    fclose(create_files);

    create_files = fopen("1.txt", "r");

    if (create_files == NULL)
    {
        printf("Files cannot be opened");
        getch();
        exit(1);
    }
    do
    {
        ch = fgetc(create_files);

        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    } while (1);

    fclose(create_files);

    getch();
    return 0;
}
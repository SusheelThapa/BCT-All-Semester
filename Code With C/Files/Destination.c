/*
WAP that writes something in the source files, copies the content of source files and displays the content in the destination on the screen
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Declaration of file pointer and variable*/
    FILE *source, *destination;
    char ch;

    system("cls");

    /*Opeining files*/
    source = fopen("Source.c", "a");
    destination = fopen("Destination.c", "w");

    /*Checking if the files had been openned successfully*/
    if (source == NULL || destination == NULL)
    {
        printf("File cannot be opened");
        getch();
        exit(1);
    }

    /*Wring to the files*/
    fprintf(source, "/*Writing to the source files name at last with the help of program,\nFile Name :%s*/", __FILE__);

    /*Closing the source files*/
    fclose(source);

    /*Opeining files in reading mode*/
    source = fopen("Source.c", "r");

    /*CHecking if the file is opened successfully*/
    if (source == NULL)
    {
        printf("Files cannot be opened.");
        getch();
        exit(1);
    }

    /*Copying files to another files and displaying the files*/
    do
    {
        ch = fgetc(source);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, destination);
        printf("%c", ch);
    } while (1);

    /*Closing the files*/
    fclose(destination);

    getch();
    return 0;
}
/*Writing to the source files name at last with the help of program,
File Name :Source.c*/
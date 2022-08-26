/*
Modify question number 4, using binary file. You should use fwrite() fucntion to write data into a text files and fread() function to read the file. [here, you must use structure for data handling]
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*Creating a structure*/
struct Data
{
    char name[100];
    int roll_number;
    char address[100];
    long long int telephone_number;
    float score;
};

int main()

{

    /*Structure variable*/
    struct Data user;

    /*Creating Files pointer*/
    FILE *in_first;
    FILE *out_first;
    FILE *in_second;
    FILE *out_second;

    system("cls");

    /*Taking input from user*/
    printf("Name: ");
    scanf("%[^'\n']", user.name);

    printf("Roll Number: ");
    scanf("%d", &user.roll_number);

    printf("Address: ");
    scanf(" %[^'\n']", user.address);

    printf("Telephone Number:");
    scanf("%lld", &user.telephone_number);

    printf("IOE score: ");
    scanf("%f", &user.score);

    /*Opening first.txt in write binary mode and write the inputed data*/
    in_first = fopen("First_05.txt", "wb");

    /*Writing data that has been taken from user*/
    fwrite(&user, sizeof(user), 1, in_first);

    /*Closing the file*/
    fclose(in_first);

    /*Opening First.txt in read binary mode and Second.txt in write binary mode*/
    out_first = fopen("First_05.txt", "rb");
    in_second = fopen("Second_05.txt", "wb");

    /*Reading a data and writing the read data to another file. Copying data from one file to another*/
    fread(&user, sizeof(user), 1, out_first);
    fwrite(&user, sizeof(user), 1, in_second);

    /*Closing the files*/
    fclose(out_first);
    fclose(in_second);

    /*Opening the second.txt in read binary mode*/
    out_second = fopen("Second_05.txt", "rb");

    /*Reading the data*/
    fread(&user, sizeof(user), 1, out_first);

    /*Printing the data that has been read*/
    printf("%s\n", user.name);
    printf("%s\n", user.address);
    printf("%lld\n", user.telephone_number);
    printf("%d\n", user.roll_number);
    printf("%.2f\n", user.score);
    fclose(out_second);

    getch();
    return 0;
}
/*
Create a structure TIME containing hour, minutes and seconds as its member. Write a program that uses this structure to input start time and stop time in main(). Pass the structure to a function that calculated the sum and diffrenece of start time and stop time.Display the sum and difference from main()
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*Creating Structure*/
struct TIME
{
    int hh;
    int mm;
    int ss;
};

/*Function with type of created structure*/
struct TIME addTime(struct TIME first, struct TIME second)
{
    "Add the two time passed";

    struct TIME result;

    result.ss = first.ss + second.ss;
    result.mm = first.mm + second.mm;
    result.hh = first.hh + second.hh;

    if (result.ss >= 60)
    {
        result.ss = result.ss - 60;
        result.mm = result.mm + 1;
    }
    if (result.mm >= 60)
    {
        result.mm = result.mm - 60;
        result.hh = result.hh + 1;
    }
    return result;
}

struct TIME subtractTime(struct TIME first, struct TIME second)
{
    "Subtract the two time passes";

    struct TIME result;

    result.ss = first.ss - second.ss;
    result.mm = first.mm - second.mm;
    result.hh = first.hh - second.hh;

    if (result.ss < 0)
    {
        result.ss = result.ss + 60;
        result.mm = result.mm - 1;
    }
    if (result.mm < 0)
    {
        result.mm = result.mm + 60;
        result.hh = result.hh - 1;
    }
    return result;
}

int main()
{
    struct TIME start, stop, add, subtract;

    system("cls");

    /*Taking input*/
    printf("Start Time:\n");
    printf("Hour: ");
    scanf("%d", &start.hh);
    printf("Minutes: ");
    scanf("%d", &start.mm);
    printf("Seconds: ");
    scanf("%d", &start.ss);

    printf("\nStop Time:\n");
    printf("Hour: ");
    scanf("%d", &stop.hh);
    printf("Minutes: ");
    scanf("%d", &stop.mm);
    printf("Seconds: ");
    scanf("%d", &stop.ss);

    /*Function call*/
    add = addTime(start, stop);
    subtract = subtractTime(start, stop);

    /*Printing result*/
    printf("Added Times(hh:mm:ss)\n");
    printf("%d:%d:%d\n", add.hh, add.mm, add.ss);

    printf("\nSubtracted Times(hh:mm:ss)\n");
    printf("%d:%d:%d\n", subtract.hh, subtract.mm, subtract.ss);

    getch();
    return 0;
}
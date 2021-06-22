/*Write a program to read name and age of a person and display them:*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main()
{
    char name[40];
    int age;
    system("cls");
    printf("Enter your name:");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nYour name: %s", name);
    printf("\nYour age: %d", age);
    getch();
}
/*If a person age is greater than 65, he gets security allowance. Write a program to read the age of a person and display the apporiate message*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int age;
    system("cls");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nYour age is %d.",age);
    if(age >=65){
        printf("\nYou can get security allowance.");
    }
    else{
        printf("\nYou can't get security allowance.");
    }
    getch();
    return 0;
}
/*Write aprogram to read an integer from the user and check whether it is positive , zero or negative and display the apporiate message.*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){
    int number;
    system("cls");
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("\nNumber = %d", number);

    if (number == 0){
        printf("\nIt is zero.");
    }
    else if(number>0){
        printf("\nNumber is positive.");
    }
    else{
        printf("\nNumber is negative.");
    }
    getch();
    return 0;
}

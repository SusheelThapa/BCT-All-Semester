/*Write a program to read a character and check whether the character is upper or lower case*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    char character;
    system("cls");
    printf("Enter an alphabet: ");
    scanf("%c", &character);

    printf("Alphabet: %c", character);

    if((character >=97 && character <=122) || (character>=65 && character<=90)){
        if (character>=65 && character<=90){
            printf("\nIt is UPPER CASE");

        }
        else{
            printf("\nIt is lower case.");
        }
    }
    else{
        printf("\nERROR: You didn't input alphabet.");
    }
    getch();
    return 0;
}
/*
The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90. If the ASCII value of the character entered by the user lies in the range of 97 to 122 or from 65 to 90, that number is an alphabet.
*/
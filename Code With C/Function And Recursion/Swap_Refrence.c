/*Write a program by using a single return type function to swap the value of variable 
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Function that takes address of vaiable*/
void swap(int *a, int *b)
{
    //Logic One with extra variable

    int c;
    c = *a;
    *a = *b;
    *b = c;

    //Logic Two with no extra variable
    /**a = *a + *b;
    *a = *a - (*b = *a - *b);
    */
}

/*Main Function*/
int main()
{
    /*Variable Declaration and initializing*/
    int number_one = 8,
        number_two = 9;

    /*Information before function call*/
    printf("Before swap: a = %d b =%d\n", number_one, number_two);

    swap(&number_one, &number_two); /*Function call by refrence (address)*/

    /*Information after function call*/

    printf("After swap: a = %d b =%d\n", number_one, number_two);

    getch();
    return 0;
}
/*
To make pointer we just put '*' infront of variable name
    int *a = integer pointer
    float *b = float pointer
    char *c = character pointer

After iniitializing,
     
     We set value by using 
        a = adrress of some other variable
        or
        *a = variable name;
    Let a variable be int number =45 ;

        a = &number;
        or
        *a = number
    
    After setting the value of pointer,
        a = will have address

    And to extract value present in that address we use *a to get value present in that address 

In above function we have passed address of variable:
    so we just interchange the address of variable rather than value

NOT RELIATIC EXAMPLE

Suppose the Ram has Rs.5 and Shyam has Rs.10

To change the money they have

    ~Simply they can exchange the money  ---->Pass by value
    ~Or they can change their name(person who has money). So that Ram has 10 and Shyam has 5 ----> Pass by refrence (address)

*/
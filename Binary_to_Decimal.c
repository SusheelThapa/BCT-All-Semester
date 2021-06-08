/*Program to convert binary to decimal. It can converted the binary with decimal value(1010.01) to Decimal */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_LIMIT 50

/*Working of code:
    Note: indexing of string start from 0.

    let binary_number = 1010.01  (Input is taken in the form of string as user provide . in binary number )

    Now,
        position of dot = 5
        lenght of binary number = 7  (including the dot)
    
    For the binary before dot,

        1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 10

        To acheive this in the code we use for loop, slice the binary_number
            
            Power is (Postion -1 -1 -i) as in above the power of first element will be 3 and will decreased by 1.

                Each iteration of for would be
                    binary_number[i] * 2^(postion -1-1 -i) = 1 *2^3   
                    binary_number[i] * 2^(postion -1-1 -i) = 0 *2^2  
                    binary_number[i] * 2^(postion -1-1 -i) = 1 *2^1  
                    binary_number[i] * 2^(postion -1-1 -i) = 0 *2^0 


    For the binary after dot,

        0*2^(-1) + 1*2^(-2)  = 0.25 

        To acheive this in the code we use for loop, slice the binary_number  

            i+postion is done for becouse the position of 0(after dot) in 1010.01 is 5 and power is (-1) so we do -(1+i).
            As the value of i increase the next character will betaken and it power will also be decrease

                Each iteration of for loop
                    binary_number[i+position] * 2^(-(i+1)) =  0 * 2^(-1)  
                    binary_number[i+position] * 2^(-(i+1)) =  1 * 2^(-1)

                

    Value obtain in all iteration is stored in decimal_number

    Since we have taken the value in the form of string so a if statement is kept just to convert the slice 1 to interger 1.

    This whole is based on the postion of dot on the binary number. What if user input 111 or number without decimal.
        Since 111 is equal to 111.0
            For 111.0 position of dot is 4.
            Also setting the postion of dot to 4 for the 111

        To sum up,
            position of dot = lenght + 1   (For binary without .)

        Doing this will give error in code while calculating decimal after dot .
        So we check is position of dot - length of binary != negative then we excute the code to calculate after decimal.
*/

int main()
{
    // Declaration of required varaible
    char binary_number_user_input[MAX_LIMIT];
    float decimal_number = 0;
    int position_of_dot = 0;

    printf("Enter the binary number: ");
    scanf("%s", binary_number_user_input);

    //Find the position of dot in the provided binary number
    for (int i = 0; i < strlen(binary_number_user_input); i++)
    {
        if (binary_number_user_input[i] == '.')
        {
            position_of_dot = i + 1;
            break;
        }
    }
    // If the user input the number like 111 it this position of dot will remain 0. This will make a positon of dot as explained above
    if (position_of_dot == 0)
    {
        position_of_dot = strlen(binary_number_user_input) + 1;
    }

    //Using the position of dot and finding the value of binary before position of dot
    for (int i = 0; i < (position_of_dot - 1); i++)
    {
        if (binary_number_user_input[i] == '1')
        {
            decimal_number = decimal_number + 1 * pow(2, position_of_dot - 2 - i);
        }
        if (binary_number_user_input[i] == '0')
        {
            decimal_number = decimal_number + 0 * pow(2, position_of_dot - 2 - i);
        }
        //Check whether the number is 1 or 0  , since binary contain only 1 and 0
        if (binary_number_user_input[i] != '1' && binary_number_user_input[i] != '0')
        {
            printf("You didn't enter the binary number.1");
            printf("Press any key to exit.");
            getch();
            exit(0); //This will forcefully exit the code.
        }
    }

    //This will chck whether the value is with dot or not and proceed on True only
    int check = strlen(binary_number_user_input) - position_of_dot;
    //Using the position of dot and finding the value of binary after position of dot
    if (check >=0){

        for (int i = 0; i < (strlen(binary_number_user_input) - position_of_dot); i++)
        {

            if (binary_number_user_input[i + position_of_dot] == '1')
            {
                decimal_number = decimal_number + 1 * pow(2, -(1 + i));
            }
            if (binary_number_user_input[i + position_of_dot] == '0')
            {
                decimal_number = decimal_number + 0 * pow(2, -(1 + i));
            }
            //Check whether the number is 1 or 0  , since binary contain only 1 and 0
            if (binary_number_user_input[i + position_of_dot] != '1' && binary_number_user_input[i + position_of_dot] != '0')
            {
                printf("You didn't enter the binary number.2");
                printf("Press any key to exit.");
                getch();
                exit(0); //This will forcefully exit the code.
            }
        }
    }
    
    printf("The decimal value of binary number %s is %f.", binary_number_user_input, decimal_number);

    return 0;
}
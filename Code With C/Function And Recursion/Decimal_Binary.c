/*Program to convert the integer Decimal number to Binary number*/

/*Declaration of header files*/
#include <stdio.h> /*Main header files*/
#include<stdlib.h>/*We will use system() from this*/
#include <math.h>  /*We will use pow funtion from here.*/
#include <conio.h> /*We will use getch()*/



/*
Logic of Program:
    Here we created a funtion to convert the decimalto binary. The funtion accepts the decimal value and return the binary value of provided decimal.

    Convert 1710 into a binary number

        Solution:

        Given: Decimal Number = 17

        Divide by 2	 Result	 Remainder	Binary Value   Iteration(i=0;i++)
         17 ÷ 2	        8	    1	        1              1 * 10 ^0
         8 ÷ 2	        4	    0	        0              0 * 10 ^1
         4 ÷ 2	        2	    0	        0              0 * 10 ^2
         2 ÷ 2	        1	    0	        0              0 * 10 ^3
         1 ÷ 2	        0	    1	        1              1 * 10 ^4 

        Therefore, 17 = 10001 = 1*10 ^4 + 0*10^3 +  0*10^2 + 0*10^1 + 1*10^0

    We use the logic of Iterations inside the while statement.
    
*/
/*Function is created to convert the decimal to binary*/
long long decimalToBinary(long long int n)
{
    /*Declaration of needed variable*/
    long long int decimal, binary, rem, i;
    decimal = binary = i = (long long int)0; /*Setting the default value to zero*/

    /*Below while logic is explained above*/
    while (n != (long long int)0)
    {
        /*Here we are just typecasting by using (long long int). At last, Type casting is explained*/
        rem = n % (long long int)2;
        binary = binary + rem * (long long int)pow(10, i);
        i++;
        n = (n - rem) / (long long int)2;
    }
    return binary;
}
int main()
{
    /*Declaration of variable*/
    long long int decimal, binary; /*long long is just the size specifier which just increase the size of int(datatype) than the normal int.*/

    system("cls"); /*Clear the terminal window*/

    printf("Enter the decimal number: "); /*Information that help use to given the correct input*/
    scanf("%lld", &decimal);              /*%lld is used becouse the format specifier for long long int is %lld*/

    binary = decimalToBinary(decimal); /*Calling the function with a parameter and storing the return value in binary. THis call is call by value*/

    printf("The binary number of decimal %lld is %lld.", decimal, binary); /*A print statement to print the bianry value.*/
    getch(); /*Wait till a key is pressed*/
    return 0;
}
/*Typecasting:
    Type casting is a way to convert a variable from one data type to another data type.

    For example:
    If you want to store a 'long' value into a simple integer then you can type cast 'long' from 'int'. You can convert the values from one type to another explicitly using the cast operator as follows −

            (type_name) expression 
            (double)1  

            Now, its not 1 its 1.000000
        
*/
/*
Traditional:
    Generally, we convert the decimal to binary by dividing decimal number by 2 keeping the remainder aside when we reached at final remainder 1 we just take the remainder in reverse manner and we got the provided decimal binary number.

            Using this logic we can just create store the remainder by simple for loop
                
                while(n!=0){
                    remainder = n % 2;
                    decimal = decimal *10 +remainder;
                    n =n/2;
                }
                Now we reverse the number by below piece of code

                while(n!= 0){
                    rem = n % 10 ;
                    reverse = reverse * 10 + rem;
                    n = n / 10;
                }

                This will fail if the first remainder is zero.
                Since the first line of code given 11 value for 12 onreversing we get 11 but correct value is 1100 
                Here we see that it has neglected the intial zero;

            Use your knowledge over above logic and make it functionable.
*/
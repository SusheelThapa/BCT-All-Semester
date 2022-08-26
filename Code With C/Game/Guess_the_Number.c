#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    /*Variable Declaration*/
    int computer_generated_number, user_guess_number = -1, count_the_guess;

    srand(time(0));/*Sets seed for rand()*/
    computer_generated_number = rand() % 100; /*Create a number number between 0 to 99*/

    system("cls"); /*Clear the screen*/

    while (computer_generated_number != user_guess_number)
    {
        count_the_guess++;
        /*Take user input continously as it is inside while loop*/
        printf("Guess the number: ");
        scanf("%d", &user_guess_number);

        /*Analyze between user guess number and random number and print useful information */
        if (computer_generated_number == user_guess_number)
        {
            system("cls");
            printf("!!!Congratulations!!!\n");
            printf("\nYou have guessed the right number.\n");
            printf("No of guess number: %d", count_the_guess);
        }
        else if (computer_generated_number > user_guess_number)
        {
            printf("Higher Number Please\n");
        }
        else if (computer_generated_number < user_guess_number)
        {
            printf("Lower Number Please\n");
        }
        printf("\n");
    }

    getch();
    return 0;
}

/*
Logic of code:
~We first create a random number between 1 to 100
    For this we can use rand() from <stdlib.h> but it create between any number so to take last two digit we divide it by 100 and takes it  remainder

        rand() % 100 = number between 1 to 100


    but rand() will give the only one number we have to use different seed value to generate different number

        We use srand() to set the seed for random number

        From <time.h>,
            we use time(0) as seed value

            Generally time(0) gives us our current calander time. So each time we run program we will have different seed for random number

            Seed used to initialize a pseudorandom number generator to give random number

~We take use input

    scanf("%d",&user_guess_number);

~Then, we check whether the number is same or not 

    if greater prints lower number please
    if lower printd higher number please
    if same prints you guess the number

~But its hard to guess the number in one attempt so we keep on asking user to guess the number and check for each number whether it is correct or not

    We use while number as we donot know the when the loop terminates

        while(random_number!=user_guess_number)
        {
            //code
        }

        for this we initialize user_guess_number to negative value at random_number doesnot give negative number

~Also to know the number of guesses done by user we can keep count_the_guess++ at top of while to count the guesses done by user

    while(random_number1=user_guess_number)
        {
            count_the_guess++;
            //code
        }

    We will initialize count_the_guess = 0;

*/

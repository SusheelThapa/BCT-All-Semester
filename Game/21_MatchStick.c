/*
Questions:

    Write a C program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:

        – There are 21 matchsticks.
        – The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
        – After the person picks, the computer does its picking.
        – Whoever is forced to pick up the last matchstick loses the game.
*/

/*Imorting Header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    /*Variable declaration and initialization on some variable*/
    int user_pick, computer_pick = 0, total_match_stick = 21, winner;
    int remaining_matchstick = total_match_stick;

    // system("cls"); /*Clear the screen */

    printf("Total Match Stick: %d\n\n", total_match_stick); /*Prints the total match sticks*/

    /*Infinite While Loop*/
    while (1)
    {
        printf("Remaining Match Stick: %d\n", remaining_matchstick); /*Prints the remaining match sticks*/

        /*Talong user input*/
        printf("How many match stick you want to pick?(1, 2, 3 or 4)\n");
        printf("User: ");
        scanf("%d", &user_pick);

        /*Check whether input is valid or not if not found execute while loop*/
        while ((user_pick <= 0) || (user_pick > 4))

        {

            printf("\nERROR: REQUIRED 1, 2, 3 or 4\n"); /*A Error message if wrong input is provided*/

            /*Again ask for inoput from user */
            printf("User: ");
            scanf("%d", &user_pick);
        }

        remaining_matchstick = remaining_matchstick - user_pick; /*Updates the remaining match sticks*/

        /*If contition to check if the remaining number of match stick is zero or not*/
        if (remaining_matchstick == 0)
        {
            winner = 0; /*Winnner = 0 means user has pick the last match stick*/
            break;      /*Break the infinite while loop*/
        }

        printf("\n\nRemaining Match Stick: %d\n", remaining_matchstick); /*Display remaining match stick*/

        /*Ask input from user*/
        printf("How many match stick you want to pick?(1, 2, 3 or 4)\n");
        computer_pick = 5 - user_pick; /* Computer will choice a number*/
        printf("Computer: ");
        sleep(1);                        /*will freeze program for 1 milisecond so that it looks like our computer has choosen some number*/
        printf("%d\n\n", computer_pick); /*It will display the number*/

        remaining_matchstick = remaining_matchstick - computer_pick; /*Update remaining matchstick*/

        /*If contition to check if the remaining number of match stick is zero or not*/
        if (remaining_matchstick == 0)
        {
            winner = 1; /*Winnner = 1 means computer has pick the last match stick*/
            break;      /*Break the infinite while loop*/
        }
    }

    /*Prints the winner and loser as per the value of winner*/
    if (winner == 0)
    {
        printf("\n\nComputer has won.");
    }
    else
    {
        printf("\n\nUser has won.");
    }

    getch(); /*Waits will a key is pressed*/
    return 0;
}
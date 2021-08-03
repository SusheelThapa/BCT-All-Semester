/*Write a program to read price of two pens and five copies of same type and calculate the price after discounting 10%*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float pen_price, copies_price, total_price, discount;
    system("cls");
    printf("Enter the price of two pen: ");
    scanf("%f", &pen_price);
    printf("Enter the price of five copies: ");
    scanf("%f", &copies_price);
    discount = 0.1;
    total_price = (pen_price + copies_price) * (1 - discount);
    printf("The total price after discount is: Rs%.2f", total_price);
    getch();
}
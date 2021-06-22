/*Writea program to read a integer and find out product from 1 to n if n is even and sum from 0 to n if n is odd.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n,product =1,sum=0;
    system("cls");
    printf("Value of n: ");
    scanf("%u", &n);
    if(n%2==0){
            printf("Number is even\n");
        for (int i = 1; i <= n;i++)
        {
            product = product * i;
        }
            printf("Product is %d", product);
    }
    else{
            printf("Number is odd\n");
        for (int i = 0; i <= n;i++){
            sum = sum + i;
        }
            printf("The sum is %d", sum);
    }
    getch();
    return 0;
}
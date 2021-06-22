/*Write a program to read the threee side of triangle from the user adn calculate the area of the triangle. Be sure to check the condition if triangle is formed or not.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float side_one, side_two, side_three, semi_perimeter, area_square, area;

    // system("cls");

    printf("Side one: ");
    scanf("%f",&side_one);
    printf("Side two: ");
    scanf("%f",&side_two);
    printf("Side three: ");
    scanf("%f",&side_three);

    semi_perimeter = (side_one+ side_three+side_two)/2.0;
    area_square = semi_perimeter*(semi_perimeter-side_one)*(semi_perimeter-side_two)*(semi_perimeter-side_three);
    area = pow(area_square, 0.5);

    if((side_one+side_three)>side_two  && (side_two+side_three)>side_one && (side_one+side_two)>side_three)
    {
        printf("\nThe area of the triangle is %.2f.", area);
    }
    else
    {
        printf("\nError: Side given were not of triangle. Check your value once.");
    }

    getch();
    return 0;
}
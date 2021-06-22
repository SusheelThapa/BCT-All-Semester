/*Write a program to read two end points of a line, compute their mid point and display it.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    float mid_point_x, mid_point_y;

    system("cls");

    printf("X1: ");
    scanf("%d", &x1);
    printf("Y2: ");
    scanf("%d", &y1);
    printf("X2: ");
    scanf("%d", &x2);
    printf("Y2: ");
    scanf("%d", &y2);

    mid_point_x = (float)(x1 + x2) / 2;
    mid_point_y = (float)(y1 + y2) / 2;

    printf("The mid point of the line from (%d,%d) to (%d,%d) is (%.2f,%.2f).", x1, y1, x2, y2, mid_point_x, mid_point_y);

    printf("Press any key to exit...");

    getch();
    return 0;
}
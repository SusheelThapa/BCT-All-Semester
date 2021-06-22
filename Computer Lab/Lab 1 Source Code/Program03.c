/*Type the following program and run and see the output.*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int s, a, b;
    float p;
    system("cls");
    printf("Address of s is %x\n", &s);
    printf("Address of a is %x\n\n", &a);
    printf("Occupied number of bytes by variable s is %d\n\n\n", sizeof(s));
    printf("Size of a %d\n\n", sizeof(p));
    printf("Size of a %d\n\n\n\n\n\n", sizeof(1.5));
    printf("Size of floast data type is %d", sizeof(float));
    getch();
}

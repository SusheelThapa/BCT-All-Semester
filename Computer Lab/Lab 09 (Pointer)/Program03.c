/*
Run the following program, observe the output and comment on that
*/
#include <stdio.h>

void main()
{
    float marks[5];
    int i;
    
    printf("%d\n", marks);
    printf("Address of different array elements: \n");
    for (int i = 0; i < 5; i++)
    {
        "Use either one we will obtain same result";
        /*printf("Address of element %d: %u\n", i, &marks[i]);*/
        printf("Address of element %d: %u\n", i, (marks + i));
    }
}
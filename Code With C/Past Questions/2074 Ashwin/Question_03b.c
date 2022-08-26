/*
Pattern:
        N
      e e e           
    p p p p p
  a a a a a a a
L L L L L L L L L
*/

#include <stdio.h>

void main()
{
    char string[6] = "NepaL";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i + j >= 4 && j - i <= 4)
            {
                printf("%c ", string[i]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
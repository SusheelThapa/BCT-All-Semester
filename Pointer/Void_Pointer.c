#include <stdio.h>

int main()
{
    int a = 100;
    float b = 3.74;
    char c = 'A';

    void *ptr; /*Creating a void pointer*/
    
    ptr = &a;  /*Storing the address of a in ptr but the data type of ptr is void pointer*/

    printf("Value of ptr : %d\n", *((int *)ptr));
    "While derefrencing void pointer we need to typecast it. Here, (int *)ptr type cast it to integer pointer we are able to do %d while printing";

    /*Now the void pointer will point to b(float) address*/
    ptr = &b;

    /*While printing we just types cast ptr to float*/
    printf("Value of ptr : %f\n", *((float *)ptr));

    /*Now the void pointer will point to c(char) address*/
    ptr = &c;

    /*While printing we just types cast ptr to float*/
    printf("Value of ptr : %c\n", *((char *)ptr));

    "Note: Void pointer can point to different data type by single pointer so it is call general purpose pointer.";

    return 0;
}
#include <stdio.h>

int main()
{
    int array_one[5], array_two[5], array_add[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ELEMENT\n", i + 1);
        printf(" Array one: ");
        scanf("%d", &array_one);

        printf(" Array two: ");
        scanf("%d", &array_two);

        array_add[i] = array_one[i] + array_two[i];
    }

    /*Question ma print vaneko xaina so no need to do*/

    return 0;
}
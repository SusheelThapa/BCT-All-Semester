#include <stdio.h>

void main()
{
    int n, trianguler = 0;
    
    printf("Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        trianguler += i;
    }
    (n == trianguler) ? printf("The number is triangular") : printf("The number isn't triangular");
}

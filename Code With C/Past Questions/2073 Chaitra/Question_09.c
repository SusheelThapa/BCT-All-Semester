#include <stdio.h>

void main()
{
    FILE *INVENTORY;

    char items_name[100];
    int number, quantity;
    float price;
    INVENTORY = fopen("INVENTORY.txt", "w");

    for (int i = 0; i < 10000; i++)
    {
        fflush(stdin);
        printf("Items Name: ");
        gets(items_name);
        printf("Number: ");
        scanf("%d", &number);
        printf("Price: ");
        scanf("%f", &price);
        printf("Quantity: ");
        scanf("%d", &quantity);
        fprintf(INVENTORY, "%s %d %f %d\n", items_name, number, price, quantity);
    }

    INVENTORY = fopen("INVENTORY.txt", "r");

    for (int i = 0; i < 10000; i++)
    {
        fscanf(INVENTORY, "%s%d%f%d", items_name, number, price, quantity);
        printf("Items Name : %s ", items_name);
        printf("Number: %d ", number);
        printf("Price : %f ", price);
        printf("Quantity : %d \n", quantity);
    }
    fclose(INVENTORY);
}
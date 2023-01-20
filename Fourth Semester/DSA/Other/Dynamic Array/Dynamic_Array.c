#include <stdio.h>
#include <stdlib.h>

typedef struct Array
{
    int size;
    int used_size;
    int *base;
} Array;

void init(Array *array, int array_size)
{
    "This basically initialize our custom array. Takes 0(1)";

    array->size = array_size;
    array->used_size = 0;
    array->base = (int *)malloc(sizeof(int) * (array->size));
}

int length(Array *array)
{
    "Return the lenght of array. Takes 0(1).";

    return array->used_size;
}

void show(Array *array)
{
    "This is used to display our custom array. Takes 0(n).";

    for (int i = 0; i < array->used_size; i++)
    {
        printf("%d ", *(array->base + i));
    }
    printf("\n");
}

int indexOf(Array *array, int value)
{
    "Return the index where first occurance of value is found. Takes 0(n).";

    for (int i = 0; i < array->used_size; i++)
    {
        if (value == array->base[i])
        {
            return i;
        }
    }
    return -1;
}

int find(Array *array, int value)
{
    "Return true if value is present in the array and false if it isn't present";

    for (int i = 0; i < array->used_size; i++)
    {
        if (value == array->base[i])
        {
            return 1;
        }
    }
    return 0;
}

void increaseSizeOfArray(Array *array)
{
    "When array size is not enough it is used to increase the size of array by creating bigger array and copying the contents of previous array";
    "Takes 0(n)";

    Array *increased = (Array *)malloc(sizeof(Array));
    Array *temp = array;

    init(increased, array->size * 2);

    for (int i = 0; i < array->used_size; i++)
    {
        increased->base[i] = array->base[i];
    }

    increased->used_size = array->used_size;

    array->base = increased->base;

    free(temp);
}

void replace(Array *array, int old_value, int new_value)
{
    "Replace element of array with new value. Takes 0(n)";

    for (int i = 0; i < array->size; i++)
    {
        if (array->base[i] == old_value)
        {
            array->base[i] = new_value;
        }
    }
}

void replaceAt(Array *array, int index, int value)
{
    "Replace value at the given index . Takes 0(1).";

    array->base[index] = value;
}

void add(Array *array, int value)
{
    "This adds element at the last of the array. Takes 0(1)";

    if (array->used_size == array->size)
    {
        increaseSizeOfArray(array);
    }

    *(array->base + array->used_size) = value;
    (array->used_size)++;
}

void removeAt(Array *array, int index)
{
    "This is used to remove element at a particular index. Takes 0(n)";

    if (array->used_size <= index)
    {
        printf("INDEX ERROR: Index out of bounds\n");
    }
    else
    {
        for (int i = index; i < array->used_size; i++)
        {
            *(array->base + i) = *(array->base + i + 1);
        }

        (array->used_size)--;
    }
}

void removeElement(Array *array, int value)
{
    "This is used to remove first occured value from array. Takes 0(n2)";

    for (int i = 0; i < array->used_size; i++)
    {
        if (value == array->base[i])
        {
            removeAt(array, i);
            return;
        }
    }
}

void insert(Array *array, int value, int index)
{
    "This is used to insert element at a particular index. Takes 0(n)";

    if (array->used_size == array->size)
    {
        increaseSizeOfArray(array);
    }

    if (array->size <= index)
    {
        printf("INDEX ERROR: Index out of bounds\n");
    }
    else if (array->used_size <= index)
    {
        printf("GAP ERROR: After inserting there is gap between last and second last element.\n");
        return;
    }
    else
    {
        for (int i = array->used_size; i > index; i--)
        {
            *(array->base + i) = *(array->base + i - 1);
        }

        *(array->base + index) = value;

        (array->used_size)++;
    }
}

int main()
{
    Array one;

    init(&one, 2);

    add(&one, 4);
    add(&one, 5);

    insert(&one, 9, 0);

    insert(&one, 100, 1);

    removeAt(&one, 0);

    removeAt(&one, 2);

    removeElement(&one, 100);

    add(&one, 4);
    add(&one, 5);
    add(&one, 6);

    printf("The length of array is %d\n", length(&one));

    add(&one, 100);

    printf("The length of array is %d\n", length(&one));

    show(&one);

    return 0;
}

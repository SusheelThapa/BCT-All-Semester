#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int element;
    struct Node *address;
} Node;

typedef struct LinkedList
{
    Node *head;
    int size;
} LinkedList;

Node *createNode(int value)
{
    "Create a node to be attached in LinkedList. Take 0(1)";

    Node *node = (Node *)malloc(sizeof(Node));

    node->element = value;
    node->address = NULL;

    return node;
}

void init(LinkedList *list)
{
    "Initialized the Linked List. Takes 0(1)";

    list->size = 0;
    list->head = NULL;
}

int size(LinkedList *list)
{
    "Return the size of LinkedList. Takes 0(1)";

    return list->size;
}

bool isEmpty(LinkedList *list)
{
    "Check it the list is empty or not. Takes 0(1)";

    return list->head == NULL && list->size == 0;
}

int indexOf(LinkedList *list, int value)
{
    "Return the index of first occurance of the value takes 0(n)";

    Node *find = list->head;
    for (int i = 0; i < list->size; i++)
    {
        if (find->element == value)
        {
            return i;
        }
        find = find->address;
    }
}

int find(LinkedList *list, int value)
{
    "Return true if value is present in the LinkedList and false if it isn't present. Takes 0(n)";

    Node *find = list->head;
    for (int i = 0; i < list->size; i++)
    {
        if (find->element == value)
        {
            return 1;
        }
        find = find->address;
    }
    return 0;
}

void add(LinkedList *list, int value)
{
    "Add element at the end of the LinkedList. Takes 0(1)";

    Node *node = createNode(value);

    if (isEmpty(list))
    {
        list->head = node;
        list->size = 1;
        return;
    }
    else
    {
        Node *temp_node = list->head;

        while (temp_node->address != NULL)
        {
            temp_node = temp_node->address;
        }
        temp_node->address = node;

        list->size++;
    }
}

void show(LinkedList list)
{
    "Display Linked List. Takes 0(n)";

    Node *node = list.head;

    while (1)
    {
        printf("%d ", node->element);
        node = node->address;
        if (node == NULL)
        {
            break;
        }
        printf("--> ");
    }
    printf("\n");
}

void insert(LinkedList *list, int value, int index)
{
    "Insert value at a particular index. Takes 0(1) at first index and other index 0(n)";

    Node *link = (Node *)malloc(sizeof(Node));

    if (index == 0)
    {
        link->element = value;
        link->address = list->head;
        list->head = link;
    }
    else if (index == list->size - 1)
    {
        add(list, value);
        return;
    }
    else
    {
        Node *ref_link = list->head;

        for (int i = 1; i < index; i++)
        {
            ref_link = ref_link->address;
        }

        link->element = value;

        link->address = ref_link->address;

        ref_link->address = link;
    }

    (list->size)++;
}

void removeAt(LinkedList *list, int index)
{
    "Remove node at a particular index. Takes 0(1) at first index and other 0(n).";

    Node *remove;
    Node *node = list->head;

    if (index == 0)
    {
        remove = list->head;
        list->head = node->address;
        free(remove);
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            node = node->address;
        }
        remove = node->address;
        node->address = remove->address;

        free(remove);
    }
    list->size--;
}

void reset(LinkedList *list)
{
    "Reset all the value of linked list. Takes 0(n).";

    Node *node = list->head;

    while (node != NULL)
    {
        list->head = node->address;
        free(node);
        node = list->head;
    }

    list->head = NULL;
    list->size = 0;
}
int main()
{

    LinkedList list;

    init(&list);

    int one;
    int two;
    int three;
    int four;
    int five;
    int six;

    one = 1;
    two = 2;
    three = 3;
    four = 4;
    five = 5;
    six = 6;

    add(&list, one);
    add(&list, five);
    add(&list, six);
    add(&list, two);
    add(&list, four);
    add(&list, three);

    show(list);

    insert(&list, 10, 6);
    insert(&list, 10, 6);

    show(list);

    removeAt(&list, 0);

    removeAt(&list, 2);

    show(list);

    printf("The index of 10 is %d\n", indexOf(&list, 10));

    printf("Size of LinkedList is %d\n", size(&list));

    printf("Status of 10 in Linked List is : %d\n", find(&list, 100));

    show(list);

    reset(&list);

    printf("Status of list : %d", isEmpty(&list));

    return 0;
}
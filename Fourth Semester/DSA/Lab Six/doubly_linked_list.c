#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    struct Node *previous_node;
    int element;
    struct Node *next_node;
} Node;

Node *createNode(int value)
{
    "Create a node and initialize it. Takes 0(1).";

    Node *node = (Node *)malloc(sizeof(Node));
    node->previous_node = NULL;
    node->element = value;
    node->next_node = NULL;
    return node;
}

typedef struct DoublyLinkedList
{
    int size;
    Node *head;
} DoublyLinkedList;

void init(DoublyLinkedList *list)
{
    list->size = 0;
    list->head = NULL;
}

bool isEmpty(DoublyLinkedList *list)
{
    "Check if Doubly Linked List is empty or not. Takes 0(1).";

    return list->head == NULL && list->size == 0;
}

int length(DoublyLinkedList list)
{
    "Return the length of Doubly Linked List. Takes 0(1)";

    return list.size;
}

void add(DoublyLinkedList *list, int value)
{
    "Add node at the last of the Doubly Linked List. Takes 0(n)";

    Node *link = createNode(value);

    if (isEmpty(list))
    {
        list->head = link;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next_node != NULL)
        {
            temp = temp->next_node;
        }
        link->previous_node = temp;
        temp->next_node = link;
    }
    list->size++;
    return;
}

void insert(DoublyLinkedList *list, int value, int index)
{
    "Insert the node at a particular index in Doubly Linked List. Takes 0(1) at first and 0(n) for other";

    Node *link = createNode(value);

    if (index > list->size)
    {
        printf("Index isn't valid.\n");
        return;
    }
    if (index == 0)
    {
        link->next_node = list->head;
        list->head->previous_node = link;
        list->head = link;
        list->size++;
    }
    else if (index == list->size)
    {
        add(list, value);
        return;
    }
    else
    {
        Node *temp = list->head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next_node;
        }
        link->previous_node = temp->previous_node;
        link->next_node = temp;
        temp->previous_node->next_node = link;
        temp->previous_node = link;
        list->size++;
    }
    return;
}

void show(DoublyLinkedList list)
{
    "Display the Doubly linked List, Takes 0(n).";
    Node *temp;

    temp = list.head;

    printf("NULL <-> ");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->element);
        temp = temp->next_node;
    }
    printf("NULL\n");
}

void removeAt(DoublyLinkedList *list, int index)
{
    "Removes node at the given index. Takes 0(1) at first and 0(n) for other.";
    Node *remove = list->head;

    if (index > list->size)
    {
        printf("Provided index doesn't exist.\n");
        return;
    }

    if (index == 0)
    {
        list->head = remove->next_node;
        list->head->previous_node = NULL;
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            remove = remove->next_node;
        }
        remove->previous_node->next_node = remove->next_node;
        remove->next_node->previous_node = remove->previous_node;
    }
    free(remove);
    list->size--;
}

int indexOf(DoublyLinkedList list, int value)
{
    "Return the index of given value in Doubly Linked List. Takes 0(n).";

    for (int i = 0; list.head != NULL; i++)
    {
        if (list.head->element == value)
        {
            return i;
        }
        list.head = list.head->next_node;
    }
    return -1;
}

void reset(DoublyLinkedList *list)
{
    "Reset the Doubly Linked List. Takes 0(n)";

    Node *temp = list->head;
    while (temp != NULL)
    {
        list->head = temp->next_node;
        free(temp);
        temp = list->head;
    }

    free(temp);
    list->head = NULL;
    list->size = 0;
}

int main()
{
    DoublyLinkedList *List_one = (DoublyLinkedList *)malloc(sizeof(DoublyLinkedList));

    init(List_one);

    add(List_one, 10);
    add(List_one, 20);
    add(List_one, 30);
    add(List_one, 40);

    insert(List_one, 100, 2);

    removeAt(List_one, 0);

    show(*List_one);

    printf("The index of 100 is %d\n", indexOf(*List_one, 100));

    reset(List_one);

    printf("Status of Dobuly Linked List is %d", isEmpty(List_one));

    return 0;
}
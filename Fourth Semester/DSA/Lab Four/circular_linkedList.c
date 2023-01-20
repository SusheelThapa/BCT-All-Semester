#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int element;
    struct Node *address;
} Node;

Node *createNode(int value)
{
    "Create a node. Takes 0(1)";

    Node *node = (Node *)malloc(sizeof(Node));

    node->element = value;
    node->address = NULL;

    return node;
}

typedef struct CircularLinkedList
{
    Node *head;
    int size;
} CircularLinkedList;

void init(CircularLinkedList *list)
{
    "Initialize the Circular Linked list. Takes 0(1)";

    list->size = 0;
    list->head = NULL;
}

int isEmpty(CircularLinkedList list)
{
    return list.head == NULL && list.size == 0;
}

void show(CircularLinkedList list)
{
    "Display the circular linked list. Takes 0(n)";

    Node *node = list.head;

    if (isEmpty(list))
    {
        printf("List is empty.\n");
        return;
    }
    do
    {
        printf("%d --> ", node->element);
        node = node->address;
    } while (node != list.head);

    puts("\n");
}

void add(CircularLinkedList *list, int value)
{
    "Add node to the circular linked list. Takes 0(1) at first position and 0(n) at other.";

    Node *node = createNode(value);

    if (list->size == 0)
    {
        list->head = node;
        list->head->address = list->head;
    }
    else
    {
        Node *temp = list->head;

        for (int i = 1; i < list->size; i++)
        {
            temp = temp->address;
        }
        node->address = temp->address;
        temp->address = node;
    }
    (list->size)++;
}

void insert(CircularLinkedList *list, int value, int index)
{
    "Insert the node at a particular index. Takes 0(n).";

    Node *node = createNode(value);
    Node *temp = list->head;

    if (index == 0)
    {
        node->address = list->head->address;
        for (int i = 0; i < list->size; i++)
        {
            temp = temp->address;
        }
        temp->address = node;

        list->head = node;
    }
    else if (index + 1 == list->size)
    {
        for (int i = 0; i < list->size; i++)
        {
            temp = temp->address;
        }
        node->address = temp->address;
        temp->address = node;
    }
    else
    {

        for (int i = 1; i < index; i++)
        {
            temp = temp->address;
        }

        node->address = temp->address;

        temp->address = node;
    }

    (list->size)++;
}

void delete (CircularLinkedList *list, int index)
{
    "Delete node at a particular index. Takes 0(n).";

    if (index + 1 <= list->size)
    {
        Node *temp = list->head;
        Node *delete = temp;

        if (index == 0)
        {
            list->head = temp->address;

            for (int i = 0; i < list->size; i++)
            {
                temp = temp->address;
            }
            temp->address = list->head;
            free(delete);
        }
        else if (index + 1 == list->size)
        {
            for (int i = 2; i < list->size; i++)
            {
                temp = temp->address;
            }

            delete = temp->address;
            temp->address = list->head;

            free(delete);
        }
        else
        {
            for (int i = 1; i < index; i++)
            {
                temp = temp->address;
            }
            delete = temp->address;

            temp->address = delete->address;

            free(delete);
        }
        (list->size)--;
    }
}

int size(CircularLinkedList list)
{
    "Return the size of the list. Takes 0(1).";

    return list.size;
}

void reset(CircularLinkedList *list)
{
    "Reset our Circular Linked List. Takes 0(n)";
    
    Node *remove = list->head;
    for (int i = 0; i < list->size; i++)
    {
        list->head = list->head->address;
        free(remove);
        remove = list->head;
    }

    list->head = NULL;
    (*list).size = 0;
}

int main()
{
    CircularLinkedList list;

    int six;
    int one;
    int two;
    int three;
    int four;
    int five, seven;

    one = 1;
    two = 2;
    three = 3;
    four = 4;
    five = 5;
    six = 6;
    seven = 7;

    init(&list);

    add(&list, one);

    add(&list, two);

    add(&list, three);

    add(&list, four);

    add(&list, five);

    add(&list, six);

    add(&list, seven);

    add(&list, one);

    printf("Initial Circular Linked List\n");

    show(list);

    printf("Circular Linked list after inserting 100 in index 5\n");

    insert(&list, 100, 5);

    show(list);

    printf("Circlar LinkedList after deleting element at index 5\n");

    delete (&list, 5);

    show(list);

    printf("\nThe size of circular linked list is %d\n", size(list));

    printf("Resetting the list .......\n");

    reset(&list);

    show(list);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *left_node;
    struct Node *right_node;
    int data;
} Node;

Node *createNode(int value)
{
    "Create a node and set the data to value and return node. Takes 0(1)";

    Node *node = (Node *)malloc(sizeof(Node));

    node->data = value;
    node->left_node = NULL;
    node->right_node = NULL;
}

typedef struct Tree
{
    Node *Root;
} Tree;

void linkNode(Node *parent, Node *child_one, Node *child_two)
{
    "Links the parent node with its child node. Takes 0(1)";

    parent->left_node = child_one;
    parent->right_node = child_two;
}

int main()
{
    Tree *Banana;

    Banana->Root = createNode(10);

    Node *banana_parent_left = createNode(1);
    Node *banana_parent_right = createNode(2);

    linkNode(Banana->Root, banana_parent_left, banana_parent_right); // Linking Root Node with parent one and parent two

    Node *banana_child_one_left = createNode(3);
    Node *banana_child_one_right = createNode(4);

    linkNode(banana_parent_left, banana_child_one_left, banana_child_one_right); // Linking parent one with its two child

    Node *banana_child_two_left = createNode(5);
    Node *banana_child_two_right = createNode(6);

    linkNode(banana_parent_right, banana_child_two_left, banana_child_two_right); // Linking parent two with its two child

    return 0;
}
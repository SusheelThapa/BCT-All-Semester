#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    struct Node *left_node;
    struct Node *right_node;
    int data;
} Node;

Node *createNode(int value)
{
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
    parent->left_node = child_one;
    parent->right_node = child_two;
}

void preorderTraversalRecursive(Node *RootNode)
{
    if (RootNode == NULL)
    {
        return;
    }
    else
    {
        Node *temp;

        temp = RootNode;

        printf("%d ", temp->data);
        preorderTraversalRecursive(temp->left_node);
        preorderTraversalRecursive(temp->right_node);
    }
}

void inorderTraversalRecursive(Node *RootNode)
{
    if (RootNode == NULL)
    {
        return;
    }
    else
    {
        Node *temp;

        temp = RootNode;

        inorderTraversalRecursive(temp->left_node);
        printf("%d ", temp->data);
        inorderTraversalRecursive(temp->right_node);
    }
}

void postorderTraversalRecursive(Node *RootNode)
{
    if (RootNode == NULL)
    {
        return;
    }
    else
    {
        Node *temp;

        temp = RootNode;

        postorderTraversalRecursive(temp->left_node);
        postorderTraversalRecursive(temp->right_node);
        printf("%d ", temp->data);
    }
}

int main()
{
    Tree *Banana;

    Banana->Root = createNode(10);

    Node *banana_parent_left = createNode(1);
    Node *banana_parent_right = createNode(2);

    linkNode(Banana->Root, banana_parent_left, banana_parent_right);

    Node *banana_child_one_left = createNode(3);
    Node *banana_child_one_right = createNode(4);

    linkNode(banana_parent_left, banana_child_one_left, banana_child_one_right);

    Node *banana_child_one_one_left = createNode(20);
    Node *banana_child_one_one_right = createNode(40);

    linkNode(banana_child_one_left, banana_child_one_one_left, banana_child_one_one_right);

    Node *banana_child_one_two_left = createNode(30);
    Node *banana_child_one_two_right = createNode(50);

    linkNode(banana_child_one_right, banana_child_one_two_left, banana_child_one_two_right);

    Node *banana_child_two_left = createNode(5);
    Node *banana_child_two_right = createNode(6);

    linkNode(banana_parent_right, banana_child_two_left, banana_child_two_right);

    Node *banana_child_two_one_left = createNode(50);
    Node *banana_child_two_one_right = createNode(70);

    linkNode(banana_child_two_left, banana_child_two_one_left, banana_child_two_one_right);

    Node *banana_child_two_two_left = createNode(60);
    Node *banana_child_two_two_right = createNode(70);

    linkNode(banana_child_two_right, banana_child_two_two_left, banana_child_two_two_right);

    printf("\nPreorder Traversal: ");
    preorderTraversalRecursive(Banana->Root);

    printf("\nInorder Traversal: ");
    inorderTraversalRecursive(Banana->Root);

    printf("\nPostorder Traversal: ");
    postorderTraversalRecursive(Banana->Root);

    return 0;
}
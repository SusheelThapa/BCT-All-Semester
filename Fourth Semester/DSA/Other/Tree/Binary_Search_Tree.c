#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool isBinarySearchTree(Node RootNode)
{
    if (!(&RootNode == NULL))
    {
        if (RootNode.left_node != NULL && RootNode.right_node != NULL)
        {
            if (RootNode.left_node->data < RootNode.data && RootNode.data < RootNode.right_node->data)
            {
                return ((isBinarySearchTree(*RootNode.left_node)) && isBinarySearchTree((*RootNode.right_node)));
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (RootNode.left_node == NULL && RootNode.right_node == NULL)
            {
                return true;
            }
            else if (RootNode.left_node == NULL)
            {
                if (RootNode.data < RootNode.right_node->data)
                {
                    return isBinarySearchTree(*RootNode.right_node);
                }
                else
                {
                    return false;
                }
            }

            else if (RootNode.right_node == NULL)
            {
                if (RootNode.left_node->data < RootNode.data)
                {
                    return isBinarySearchTree(*RootNode.left_node);
                }
                else
                {
                    return false;
                }
            }
        }
    }

    else
    {
        return true;
    }
}

Node *inOrderPredecessor(Node *node)
{
    node = node->left_node;
    while (node->right_node != NULL)
    {
        node = node->right_node;
    }

    return node;
}

void insertBST(Node *RootNode, int key)
{
    while (RootNode != NULL)
    {
        if (RootNode->data == key)
        {
            printf("Key is already present.");
        }
        else if (RootNode->data > key)
        {
            if (RootNode->left_node == NULL)
            {
                Node *link = createNode(key);

                linkNode(RootNode, link, NULL);

                return;
            }
            else
            {
                RootNode = RootNode->left_node;
            }
        }
        else if (RootNode->data < key)
        {
            if (RootNode->right_node == NULL)
            {
                Node *link = createNode(key);
                linkNode(RootNode, NULL, link);

                return;
            }
            else
            {
                RootNode = RootNode->right_node;
            }
        }
    }

    if (RootNode == NULL)
    {
        printf("Root Node is not initialize");
    }
}

Node *delete (Node *RootNode, int key)
{
    Node *iPre;
    if (RootNode == NULL)
    {
        return NULL;
    }
    else
    {
        if (RootNode->left_node == NULL && RootNode->right_node == NULL)
        {
            free(RootNode);
            return NULL;
        }
        else
        {
            if (RootNode->data > key)
            {
                RootNode->left_node = delete (RootNode->left_node, key);
            }
            else if (RootNode->data < key)
            {
                RootNode->right_node = delete (RootNode->right_node, key);
            }
            else
            {
                iPre = inOrderPredecessor(RootNode);
                RootNode->data = iPre->data;
                RootNode->left_node = delete (RootNode->left_node, iPre->data);
            }
        }
        return RootNode;
    }
}

void inorderTraversal(Node *RootNode)
{
    if (RootNode == NULL)
    {
        return;
    }
    else
    {
        Node *temp;

        temp = RootNode;

        inorderTraversal(temp->left_node);
        printf("%d ", temp->data);
        inorderTraversal(temp->right_node);
    }
}

bool searchBSTIterative(Node *RootNode, int key)
{
    while (RootNode != NULL)
    {
        if (RootNode->data == key)
        {
            return true;
        }
        else if (RootNode->data > key)
        {
            RootNode = RootNode->left_node;
        }
        else if (RootNode->data < key)
        {
            RootNode = RootNode->right_node;
        }
    }

    return NULL;
}

bool searchBSTRecursive(Node *RootNode, int key)
{
    if (RootNode != NULL)
    {
        if (RootNode->data == key)
        {
            return true;
        }
        else if (RootNode->data < key)
        {
            return searchBSTRecursive(RootNode->right_node, key);
        }
        else
        {
            return searchBSTRecursive(RootNode->left_node, key);
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    Tree Apple;

    Apple.Root = createNode(100);

    insertBST(Apple.Root, 13);
    insertBST(Apple.Root, 14);
    insertBST(Apple.Root, 15);
    insertBST(Apple.Root, 16);
    insertBST(Apple.Root, 17);

    delete (Apple.Root, 100);
    inorderTraversal(Apple.Root);

    printf("\nStatus of 10 in the Tree is %d\n", searchBSTIterative(Apple.Root, 10));
    printf("\nStatus of 13 in the Tree is %d\n", searchBSTIterative(Apple.Root, 13));

    return 0;
}
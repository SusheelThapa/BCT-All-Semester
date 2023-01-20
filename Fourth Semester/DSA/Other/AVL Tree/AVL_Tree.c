#include <stdio.h>
#include <stdlib.h>

// Declaration of Node of AVL Tree
typedef struct AVLTreeNode
{
    struct AVLTreeNode *left_subtree;
    int key;
    struct AVLTreeNode *right_subtree;
    int height;
} AVLTreeNode;

int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int getHeight(AVLTreeNode *root)
{
    "Return the height of the node. Takes 0(1).";
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}
AVLTreeNode *createNode(int key)
{
    "This is used to create a node and set its value with key and return it.";

    AVLTreeNode *node = (AVLTreeNode *)malloc(sizeof(AVLTreeNode));

    node->left_subtree = NULL;
    node->right_subtree = NULL;
    node->key = key;
    node->height = 1;

    return node;
}

int getBalanceFactor(AVLTreeNode *n)
{
    "This function is used to get the balance factor of the node.";

    if (n == NULL)
        return 0;
    return getHeight(n->left_subtree) - getHeight(n->right_subtree);
}

AVLTreeNode *rightRotate(AVLTreeNode *root)
{
    AVLTreeNode *new_root = root->left_subtree;
    root->left_subtree = new_root->right_subtree;
    new_root->right_subtree = root;

    root->height = findMax(getHeight(root->left_subtree), getHeight(root->right_subtree)) + 1;
    new_root->height = findMax(getHeight(new_root->left_subtree), getHeight(new_root->right_subtree)) + 1;

    return new_root;
}
AVLTreeNode *leftRotate(AVLTreeNode *root)
{
    AVLTreeNode *new_root = root->right_subtree;
    root->right_subtree = new_root->left_subtree;
    new_root->left_subtree = root;

    root->height = findMax(getHeight(root->left_subtree), getHeight(root->right_subtree)) + 1;
    new_root->height = findMax(getHeight(new_root->left_subtree), getHeight(new_root->right_subtree)) + 1;

    return new_root;
}
AVLTreeNode *insert(AVLTreeNode *node, int key)
{
    if (node == NULL)
    {
        return (createNode(key));
    }

    if (key < node->key)

        node->left_subtree = insert(node->left_subtree, key);

    else if (key > node->key)

        node->right_subtree = insert(node->right_subtree, key);
    // return node;

    node->height = 1 + findMax(getHeight(node->left_subtree), getHeight(node->right_subtree));
    int bf = getBalanceFactor(node);

    // Left Left Case
    if (bf > 1 && key < node->left_subtree->key)
    {
        return rightRotate(node);
    }
    // Right Right Case
    if (bf < -1 && key > node->right_subtree->key)
    {
        return leftRotate(node);
    }
    // Left Right Case
    if (bf > 1 && key > node->left_subtree->key)
    {
        node->left_subtree = leftRotate(node->left_subtree);
        return rightRotate(node);
    }

    // Right Left Case
    if (bf < -1 && key < node->right_subtree->key)
    {
        node->right_subtree = rightRotate(node->right_subtree);
        return leftRotate(node);
    }

    return node;
}
void preorderTraversalRecursive(AVLTreeNode *RootNode)
{
    if (RootNode == NULL)
    {
        return;
    }
    else
    {
        AVLTreeNode *temp;

        temp = RootNode;

        printf("%d ", temp->key);
        preorderTraversalRecursive(temp->left_subtree);
        preorderTraversalRecursive(temp->right_subtree);
    }
}

int main()
{
    AVLTreeNode *Root = NULL;

    Root = insert(Root, 1);
    Root = insert(Root, 2);
    Root = insert(Root, 4);
    Root = insert(Root, 5);
    Root = insert(Root, 6);
    Root = insert(Root, 3);
    printf("%d\n", Root->key);
    preorderTraversalRecursive(Root);
    return 0;
}
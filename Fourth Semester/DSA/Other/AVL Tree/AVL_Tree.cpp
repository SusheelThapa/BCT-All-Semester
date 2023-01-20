#include <iostream>
using namespace std;

class AVLTreeNode
{
private:
    AVLTreeNode *left_subtree;
    int data;
    AVLTreeNode *right_subtree;
    int height;

public:
    AVLTreeNode(int key)
    {
        data = key;
        height = 1;
        left_subtree = nullptr;
        right_subtree = nullptr;
    }
    // This function are used to set the data of the AVLTree Node
    void setLeftSubTree(AVLTreeNode *left_subtree)
    {
        this->left_subtree = left_subtree;
    }
    void setRightSubTree(AVLTreeNode *right_subtree)
    {
        this->right_subtree = right_subtree;
    }
    void setBothSubTree(AVLTreeNode *left_subtree, AVLTreeNode *right_subtree)
    {
        this->left_subtree = left_subtree;
        this->right_subtree = right_subtree;
    }
    void setData(int value)
    {
        this->data = value;
    }
    void setHeight(int value)
    {
        this->height = value;
    }

    // This function is used to get the data of the AVL Tree node
    AVLTreeNode *getLeftSubTree()
    {
        return this->left_subtree;
    }
    AVLTreeNode *getRightSubTree()
    {
        return this->right_subtree;
    }
    int getAVLNodeData()
    {
        return this->data;
    }
    int getAVLNodeHeight()
    {
        return this->height;
    }
};

/*
    Only implement the node of the AVL tree

    Implementation of AVL tree is remaining
*/

int main()
{

    return 0;
}
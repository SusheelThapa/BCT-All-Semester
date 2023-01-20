#include <iostream>
using namespace std;

class Tree
{
private:
    typedef struct Node
    {
        struct Node *left_node;
        int data;
        struct Node *right_node;
    } Node;

    Node *createNode(int value)
    {
        Node *node = new Node();
        node->data = value;
        node->left_node = nullptr;
        node->right_node = nullptr;

        return node;
    }

public:
    Node *Root;

    Tree(int root_node_value)
    {
        Root = createNode(root_node_value);
    }

    void linkChildToParent(Node *parentNode, int left_node_value = INT_MIN, int right_node_value = INT_MIN)
    {
        Node *left, *right;
        if (left_node_value != INT_MIN)
        {
            left->data = left_node_value;
            parentNode->left_node = left;
        }
        if (right_node_value != INT_MIN)
        {
            right->data = right_node_value;
            parentNode->right_node = right;
        }
    }
};

int main()
{
    Tree Banana(10);

    Banana.linkChildToParent(Banana.Root, 20, 30);

    Banana.linkChildToParent(Banana.Root->left_node, 60, 70);
    Banana.linkChildToParent(Banana.Root->right_node, 60, 70);

    return 0;
}
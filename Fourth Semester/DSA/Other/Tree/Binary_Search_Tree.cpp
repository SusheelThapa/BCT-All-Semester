#include <iostream>
using namespace std;

class BSTNode
{
private:
    BSTNode *left_bst_node;
    int data;
    BSTNode *right_bst_node;

public:
    BSTNode()
    {
        left_bst_node = nullptr;
        right_bst_node = nullptr;
    };
    BSTNode(int node_data)
    {
        this->data = node_data;
        this->left_bst_node = nullptr;
        this->right_bst_node = nullptr;
    }
    void setBSTNodeData(int node_data) { this->data = node_data; }
    void setBSTLeftNode(BSTNode *left_node) { left_bst_node = left_node; };
    void setBSTRightNode(BSTNode *right_node) { right_bst_node = right_node; }

    int getBSTNodeData() { return this->data; }
    BSTNode *getLeftBSTNode() { return left_bst_node; }
    BSTNode *getRightBSTNode() { return right_bst_node; }
};
class BST
{
private:
    BSTNode *Root = new BSTNode();

protected:
    void inOrderTraversal(BSTNode *Root)
    {
        if (Root == nullptr)
        {
            return;
        }
        inOrderTraversal(Root->getLeftBSTNode());
        cout << Root->getBSTNodeData() << " ";
        inOrderTraversal(Root->getRightBSTNode());
    }

    BSTNode *search(int value)
    {
        BSTNode *temp = Root;

        if (temp == nullptr)
        {
            return temp;
        }
        while (true)
        {
            if (temp->getBSTNodeData() == value)
            {
                break;
            }
            else if (temp->getBSTNodeData() > value)
            {
                temp = temp->getLeftBSTNode();
            }
            else if (temp->getBSTNodeData() < value)
            {
                temp = temp->getRightBSTNode();
            }
        }
        temp->setBSTNodeData(INT_MIN);

        return temp;
    }

public:
    BST(){};
    BST(int root_data) { Root->setBSTNodeData(root_data); }

    void setRootNodeData(int root_data) { Root->setBSTNodeData(root_data); }
    BSTNode *getRootNode() { return Root; }

    // bool isBST() {}
    int BSTMaxValue()
    {
        if (Root == nullptr)
        {
            cout << "Tree is empty" << endl;
            return INT_MIN;
        }

        BSTNode *temp = Root;

        while (true)
        {
            if (temp->getRightBSTNode() == nullptr)
            {
                return temp->getBSTNodeData();
            }
            temp = temp->getRightBSTNode();
        }
    }
    int BSTMaxValue(BSTNode *node_part_of_Tree)
    {
        if (node_part_of_Tree == nullptr)
        {
            cout << "Node is Leaf Node" << endl;
            return INT_MIN;
        }

        BSTNode *temp = node_part_of_Tree;

        while (true)
        {
            if (temp->getRightBSTNode() == nullptr)
            {
                return temp->getBSTNodeData();
            }
            temp = temp->getRightBSTNode();
        }
    }
    int BSTMinValue()
    {
        if (Root == nullptr)
        {
            cout << "Tree is empty" << endl;
            return INT_MIN;
        }

        BSTNode *temp = Root;

        while (true)
        {
            if (temp->getLeftBSTNode() == nullptr)
            {
                return temp->getBSTNodeData();
            }
            temp = temp->getLeftBSTNode();
        }
    }

    void addBSTNode(int value)
    {
        BSTNode *temp = Root;
        BSTNode *node = new BSTNode(value);

        while (true)
        {
            if (value < temp->getBSTNodeData())
            {
                if (temp->getLeftBSTNode() == nullptr)
                {
                    temp->setBSTLeftNode(node);
                    break;
                }
                temp = temp->getLeftBSTNode();
            }
            else if (value > temp->getBSTNodeData())
            {
                if (temp->getRightBSTNode() == nullptr)
                {
                    temp->setBSTRightNode(node);
                    break;
                }
                temp = temp->getRightBSTNode();
            }
            else if (value == temp->getBSTNodeData())
            {
                cout << "Duplicate value aren't allowed in BST." << endl;
                break;
            }
        }
    }

    BSTNode *deleteBSTNode(BSTNode *Root_Node, int value)
    {

        if (Root_Node == nullptr)
        {
            "Base Condition of Recursive Function";

            return nullptr;
        }
        else
        {
            if (Root_Node->getLeftBSTNode() == nullptr && Root_Node->getRightBSTNode() == nullptr)
            {
                delete (Root_Node);
                return nullptr;
            }
            if (Root_Node->getBSTNodeData() > value)
            {
                Root_Node->setBSTLeftNode(deleteBSTNode(Root_Node->getLeftBSTNode(), value));
            }
            else if (Root_Node->getBSTNodeData() < value)
            {
                Root_Node->setBSTRightNode(deleteBSTNode(Root_Node->getRightBSTNode(), value));
            }
            else 
            {
                BSTNode *iPre = inOrderPredessorNode(Root_Node);
                Root_Node->setBSTNodeData(iPre->getBSTNodeData());
                Root_Node->setBSTLeftNode(deleteBSTNode(Root_Node->getLeftBSTNode(), iPre->getBSTNodeData()));
            }
        }
        return Root_Node;
    }
    BSTNode *inOrderPredessorNode(BSTNode *node)
    {
        /*
            The inorder predessor of the leaf node is not evaluated here.
        */
        node = node->getLeftBSTNode();
        while (node->getRightBSTNode() != nullptr)
        {
            node = node->getRightBSTNode();
        }
        return node;
    }
    void show()
    {
        inOrderTraversal(Root);
    }
};
int main()
{
    BST Apple;

    Apple.setRootNodeData(10);
    Apple.addBSTNode(15);
    Apple.addBSTNode(-1);
    Apple.addBSTNode(17);
    Apple.addBSTNode(100);
    Apple.addBSTNode(1);

    cout << "The maximum value of the node is " << Apple.BSTMaxValue() << endl;
    cout << "The minimum value of the node is " << Apple.BSTMinValue() << endl;

    Apple.show();

    Apple.deleteBSTNode(Apple.getRootNode(), 10);

    cout << "\nTree after deleting 100..." << endl;

    Apple.show();

    cout << "\nMaximum value of the tree is " << Apple.BSTMaxValue() << endl;

    Apple.addBSTNode(17);

    cout << "\nRoot node value after deleting the root node is " << Apple.getRootNode()->getBSTNodeData() << endl;

    return 0;
}
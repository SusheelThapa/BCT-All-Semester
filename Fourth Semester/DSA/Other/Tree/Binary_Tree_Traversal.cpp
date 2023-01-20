#include <iostream>
using namespace std;

// Forward declaration of all the classes in this program
class LinkedListNode;
class TreeNode;
class Tree;
class LinkedList;
class Stack;

class TreeNode
{
private:
    TreeNode *left_Treenode;
    int data;
    TreeNode *right_Treenode;

public:
    TreeNode(){};
    TreeNode(int value)
    {
        left_Treenode = nullptr;
        right_Treenode = nullptr;
        data = value;
    }

    void setData(int &value)
    {
        data = value;
    }
    int getData()
    {
        return this->data;
    }
    TreeNode *getLeftNode()
    {
        return left_Treenode;
    }
    TreeNode *getRightNode()
    {
        return right_Treenode;
    }
    void pointToLeftNode(TreeNode *tree_node)
    {
        left_Treenode = tree_node;
    }
    void pointToRightNode(TreeNode *tree_node)
    {
        right_Treenode = tree_node;
    }
    void deleteTreeNode()
    {
        delete (left_Treenode);
        delete (right_Treenode);
    }
};
class LinkedListNode
{
private:
    TreeNode *tree_node;  // This is the data part of linked List
    LinkedListNode *next; // This will points to the next LinkedList
public:
    // Default Constructor
    LinkedListNode()
    {
        next = nullptr;
    }

    // Constuctor which will initialize the node data with given data
    LinkedListNode(TreeNode *tree_node)
    {
        this->tree_node = tree_node;
        next = nullptr;
    }

    // This is used to set the data of the node
    void setTreeNode(TreeNode *tree_node)
    {
        this->tree_node = tree_node;
    }

    // This is used to get the data of the node
    TreeNode *getTreeNode()
    {
        return this->tree_node;
    }

    // This is used to make link between two LinkedListNode
    void pointToNext(LinkedListNode *node_to_point)
    {
        this->next = node_to_point;
    }

    // This is used to return next node address store by the current node.
    LinkedListNode *nextLinkedListNode()
    {
        return this->next;
    }
    void deleteLinkedListNode()
    {
        tree_node->deleteTreeNode();
        delete (tree_node);
        delete (next);
    }
};

class LinkedList
{
private:
    LinkedListNode *head;
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
    }

    LinkedListNode *getHead()
    {
        return head;
    }

    int getSize()
    {
        return size;
    }

    void addAtFirstIndex(TreeNode *tree_node)
    {
        LinkedListNode *link = new LinkedListNode(tree_node);
        link->pointToNext(head);
        head = link;
        size += 1;
    }

    TreeNode *removeAtFirstIndex()
    {
        LinkedListNode *remove_node;
        TreeNode *remove;

        remove_node = head;

        remove = head->getTreeNode();
        head = head->nextLinkedListNode();
        size -= 1;

        delete (remove_node);
        return remove;
    }
    void deleteLinkedList()
    {
        LinkedListNode *node = head;
        while (head != nullptr)
        {
            node->nextLinkedListNode();
            head->deleteLinkedListNode();
            delete (head);
            head = node;
        }
    }
};
class StackLinkedList
{
private:
    LinkedList *stack = new LinkedList();

public:
    StackLinkedList()
    {
    }
    StackLinkedList(TreeNode *tree_node)
    {
        stack->addAtFirstIndex(tree_node);
    }
    bool isEmpty()
    {
        return stack->getSize() == 0;
    }
    void push(TreeNode *tree_node)
    {
        stack->addAtFirstIndex(tree_node);
    }
    TreeNode *pop()
    {
        if (isEmpty())
        {
            cout << "Stack Empty Exception" << endl;
            return nullptr;
        }
        return stack->removeAtFirstIndex();
    }
    void deleteStack()
    {
        stack->deleteLinkedList();
    }
};

class StackArray
{
private:
    TreeNode *stack_array;
    int stack_top_index;
    int size;

public:
    StackArray()
    {
        stack_array = new TreeNode(20);
        if (stack_array == nullptr)
        {
            cout << "Sufficient Memory cannot be allocated try again." << endl;
        }
        size = 20; // We are implementing static array so we are fixing its size so that stack never become full.
        stack_top_index = -1;
    }
    bool isEmpty()
    {
        return stack_top_index == -1;
    }
    void push(TreeNode node)
    {
        stack_top_index += 1;
        stack_array[stack_top_index] = node;
    }
    TreeNode pop()
    {
        TreeNode popped = stack_array[stack_top_index];
        stack_top_index -= 1;
        return popped;
    }
    void deleteStack()
    {
        delete (stack_array);
        stack_array = nullptr;
        stack_top_index = -1;
        size = 0;
    }
};
class Tree
{
private:
    TreeNode *Root = new TreeNode();

protected:
    void preOrderTraversalRecursive(TreeNode *Root)
    {
        "Recursive Approach of Preorder Traversal";

        if (Root == nullptr)
        {
            return;
        }
        cout << Root->getData() << " ";
        preOrderTraversalRecursive(Root->getLeftNode());
        preOrderTraversalRecursive(Root->getRightNode());
    }

    void postOrderTraversalRecursive(TreeNode *Root)
    {
        "Recursive Approach of Postorder Traversal";

        if (Root == nullptr)
        {
            return;
        }
        postOrderTraversalRecursive(Root->getLeftNode());
        postOrderTraversalRecursive(Root->getRightNode());
        cout << Root->getData() << " ";
    }

    void inOrderTraversalRecursive(TreeNode *Root)
    {
        "Recursive Approach of Inorder Traversal";

        if (Root == nullptr)
        {
            return;
        }
        inOrderTraversalRecursive(Root->getLeftNode());
        cout << Root->getData() << " ";
        inOrderTraversalRecursive(Root->getRightNode());
    }

    void preOrderTraversalNonRecursive(TreeNode Root)
    {
        StackLinkedList S;
        while (true)
        {

            cout << Root.getData() << " ";
            if (Root.getRightNode())
            {
                S.push(Root.getRightNode());
            };
            if (Root.getLeftNode())
            {
                S.push(Root.getLeftNode());
            }
            if (S.isEmpty())
            {
                break;
            }
            Root = *S.pop();
        }
        S.deleteStack();
    }

    void inOrderTraversalNonRecursive(TreeNode Root)
    {
        StackArray S;
        while (true)
        {

            S.push(Root);
            while (Root.getLeftNode() != nullptr)
            {
                Root = *Root.getLeftNode();
                S.push(Root);
            }

            if (S.isEmpty())
            {
                break;
            }
            while (true)
            {
                Root = S.pop();
                cout << Root.getData() << " ";
                if (Root.getRightNode() != nullptr)
                {
                    break;
                }
                if (Root.getRightNode() == nullptr && S.isEmpty() == true)
                {
                    return;
                }
            }
            Root = *Root.getRightNode();
        }
    }

public:
    Tree() {}
    Tree(int root_data) { Root->setData(root_data); }

    void setRootNodeData(int root_data)
    {
        Root->setData(root_data);
    }

    TreeNode *getRootNode()
    {
        return Root;
    }

    void linkChildToParent(TreeNode *parentTreeNode, int left_Treenode_value = INT_MIN, int right_Treenode_value = INT_MIN)
    {
        TreeNode *left = new TreeNode(left_Treenode_value);
        TreeNode *right = new TreeNode(right_Treenode_value);

        if (left_Treenode_value != INT_MIN)
        {
            parentTreeNode->pointToLeftNode(left);
        }
        if (right_Treenode_value != INT_MIN)
        {
            parentTreeNode->pointToRightNode(right);
        }
    }
    void show()
    {
        preOrderTraversalRecursive(Root);
        cout << endl;
        preOrderTraversalNonRecursive(*Root);
        cout << endl;
        inOrderTraversalRecursive(Root);
        cout << endl;
        inOrderTraversalNonRecursive(*Root);
        cout << endl;
        postOrderTraversalRecursive(Root);
        cout << endl;
    }
};

int main()
{
    Tree Banana(10);

    Banana.linkChildToParent(Banana.getRootNode(), 20, 30);

    Banana.linkChildToParent(Banana.getRootNode()->getLeftNode(), 40, 50);
    Banana.linkChildToParent(Banana.getRootNode()->getRightNode(), 60, 70);

    Banana.linkChildToParent(Banana.getRootNode()->getRightNode()->getLeftNode(), 100, 200);
    
    Banana.show();

    return 0;
}
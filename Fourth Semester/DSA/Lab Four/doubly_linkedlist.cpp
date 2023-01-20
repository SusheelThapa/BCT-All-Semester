#include <iostream>
using namespace std;

class DoublyLinkedList
{
private:
    typedef struct Node
    {
        struct Node *previous_node;
        int data;
        struct Node *next_node;
    } Node;

    Node *createNode(int value)
    {
        "Create the node dynamically. Takes 0(1).";

        Node *node = new Node();
        node->previous_node = NULL;
        node->next_node = NULL;
        node->data = value;

        return node;
    }

    Node *head;
    int size;

public:
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    int length()
    {
        "Return the length of Linked List. Takes 0(1).";
        return size;
    }

    bool isEmpty()
    {
        "Check if Linked List is empty or not. Takes 0(1)";
        return head == NULL && size == 0;
    }

    void show()
    {
        Node *node = head;

        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return;
        }

        while (true)
        {
            cout << node->data;
            node = node->next_node;
            if (node == NULL)
            {
                break;
            }
            cout << " <--> ";
        }
        cout << endl;
    }

    void add(int value)
    {
        "Add Node with the value at the end of the linked list. Takes 0(1) at first and 0(n) at last.";

        Node *link = createNode(value);
        if (isEmpty())
        {
            head = link;
        }
        else
        {
            Node *temp = head;

            while (temp->next_node != NULL)
            {
                temp = temp->next_node;
            }
            temp->next_node = link;
            link->previous_node = temp;
        }
        size++;
    }

    void replaceAll(int old_value, int new_value)
    {
        "Replace old value with new value.Takes 0(n)";

        Node *link = head;

        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }

        while (link != NULL)
        {
            if (link->data == old_value)
            {
                link->data = new_value;
            }
            link = link->next_node;
        }
    }

    void replaceAt(int value, int index)
    {
        "Replace value at a certain index. Takes 0(n)";

        Node *link = head;

        if (index > size - 1)
        {
            cout << "Index Error" << endl;
        }

        for (int i = 0; i < size; i++)
        {
            if (index == i)
            {
                link->data = value;
            }
            link = link->next_node;
        }
    }

    void insertAt(int value, int index)
    {
        "Insert at value at a given index. Take 0(1) at first and last and 0(n) at other position.";

        if (index > size)
        {
            cout << "Index Error" << endl;
        }

        Node *link = createNode(value);

        if (index == 0)
        {
            link->next_node = head;
            head->previous_node = link;
            head = link;
        }
        else if (index + 1 == size)
        {
            add(value);
            return;
        }
        else
        {
            Node *temp = head;

            for (int i = 0; i < index; i++)
            {
                temp = temp->next_node;
            }

            link->previous_node = temp->previous_node;
            link->next_node = temp;
            temp->previous_node->next_node = link;
            temp->previous_node = link;
        }
        size++;
    }

    void removeAt(int index)
    {
        "Removes element at a particular index. Takes 0(1) for first and last position and other 0(n)";

        if (index > size - 1)
        {
            cout << "Index Error" << endl;
            return;
        }

        Node *remove;

        if (index == 0)
        {
            remove = head;
            head = head->next_node;
            head->previous_node = NULL;
            delete (remove);
        }
        else
        {
            remove = head;
            for (int i = 0; i < index; i++)
            {
                remove = remove->next_node;
            }

            remove->previous_node->next_node = remove->next_node;
            remove->next_node->previous_node = remove->previous_node;

            delete (remove);
        }

        size--;
    }

    int indexOf(int value)
    {
        "Return the index of value in list. Takes 0(n)";

        Node *index = head;

        for (int i = 0; i < size; i++)
        {
            if (index->data == value)
            {
                return i;
            }
            index = index->next_node;
        }
        return -1;
    }

    void reset()
    {
        Node *temp = head;
        while (temp->next_node != NULL)
        {
            head = temp->next_node;
            free(temp);
            temp = head;
        }
        free(temp);
        head = NULL;
        size = 0;
    }
};

int main()
{
    DoublyLinkedList one;

    cout << "Status: " << one.isEmpty() << endl;

    one.add(1);
    one.add(2);
    one.add(3);
    one.add(2);
    one.add(5);

    cout << "Status: " << one.isEmpty() << endl;

    one.removeAt(0);

    one.replaceAt(10, 3);

    one.add(1);
    one.add(2);

    cout << "The length of list is " << one.length() << endl;

    one.add(3);
    one.add(2);
    one.add(5);

    one.replaceAll(2, 7);

    one.insertAt(90, 1);

    cout << "The first index of 5 in list is " << one.indexOf(5) << endl;

    one.show();

    one.reset();

    cout << "Status of DoublyLinked List is " << one.isEmpty() << endl;

    return 0;
}
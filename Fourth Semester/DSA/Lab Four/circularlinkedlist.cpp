#include <iostream>
using namespace std;

class CircularLinkedList
{
private:
    typedef struct Node
    {
        int data;
        struct Node *address;
    } Node;

    Node *createNode(int value)
    {
        "Create Node. Takes 0(1)";

        Node *node = new Node();
        node->data = value;
        node->address = node;
        return node;
    }

    Node *head;
    int size;

public:
    CircularLinkedList()
    {
        "Initialize the Circular Linked List.";

        size = 0;
        head = NULL;
    }

    int length()
    {
        "Return the length of the Circular Linked List. Takes 0(1)";

        return size;
    }

    bool isEmpty()
    {
        "Checks if the Circular Linked list is empty or not. Takes 0(1)";

        return size == 0;
    }

    void add(int value)
    {
        "Add node to the list. Takes 0(n)";

        Node *link = createNode(value);
        Node *temp = head;

        if (isEmpty())
        {
            head = link;
        }
        else
        {
            for (int i = 1; i < size; i++)
            {
                temp = temp->address;
            }
            link->address = head;
            temp->address = link;
        }
        size++;
    }

    void insert(int value, int index)
    {
        if (isEmpty())
        {
            "Adding element to the first in Empty list. Takes 0(1)";
            add(value);
            return;
        }
        else
        {
            Node *link = createNode(value);
            Node *temp = head;

            if (index + 1 == size)
            {
                "Adding element to the last of list. Takes 0(1)";

                add(value);
                free(link);
                return;
            }
            else if (index == 0)
            {
                "Adding Element at first of list.Takes 0(1)";

                link->address = head;
                for (int i = 1; i < size; i++)
                {
                    temp = temp->address;
                }
                temp->address = link;
                head = link;
            }
            else
            {
                "Adding element in middle of list. Takes 0(n)";

                Node *temp;
                temp = head;

                for (int i = 1; i < index; i++)
                {
                    temp = temp->address;
                }

                link->address = temp->address;
                temp->address = link;
            }
        }
        size++;
    }

    void removeAt(int index)
    {
        Node *temp = head;
        if (isEmpty())
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *remove;

        if (index == 0)
        {
            "Removing First Element. Takes 0(n)";

            remove = head;
            for (int i = 1; i < size; i++)
            {
                remove = remove->address;
            }

            remove->address = head->address;
            remove = head;
            head = remove->address;
        }
        else
        {
            "Removing other element. Takes 0(n)";

            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->address;
            }

            remove = temp->address;
            temp->address = remove->address;
        }

        delete (remove); // Deallocation the memory

        size--;
    }

    int indexOf(int value)
    {
        Node *temp;
        temp = head;

        for (int i = 0; i < size; i++)
        {
            if (temp->data == value)
            {
                return i;
            }
            temp = temp->address;
        }
        return -1;
    }

    bool search(int value)
    {
        "Return true if element is present in list. Takes 0(n)";

        Node *temp = head;

        for (int i = 0; i < size; i++)
        {
            if (temp->data == value)
            {
                return true;
            }
            temp = temp->address;
        }

        return false;
    }

    void show()
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp;
        temp = head;

        while (true)
        {
            cout << temp->data;
            temp = temp->address;
            if (head == temp)
            {
                cout << endl;
                return;
            }
            cout << " --> ";
        }
    }
};
int main()
{
    CircularLinkedList one;

    cout << "Status: " << one.isEmpty() << endl;

    one.add(1);
    one.add(2);
    one.add(3);
    one.add(4);

    cout << "Status: " << one.isEmpty() << endl;

    cout << "After adding element to the node..."
         << endl;

    one.show();

    one.insert(10, 4);
    one.insert(66, 0);

    one.removeAt(0);

    cout << "After insertion and deletion in the list.." << endl;

    one.show();

    cout << "The length of Circular Linked List is " << one.length() << endl;

    cout << "Status of 3 in list: " << one.search(3) << endl;

    cout << "Index of 1 is " << one.indexOf(1) << endl;

    one.show();

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

template <class T>
class DoublyLinkedList
{
    template <class X>
    class Node
    {
    public:
        X data;
        Node *next;
        Node *previous;

        Node(X data)
        {
            this->data = data;
            this->next = nullptr;
            this->previous = nullptr;
        }
    };

    Node<T> *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }

    T insertAtBeginning(T data)
    {
        Node<T> *newNode = new Node(data);

        if (head != nullptr)
        {
            head->previous = newNode;
        }
        newNode->next = head;
        head = newNode;

        return newNode->data;
    }
    T insertAtEnd(T data)
    {
        Node<T> *newNode = new Node(data);

        if (head == nullptr)
        {
            delete newNode;
            return insertAtBeginning(data);
        }
        else
        {
            Node<T> *temp = head;

            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->previous = temp;

            return newNode->data;
        }
    }
    T insertAfterNthNode(T data, int nthNode)
    {
        Node<T> *newNode = new Node(data);

        Node<T> *temp = head;
        int count = 1;

        while (count < nthNode)
        {
            temp = temp->next;
            count++;
        }

        newNode->next = temp->next;
        newNode->previous = temp;
        temp->next->previous = newNode;
        temp->next = newNode;

        return newNode->data;
    }

    T insertBeforeNthNode(T data, int nthNode)
    {
        Node<T> *newNode = new Node(data);

        Node<T> *temp = head;

        if (nthNode == 1)
        {
            delete newNode;
            return insertAtBeginning(data);
        }
        else
        {
            int count = 1;

            while (count < nthNode - 1)
            {
                temp = temp->next;
                count++;
            }

            newNode->next = temp->next;
            newNode->previous = temp;
            temp->next->previous = newNode;
            temp->next = newNode;
        }
        return newNode->data;
    }

    T deleteFromBeginning()
    {
        Node<T> *temp = head;

        head = head->next;
        head->previous = nullptr;

        T data = temp->data;
        delete temp;

        return data;
    }

    T deleteFromEnd()
    {
        Node<T> *temp = head;

        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        T data = temp->next->data;
        temp->next = nullptr;
        delete temp->next;

        return data;
    }

    T deleteAfterNthNode(int nthNode)
    {

        Node<T> *temp = head;
        int count = 1;

        while (count < nthNode)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next->next == nullptr)
        {
            return deleteFromEnd();
        }
        else if (temp->next != nullptr)
        {

            Node<T> *remove = temp->next;
            temp->next = temp->next->next;
            temp->next->previous = temp;

            T data = remove->data;
            delete remove;

            return data;
        }
        return INT_MIN;
    }

    T deleteBeforeNthNode(int nthNode)
    {

        if (nthNode == 2)
        {
            return deleteFromBeginning();
        }

        Node<T> *temp = head;
        int count = 1;

        while (count < nthNode)
        {
            temp = temp->next;
            count++;
        }

        Node<T> *remove = temp->previous;
        temp->previous = temp->previous->previous;
        temp->previous->next = temp;

        T data = remove->data;
        delete remove;

        return data;
    }

    void display()
    {
        if (head != nullptr)
        {
            Node<T> *temp = head;
            while (temp->next != nullptr)
            {
                cout << temp->data << " <-> ";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }
        else
        {
            cout << "Doubly Linked List is empty" << endl;
        }
    }
};

int main()
{
    DoublyLinkedList<int> number;

    number.insertAtBeginning(100);
    number.insertAtBeginning(90);

    number.insertAtEnd(9832);
    number.insertAtEnd(32);

    number.insertAfterNthNode(43, 3);
    number.insertAfterNthNode(235, 2);

    number.insertBeforeNthNode(126, 2);
    number.insertBeforeNthNode(999, 4);

    number.display();

    number.deleteFromBeginning();
    number.deleteFromEnd();
    number.deleteAfterNthNode(2);
    number.deleteBeforeNthNode(2);

    number.display();

    return 0;
}

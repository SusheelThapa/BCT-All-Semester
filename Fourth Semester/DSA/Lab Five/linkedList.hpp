#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
    template <class X>
    class Node
    {
    public:
        X data;
        Node *next;

        Node(X data)
        {
            this->data = data;
            this->next = nullptr;
        }
    };

    Node<T> *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    T insertAtBeginning(T data)
    {
        Node<T> *newNode = new Node(data);

        newNode->next = head;
        head = newNode;

        return head->data;
    }

    T insertAtEnd(T data)
    {

        Node<T> *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
            return newNode->data;
        }

        Node<T> *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;

        return newNode->data;
    }

    T insertAfterNthNode(int nthNode, T data)
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
        temp->next = newNode;

        return newNode->data;
    }

    T insertBeforeNthNode(int nthNode, T data)
    {
        Node<T> *newNode = new Node(data);

        Node<T> *temp = head;

        if (nthNode == 1)
        {
            newNode->next = temp;
            head = newNode;
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
            temp->next = newNode;
        }
        return newNode->data;
    }

    T deleteFromBeginning()
    {
        Node<T> *temp = head;

        head = head->next;

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

        Node<T> *remove = temp->next;
        temp->next = temp->next->next;

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
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }
        else
        {
            cout << "Linked List is empty" << endl;
        }
    }
};
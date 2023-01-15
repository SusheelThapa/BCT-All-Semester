#include <iostream>
using namespace std;

template <class T>
class List
{
    template <class X>
    class ListNode
    {
    public:
        X data;
        int nextIndex;
    };

    int SIZE = 10;
    ListNode<T> *listArray;
    int avaliableIndex = 0;
    int headIndex = -1;
    int tailIndex = -1;

public:
    List()
    {
        listArray = new ListNode<T>[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            listArray[i].nextIndex = i + 1;
        }
        listArray[SIZE - 1].nextIndex = -1;
    }

    T insert(T value)
    {

        if (avaliableIndex == -1)
        {
            cerr << "List is full" << endl;
            return value;
        }

        int newAvaliableIndex = listArray[avaliableIndex].nextIndex;

        if (headIndex == -1 && tailIndex == -1)
        {
            headIndex = tailIndex = avaliableIndex;
            listArray[avaliableIndex].data = value;
            listArray[avaliableIndex].nextIndex = -1;
        }
        else
        {
            listArray[tailIndex].nextIndex = avaliableIndex;
            tailIndex = avaliableIndex;

            listArray[tailIndex].data = value;
            listArray[tailIndex].nextIndex = -1;
        }

        avaliableIndex = newAvaliableIndex;

        return value;
    }

    T deleteFromHead()
    {
        int deletedIndex = headIndex;
        int deletedData = listArray[headIndex].data;

        int newHeadIndex = listArray[headIndex].nextIndex;

        listArray[headIndex].nextIndex = avaliableIndex;
        avaliableIndex = deletedIndex;
        headIndex = newHeadIndex;

        return deletedData;
    }

    void display()
    {
        if (headIndex == -1)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int tempIndex = headIndex;
            while (listArray[tempIndex].nextIndex != 0)
            {
                cout << listArray[tempIndex].data << " ";
                tempIndex = listArray[tempIndex].nextIndex;
            }
            cout << endl;
        }
    }
};

int main()
{
    List<int> l;
    l.insert(10);
    l.insert(30);
    l.insert(10);
    l.insert(30);
    l.insert(10);
    l.insert(30);
    l.insert(10);
    l.insert(30);
    l.insert(10);
    l.insert(30);
    l.display();

    l.deleteFromHead();
    l.display();
    return 0;
}
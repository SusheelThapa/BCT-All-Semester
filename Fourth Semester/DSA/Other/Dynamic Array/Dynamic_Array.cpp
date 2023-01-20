#include <iostream>
using namespace std;

class Array
{
    int size;
    int used_size;
    int *base;

    void increaseSizeOfArray()
    {
        "Increase the size of array. Takes 0(n)";

        size = size * 2;
        int *remove;
        int *increase = new int(size);

        for (int i = 0; i < used_size; i++)
        {
            increase[i] = base[i];
        }
        remove = base;
        base = increase;

        delete (remove);
    }

public:
    Array(int size)
    {
        this->size = size;
        this->used_size = 0;
        this->base = new int(size);
    }

    void show(void)
    {
        "Display the array. Takes 0(n)";

        for (int i = 0; i < this->used_size; i++)
        {
            cout << *(this->base + i) << " ";
        }

        cout << endl
             << endl;
    }

    int length()
    {
        "Return the size of array. Takes 0(1)";

        return used_size;
    }

    int indexOf(int value)
    {
        "Return the index of the value. Take 0(n).";

        for (int i = 0; i < used_size; i++)
        {
            if (base[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    bool find(int value)
    {
        "Return if element is present in the array";

        for (int i = 0; i < used_size; i++)
        {
            if (base[i] == value)
            {
                return true;
            }
        }
        return false;
    }

    void replaceAt(int value, int index)
    {
        "Replace the value at the given index. Takes 0(1)";

        base[index] = value;
    }

    void replace(int old_value, int new_value)
    {
        "Replace old value with new one. Takes 0(n)";

        for (int i = 0; i < used_size; i++)
        {
            if (base[i] == old_value)
            {
                replaceAt(new_value, i);
            }
        }
    }

    void add(int value)
    {

        "Add value to the array. Takes 0(n)";

        if (this->size == this->used_size)
        {
            increaseSizeOfArray();
        }

        *(this->base + this->used_size) = value;
        this->used_size += 1;
    }

    void insert(int value, int index)
    {
        "Insert the value at the given index. Takes 0(n)";

        if (this->size == this->used_size)
        {
            increaseSizeOfArray();
        }

        if (this->used_size == this->size)
        {
            printf("SIZE ERROR: Array is completely filled.\n");
            return;
        }
        else if (this->size <= index)
        {
            printf("INDEX ERROR: Index out of bounds\n");
        }
        else if (this->used_size <= index)
        {
            printf("GAP ERROR: After inserting there is gap between last and second last element.\n");
            return;
        }
        else
        {
            for (int i = this->used_size; i > index; i--)
            {
                *(this->base + i) = *(this->base + i - 1);
            }

            *(this->base + index) = value;
        }

        this->used_size += 1;
    }

    void removeAt(int index)
    {
        "Remove the element at the given index. Takes 0(n)";

        if (this->used_size <= index)
        {
            printf("INDEX ERROR: Index out of bounds\n");
        }
        for (int i = index; i < this->used_size; i++)
        {
            *(this->base + index) = *(this->base + index + 1);
        }
        this->used_size -= 1;
    }

    void remove(int value)
    {
        "Remove all the value in array. Takes 0(n)";

        for (int i = 0; i < used_size; i++)
        {
            if (base[i] == value)
            {
                removeAt(i);
            }
        }
    }
};

int main()
{
    Array one(2);

    one.add(1);
    one.add(2);
    one.add(3);
    one.add(4);

    one.insert(5, 2);

    one.removeAt(4);

    one.show();

    return 0;
}
#include <iostream>

class Array
{
private:
    int *ptr;
    int size;

public:
    Array(int *ptr = NULL, int size = 0)
    {
        this->size = size;
        if (size != 0)
        {
            this->ptr = new int(size);
            for (int i = 0; i < size; i++)
            {
                this->ptr[i] = ptr[i];
            }
        }
    }

    int &operator[](int index)
    {
        if (index >= this->size)
        {
            std::cout << "Array out of bound" << std::endl;
            exit(0);
        }

        return this->ptr[index];
    }

    void print() const
    {
        for (int i = 0; i < this->size; i++)
        {
            std::cout << this->ptr[i] << " ";
        }
    }
};

int main(int argc, char const *argv[])
{
    int ptr[] = {1, 2, 3, 4, 5};

    Array a = Array(ptr, 5);

    std::cout << a[0] << std::endl;

    return 0;
}

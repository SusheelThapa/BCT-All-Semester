#include <iostream>

class Array
{
private:
    int *ptr;
    int size;

public:
    void *operator new(size_t size)
    {

        std::cout << "Overloading new operator with size : " << size << "\n";
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *p)
    {
        std::cout << "Overloading delete operator\n";
        free(p);
    }
};

int main()
{
    Array *a = new Array;

    delete a;
}
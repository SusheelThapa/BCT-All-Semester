# Assignment

## assignment operator

```C++
#include <iostream>

class Int
{
private:
    int a;

public:
    Int(){};
	Int(int value){this->a = value; }

    Int &operator=(Int value)
    {

        std::cout << "Overloading = operator\n";
        this->a = value.a;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Int a;
    a = Int(5);

    return 0;
}
```

## bitwise operator

```C++
#include <iostream>

class Int
{

public:
    int data;
    Int() { this->data = 0; };
    Int(int value) { this->data = value; }

    Int operator&(Int b)
    {
        return Int(this->data & b.data);
    }
};

int main(int argc, char const *argv[])
{
    std::cout << (Int(10) & Int(12)).data << std::endl;

    std::cout << (10 & 12) << std::endl;

    return 0;
}
```

## function call

```C++
#include <iostream>

class Int
{
private:
    int data;

public:
    Int(){};
    Int(int value) { this->data = value; };

    Int operator()(int value1, int value2)
    {
        std::cout << "Overloading function call\n";
        return Int(value1 + value2);
    }
    void displayData()
    {
        std::cout << this->data;
    }
};

int main(int argc, char const *argv[])
{
    Int a = Int()(4, 5);
    a.displayData();
    return 0;
}
```

## index operator

```C++
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
```

## logical operator

```C++
#include <iostream>

class Int
{
    int value;

public:
    Int(int value) { this->value = value; }

    bool operator||(Int b)
    {
        std::cout << "Overloaded || operator\n";
        return this->value || b.value;
    }
    bool operator&&(Int b)
    {
        std::cout << "Overloaded && operator\n";
        return this->value && b.value;
    }
};

int main(int argc, char const *argv[])
{
    std::cout << (Int(1) || Int(0)) << std::endl;
    std::cout << (Int(0) || Int(0)) << std::endl;

    std::cout << (Int(1) && Int(0)) << std::endl;
    std::cout << (Int(0) && Int(0)) << std::endl;
    return 0;
}
```

## new delete

```C++
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
```

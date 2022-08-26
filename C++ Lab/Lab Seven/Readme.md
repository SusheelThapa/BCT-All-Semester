# Lab Seven

## Question One

**Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class.
Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display().
Write a suitable program to illustrate virtual functions and virtual destructors.**

```c++

#include <iostream>
#include <cmath>

class Shape
{
public:
    virtual ~Shape() { std::cout << "Destructor of Shape class.\n"; }

    virtual float area() = 0;
    virtual void display() = 0;
};

class Rectangle : public Shape
{
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : Shape(), length(l), breadth(b) {}
    virtual ~Rectangle() { std::cout << "Destructor of Rectangle class.\n"; }

    float area()
    {
        return this->length * this->breadth;
    }
    void display()
    {
        std::cout << "I am rectangle\n";
    }
};
class Circle : public Shape
{
    float radius;

public:
    Circle(float r) : Shape(), radius(r){};
    virtual ~Circle() { std::cout << "Destructor of Circle class.\n"; };

    float area()
    {
        return this->radius * this->radius * M_PI;
    }
    void display()
    {
        std::cout << "I am circle\n";
    }
};
class Trapezoid : public Shape
{
    float parallel_side_one;
    float parallel_side_two;
    float distance_between_parallel_side;

public:
    Trapezoid(float psa, float psb, float dbps) : Shape(), parallel_side_one(psa), parallel_side_two(psb), distance_between_parallel_side(dbps){};
    virtual ~Trapezoid() { std::cout << "Destructor of Trapezoid class.\n"; };

    float area()
    {
        return 1.0 / 2 * this->distance_between_parallel_side * (this->parallel_side_one + this->parallel_side_two);
    }
    void display()
    {
        std::cout << "I am Trapezoid\n";
    }
};

int main()
{
    std::cout << Rectangle(2, 4).area() << "\n";
    std::cout << Circle(4).area() << "\n";
    std::cout << Trapezoid(1, 3, 2).area() << "\n";

    Circle *demo_circle = new Circle(10);
    Shape *demo_shape = demo_circle;
    delete demo_shape;

    return 0;
}
```

## Question Two

**Create a class Person and two derived classes Employee and Student,
inherited from class Person.
Now create a class Manager which is derived from two base classes Employee and Student.
Show the use of the virtual base class.**

```c++

#include <iostream>

class Person
{
public:
    void show()
    {
        std::cout << "Running show function\n";
    }
};

class Employee : public virtual Person
{
};

class Student : public virtual Person
{
};

class Manager : public Employee, public Student
{
};

int main(int argc, char const *argv[])
{
    Manager().show();
    return 0;
}
```

## Question Three

**Write a program with an abstract class Student and create derive classes Engineering,
Medicine and Science from base class Student.Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.**

```c++

#include <iostream>
class Student
{
public:
    virtual void display()
    {
        std::cout << "Student class";
    }
};

class Engineering : public Student
{
public:
    void display()
    {
        std::cout << "Engineering class";
    }
};
class Medical : public Student
{
};
class Science : public Student
{
};

int main()
{
    Engineering *e = new Engineering;
    Medical *m = new Medical;
    Science *s = new Science;

    Student *a[3];
    a[0] = e;
    a[1] = m;
    a[2] = s;

    std::cout << sizeof(a[0]) << " ";
    std::cout << sizeof(a[1]) << " ";
    std::cout << sizeof(a[2]) << " ";

    a[0]->display();
    e->display();
    return 0;
}

```

## Question Four

**Create a polymorphic class Vehicle and create other derived classes Bus,Car, and Bike from Vehicle.
Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.**

```c++

#include <iostream>

class Vehicle
{
public:
    virtual void display()
    {
        std::cout << "Display of Vehicle\n";
    }
};

class Bus : public Vehicle
{
public:
    void display()
    {
        std::cout << "Display of Bus\n";
    }
};
class Car : public Vehicle
{
public:
    void display()
    {
        std::cout << "Display of Car\n";
    }
};
class Bike : public Vehicle
{
public:
    void display()
    {
        std::cout << "Display of Bike\n";
    }
};

int main()
{
    Vehicle *ptr_vech, vech;
    Bus *ptr_bus , bus;

	std::cout<<"The size of ptr_vech is "<<sizeof(*ptr_vech)<<"\n";
	ptr_vech = &bus;
	ptr_bus = dynamic_cast<Bus *>(ptr_vech);

	std::cout<<"The type of ptr_vech is "<<typeid(*ptr_vech).name()<<"\n";

	if (typeid(*ptr_vech) != typeid(*ptr_bus))
	{
		 std::cout<<"ptr_vech and ptr_bus are not of same type.\n";
	}
	else
	{
		 std::cout<<"ptr_vech and aptr_bus are of same type\n";
	}
	std::cout<<"The size of ptr_vech is "<<sizeof(*ptr_vech)<<"\n";
	std::cout<<"The type of ptr_vech is "<<typeid(*ptr_vech).name()<<"\n";
    return 0;
}

```

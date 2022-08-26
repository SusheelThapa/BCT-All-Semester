/*
Question_Four.cpp

Create a polymorphic class Vehicle and create other derived classes Bus,Car, and Bike from Vehicle.
Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.
*/

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

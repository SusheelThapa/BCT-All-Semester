# Lab Six

## Question One

**Write a program that can convert the Distance(meter, centimeter) to meters measurement in float and vice versa.
Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.**

```c++
#include <iostream>

class Distance
{
    float meter, centimeter;

public:
    Distance() {}
    Distance(float _meter, float _centimeter)
    {
        meter = _meter;
        centimeter = _centimeter;
    }

    Distance(float _centimeter)
    {
        meter = static_cast<int>(_centimeter) / 100;
        centimeter = _centimeter - meter * 100;
    }

    void display()
    {
        std::cout << "\nMeter : " << meter
                  << "\nCentimeter: " << centimeter;
    }

    operator float()
    {
        return meter * 100 + centimeter;
    }
};

int main(int argc, char const *argv[])
{

    Distance d1;
    d1 = 639;
    d1.display();

    std::cout << "\nType conversion from Distance to float " << float(d1);

    return 0;
}
```

## Question Two

**Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
Write conversions functions so that the program can convert objects of both types.**

```c++
#include <iostream>

class MetricSystem;
class BritishSystem;

class MetricSystem
{
    float meter, centimeter;

public:
    MetricSystem(){};
    MetricSystem(float _meter, float _centimeter)
    {
        meter = _meter;
        centimeter = _centimeter;
    };

    MetricSystem(float _centimeter)
    {
        meter = static_cast<int>(_centimeter) / 100;
        centimeter = _centimeter - meter * 100;
    }

    operator BritishSystem();

    void display()
    {
        std::cout << "\nMeter : " << meter
                  << "\nCentimeter: " << centimeter;
    }
};
class BritishSystem
{
    float feet, inch;

public:
    BritishSystem(){};
    BritishSystem(float _feet, float _inch)
    {
        feet = _feet;
        inch = _inch;
    }
    BritishSystem(float _inch)
    {
        feet = static_cast<int>(_inch) / 12;
        inch = _inch - feet * 12;
    }

    operator MetricSystem();

    void display()
    {
        std::cout << "\nFeet : " << feet
                  << "\nInch: " << inch;
    }
};

int main(int argc, char const *argv[])
{
    MetricSystem(BritishSystem(5, 11)).display();

    BritishSystem(MetricSystem(1, 80.34)).display();

    return 0;
}

MetricSystem::operator BritishSystem()
{
    float total_centimeter = meter * 100 + centimeter;

    float total_inches = total_centimeter / 2.54;

    return BritishSystem(total_inches);
}

BritishSystem::operator MetricSystem()
{
    float total_inches = feet * 12 + inch;

    float total_centimeter = total_inches * 2.54;

    return MetricSystem(total_centimeter);
}
```

## Question Three

**Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments**

- **veena, guitar, sitar, sarod and mandolin under string()**

- **flute, clarinet saxophone, nadhaswaram, and piccolo under wind()**

- **tabla, mridangam, bangos, drums and tambour under perc()**

**It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a menu as follows**

**Type of instruments to be displayed**

**a. String instruments**

**b. Wind instruments**

**c. Percussion instruments**

**The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.**

```c++
#include <iostream>
#include <cstring>

class Musicians
{
protected:
    char **str;
    char **win;
    char **per;

public:
    Musicians()
    {
        this->str = new char *[5];
        this->win = new char *[5];
        this->per = new char *[5];

        for (int i = 0; i < 5; i++)
        {
            this->str[i] = new char[15];
            this->win[i] = new char[15];
            this->per[i] = new char[15];
        }

        this->string();
        this->wind();
        this->perc();
    }

    void string()
    {
        strcpy(str[0], "veena");
        strcpy(str[1], "guitar");
        strcpy(str[2], "sitar");
        strcpy(str[3], "sarod");
        strcpy(str[4], "mandolin");
    }
    void wind()
    {
        strcpy(win[0], "flute");
        strcpy(win[1], "clarinet");
        strcpy(win[2], "saxophone");
        strcpy(win[3], "nadhaswaram");
        strcpy(win[4], "piccolo");
    }

    void perc()
    {
        strcpy(per[0], "tabla");
        strcpy(per[1], "mridangam");
        strcpy(per[2], "bangos");
        strcpy(per[3], "drums");
        strcpy(per[4], "tambour");
    }
};

class TypeIns : protected Musicians
{
public:
    TypeIns(){};
    void show(char choice)
    {
        char **content_to_display;

        switch (choice)
        {
        case 'a':
            content_to_display = this->Musicians::str;
            break;
        case 'b':
            content_to_display = this->Musicians::win;
            break;
        case 'c':
            content_to_display = this->Musicians::per;
            break;
        }

        for (int i = 0; i < 5; i++)
        {
            std::cout << content_to_display[i] << std::endl;
        }
    }

public:
    void get()
    {

        char choice;

        std::cout << "INSTRUMENTS\n";

        std::cout << "a. String instrument\n";
        std::cout << "b. Wind instrument\n";
        std::cout << "c. Percussion instrument\n";

        do
        {
            std::cout << "Choice : ";
            std::cin >> choice;
        } while (!(choice == 'a' || choice == 'b' || choice == 'c'));

        std::cout << std::endl;

        this->show(choice);
    }
};

int main()
{
    TypeIns().get();

    return 0;
}
```

## Question Four

**
Write three derived classes inheriting functionality of base class person
(should have a member function that asks to enter name and age) and with added unique
features of student, and employee, and functionality to assign, change and delete records of
student and employee. And make one member function for printing the address of the objects of
classes (base and derived) using this pointer. Create two objects of the base class and
derived classes each and print the addresses of individual objects. Using a calculator,
calculate the address space occupied by each object and verify this with address spaces
printed by the program.
**

```c++
#include <stdio.h>
#include <iostream>
#include <string>

class Person
{

protected:
    std::string name;
    int age;

public:
    void askDetails()
    {
        std::cout << "Name : ";
        std::cin >> this->name;

        std::cout << "Age: ";
        std::cin >> age;
    }

    void showDetails()
    {
        std::cout << "Name : " << this->name;

        std::cout << "Age: " << age;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};

class Student : public Person
{
public:
    void assignRecord(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void changeRecord(std::string name = "", int age = 0)
    {
        if (name != "")
        {
            this->name = name;
        }
        if (age > 0)
        {
            this->age = age;
        }
    }

    void deleteRecord()
    {
        this->name = "";
        this->age = 0;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};
class Employee : public Person
{

public:
    void assignRecord(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void changeRecord(std::string name = "", int age = 0)
    {
        if (name != "")
        {
            this->name = name;
        }
        if (age > 0)
        {
            this->age = age;
        }
    }

    void deleteRecord()
    {
        this->name = "";
        this->age = 0;
    }

    void showAddress()
    {
        printf("Address is %u\n", this);
    }
};

int main()
{
    Person p1;
    Person p2;

    Student s;

    Employee e;

    p1.showAddress();
    p2.showAddress();
    s.showAddress();
    e.showAddress();

    std::cout << sizeof(p1) << std::endl;
    std::cout << sizeof(p2) << std::endl;
    std::cout << sizeof(s) << std::endl;
    std::cout << sizeof(e) << std::endl;
    return 0;
}
```

## Question Five

**
Write a base class that asks the user to enter a complex number and make a derived class that
adds the complex number of its own with the base.Finally, make a third class that is a friend
of derived and calculate the difference of the base complex number and its own complex number.
**

```c++
#include <iostream>

class BaseClass
{
private:
    float real, imaginary;

protected:
    void askComplexNumber()
    {
        std::cout << "\n\nBase Class\n";

        std::cout << "Real Part: ";
        std::cin >> this->real;

        std::cout << "Imaginary Part: ";
        std::cin >> this->imaginary;
    }

    float getReal() { return real; }
    float getImaginary() { return imaginary; }

    void setReal(float real) { this->real = real; }
    void setImaginary(float imaginary) { this->imaginary = imaginary; }

    void displayBaseClass()
    {
        std::cout << "Base class\n";

        std::cout << "Real : " << this->real;
        std::cout << "\nImaginary: " << this->imaginary;
    }
};

class DerivedClass : public BaseClass
{
private:
    float real;
    float imaginary;

public:
    DerivedClass(float real, float imaginary)
    {
        this->BaseClass::askComplexNumber();

        this->real = real;
        this->imaginary = imaginary;
    }

    DerivedClass addComplexNumber()
    {
        this->real += this->BaseClass::getReal();
        this->imaginary += this->BaseClass::getImaginary();

        return *this;
    }

    friend DerivedClass subtract(DerivedClass d);

    void displayDerivedClass()
    {

        this->BaseClass::displayBaseClass();
        std::cout << "\nDerived class\n";

        std::cout << "Real : " << this->real;
        std::cout << "\nImaginary: " << this->imaginary;
    }
};

DerivedClass subtract(DerivedClass d)
{

    d.real -= d.BaseClass::getReal();
    d.imaginary -= d.BaseClass::getImaginary();

    return d;
}

int main(int argc, char const *argv[])
{
    (DerivedClass(2, 3).addComplexNumber()).displayDerivedClass();

    subtract(DerivedClass(2, 4)).displayDerivedClass();

    return 0;
}
```

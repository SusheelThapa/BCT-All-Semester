# Lab Four

## Question One

**Write a program that has a class to represent time.
The class should have constructors to initialize data members hour, minute,
and second to 0 and to initialize them to values passed as arguments.
The class should have a member function to add time objects and return the result as a time object.
There should be functions to display time in 12-hour and 24-hour format.**

```C++

#include <iostream>
#include <iomanip>

class Time
{
private:
    int seconds, minutes, hours;

public:
    Time()
    {
        seconds = 0;
        minutes = 0;
        hours = 0;
    }

    Time(int s, int m, int h)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }

    Time add(Time t)
    {
        Time time;

        time.seconds = t.seconds + seconds;
        time.minutes = t.minutes + minutes;
        time.hours = t.hours + hours;

        if (time.seconds >= 60)
        {
            time.seconds -= 60;
            time.minutes += 1;
        }

        if (time.minutes >= 60)
        {
            time.minutes -= 60;
            time.hours += 1;
        }
        if (time.hours >= 24)
        {
            time.hours -= 24;
        }

        return time;
    }

    void display(bool twenty_four_format = true)
    {
        if (twenty_four_format)
        {
            std::cout << hours << ":"
                      << minutes << ":"
                      << seconds << "\n";
        }
        else
        {

            std::cout << ((hours > 12) ? (hours - 12) : (hours)) << ":"
                      << minutes << ":"
                      << seconds << ((hours >= 12) ? (" P.M.\n") : (" A.M.\n"));
        }
    }
};

int main()
{
    Time time_one(12, 49, 12), time_two(12, 32, 13);

    time_one.display(false);
    time_two.display(false);

    Time time_three = time_one.add(time_two);

    time_three.display();

    return 0;
}
```

## Question Two

**Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function.
Use constructors to allocate and initialize the data member.
Also, write a destructor to free the allocated memory for the character array.
Make your own function for the concatenation of two strings.**

```C++

#include <iostream>

class CharacterArray
{
private:
    char *data;
    int length;

public:
    CharacterArray()
    {
        data = nullptr;
        length = 0;
    };
    CharacterArray(char *data, int);

    ~CharacterArray();

    void setData(char *data, int);

    void display();

    void join(CharacterArray &, CharacterArray &);
};

int main(int argc, char const *argv[])
{
    CharacterArray a, b, c;

    char one[] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 's', ' ', 'a', 'r', 'e'};
    char two[] = {' ', 'C', 'r', 'e', 'a', 't', 'u', 'r', 'e', 's', ' ', 'o', 'f', ' ', 'l', 'o', 'g', 'i', 'c'};

    a.setData(one, 13);
    b.setData(two, 19);

    c.join(a, b);

    c.display();

    return 0;
}

CharacterArray ::CharacterArray(char *data, int length)
{
    this->setData(data, length);
}

CharacterArray ::~CharacterArray()
{
    if (this->data != nullptr)
    {
        delete[] this->data;
    }
    this->length = 0;
    data = nullptr;
}

void CharacterArray::setData(char *data, int length)
{
    this->length = length;
    this->data = new char[length];

    for (int i = 0; i < length; i++)
    {
        this->data[i] = data[i];
    }
}
void CharacterArray::display()
{
    for (int i = 0; i < this->length; i++)
    {
        std::cout << data[i];
    }
    std::cout << std::endl;
}

void CharacterArray::join(CharacterArray &a, CharacterArray &b)
{

    this->length = a.length + b.length;
    this->data = new char[a.length + b.length];

    for (int i = 0; i < a.length; i++)
    {
        this->data[i] = a.data[i];
    }
    for (int j = 0; j < b.length; j++)
    {
        this->data[a.length + j] = b.data[j];
    }
}
```

## Question Three

**Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope".
Your program should be made such that it should show the order of constructor and destructor invocation.
**

```C++
#include <iostream>

class Department
{
private:
    int id;
    const char *name;

public:
    Department(int i, const char *n) : id(i), name(n)
    {
        std::cout << "Object is created with id " << id << " and department name " << name << "\n";
    }
    ~Department()
    {
        std::cout << "Object had gone out of scope.\n";
    }
};

int main()
{
    Department d(4, std::string("BCT").c_str());
    return 0;
}

```

## Question Four

**Assume that one constructor initializes data member say num_vehicle, hour, and rate.
There should be a 10% discount if num_vehicle exceeds 10.
Display the total charge.
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).**

```c++
#include <iostream>

class PersonVehicleDetail
{
private:
    int num_vehicle;
    int hour;
    int rate;

public:
    PersonVehicleDetail(int nv, int h, int r)
    {
        num_vehicle = nv;
        rate = r;
        hour = h;
    }

    PersonVehicleDetail(const PersonVehicleDetail &p)
    {
        num_vehicle = p.num_vehicle;
        hour = p.hour;
        rate = p.rate;
    }

    void displayTotalCharge()
    {
        std::cout << "Total Charge: " << rate * hour * ((num_vehicle > 10) ? (0.9) : (1)) << "\n";
    }
};

int main()
{
    PersonVehicleDetail p1(15, 200, 5);

    PersonVehicleDetail p2 = p1;

    p1.displayTotalCharge();
    p2.displayTotalCharge();
}
```

## Question Five

**Write a program that illustrates the following relationship and comment on them.
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function**

```C++
#include <iostream>

class Demo
{
public:
    void hello() const
    {
        std::cout << "Hello from constant function\n";
    }

    void goodMorning()
    {
        std::cout << "Good morning from non constant member function\n";
    }
};

int main()
{
    const Demo one;
    Demo two;

    one.hello();

    // one.goodMorning(); /*This wil gives us error*/

    two.goodMorning();

    two.hello();

    return 0;
}
```

## Question Six

**Create a class with a data member to hold a "serial number" for each object created from the class.
That is, the first object created will be numbered 1, the second 2, and
so on by using the basic concept of static data members.
Use static member function if it is useful in the program.
Otherwise, make a separate program that demonstrates the use of static member function.**

```C++
#include <iostream>

class Demo
{
private:
    static int serial_number;

public:
    Demo()
    {
        serial_number = serial_number + 1;
    }

    static int getSerialNumber()
    {
        return serial_number;
    }
};

int Demo::serial_number = 0;

int main()
{
    Demo d1, d2, d3, d4;

    std::cout << "The current value of serial number is " << Demo::getSerialNumber() << "\n";

    return 0;
}
```

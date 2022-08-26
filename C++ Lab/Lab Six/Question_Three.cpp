/*

Question_Three.cpp

Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

-  veena, guitar, sitar, sarod and mandolin under string()

-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()

-  tabla, mridangam, bangos, drums and tambour under perc()

It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

Type of instruments to be displayed

a.  String instruments

b.  Wind instruments

c.  Percussion instruments

The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.
*/

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

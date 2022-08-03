# Lab Eight

## Question One

**Write a program to demonstrate the use of different ios flags and functions to
format the outprintf.Create a program to generate the bill invoice of a department
store by using different formatting.**

```c++
#include <iostream>
#include <iomanip>

int main()
{

    std::cout << std::setw(50) << "NIROULA STORE" << std::endl;

    printf("\n");

    for (int i = 0; i < 80; i++)
    {
        std::cout << "-";
    }
    printf("\n");
    std::cout << std::left << std::setw(30) << "Product Description"
              << std::left << std::setw(20) << "QTY"
              << std::left << std::setw(20) << "Price"
              << std::left << std::setw(20) << "Total" << std::endl;
    for (int i = 0; i < 80; i++)
    {
        std::cout << "-";
    }
    printf("\n");
    std::cout << std::left << std::setw(30) << "Chocolate Chip"
              << std::left << std::setw(20) << 12
              << std::left << std::setw(20) << 5
              << std::left << std::setw(20) << 60 << std::endl;
    std::cout << std::left << std::setw(30) << "Peanut Buffer Combo"
              << std::left << std::setw(20) << 6
              << std::left << std::setw(20) << 3
              << std::left << std::setw(20) << 30 << std::endl;
    std::cout << std::left << std::setw(30) << "Cinnamon Buffer"
              << std::left << std::setw(20) << 6
              << std::left << std::setw(20) << 3
              << std::left << std::setw(20) << 15 << std::endl;

    for (int i = 0; i < 80; i++)
    {
        std::cout << "-";
    }
    printf("\n");
    std::cout << std::left << std::setw(70) << "Grand Total: "
              << 165 << std::endl;
    for (int i = 0; i < 80; i++)
    {
        std::cout << "-";
    }
    return 0;
}
```

## Question Two

**Write a program to create a user-defined manipulator that will format the output
by setting the width, precision, and fill character at the same time by passing arguments.**

```c++

#include <iostream>

class Manipulatar
{
    int width;
    int precision;
    char character_to_fill;

public:
    Manipulatar(int w, int p, char c) : width(w), precision(p), character_to_fill(c) {}
    friend std::ostream &operator<<(std::ostream &out, Manipulatar m);
};

std::ostream &operator<<(std::ostream &out, Manipulatar m)
{

    out.width(m.width);
    out.precision(m.precision);
    out.fill(m.character_to_fill);
    out << std::flush;
    return out;
}

int main(int argc, char const *argv[])
{
    std::cout << Manipulatar(10, 5, '#') << 10.34583942 << std::endl;
    return 0;
}

```

## Question Three

**Write a program to overload stream operators to read a complex
number and display the complex number in a+ib format.**

```c++

#include <iostream>

class Complex
{
    float real, imaginary;

public:
    Complex(){};
    Complex(float r, float i) : real(r), imaginary(i){};

    friend std::istream &operator>>(std::istream &in, Complex &c);
    friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};

std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.real << "+" << c.imaginary << "i\n"
        << std::flush;
    return out;
}
std::istream &operator>>(std::istream &in, Complex &c)
{
    std::cout << "Real part: ";
    std::cin >> c.real;
    std::cout << "Imaginary part:";
    std::cin >> c.imaginary;
    return in;
}

int main(int argc, char const *argv[])
{
    Complex c;

    std::cin >> c;
    std::cout << "Complex Number: " << c;
    return 0;
}

```

## Question Four

**Write a program that stores the information about students (name, student id, department, and address)
in a structure and then transfers the information to a file in your directory.
Finally, retrieve the information from your file and print it in the proper format on your output screen.**

```c++

#include <iostream>
#include <fstream>
#include <string>

class Student
{
    std::string name;
    int student_id;
    std::string department;
    std::string address;

public:
    Student(){};
    Student(std::string name, int student_id, std::string department, std::string address)
    {
        this->name = name;
        this->student_id = student_id;
        this->department = department;
        this->address = address;
    }
    void display()
    {
        std::cout << "Name :" << name
                  << "\nStudent Id: " << student_id
                  << "\nDepartment: " << department
                  << "\nAddress: " << address;
    }
};

int main(int argc, char const *argv[])
{
    Student a = Student("Someona", 4, "BCT", "Nepal");
    Student b;

    std::fstream file;
    file.open("File.txt", std::ios::in | std::ios::out);

    file.write(reinterpret_cast<char *>(&a), sizeof(a));

    file.seekg(0);

    file.read(reinterpret_cast<char *>(&a), sizeof(a));

    file.close();

    a.display();

    return 0;
}
```

## Question Five

**Write a program for transaction processing that write and read object randomly to
and from a random access file so that user can add, update, delete and display
the account information (account-number, last-name, first-name, total-balance).**

_This program works only in Linux because i have used some of the terminal command of linux. If you want to run it in window then you must replace those linux command with equivalent command in window._

```c++

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#define STUDENT_RECORD_FILE "student_record.bin"

class Student
{

public:
    std::string name;
    std::string department;
    std::string roll_number;

    Student(){};

    void readStudentData()
    {
        std::cout << "Student Name : ";
        std::cin >> this->name;
        std::cout << "Department : ";
        std::cin >> this->department;
        std::cout << "Roll number: ";
        std::cin >> this->roll_number;
    }
};

class StudentRecord
{
    Student student;
    int total_students;
    std::fstream student_record_file;

private:
    bool openFile(std::string mode)
    {
        if (mode == "append")
        {
            student_record_file.open(STUDENT_RECORD_FILE, std::ios::app | std::ios::binary);
        }
        else if (mode == "read")
        {
            student_record_file.open(STUDENT_RECORD_FILE, std::ios::in | std::ios::binary);
        }
        else if (mode == "read+append")
        {
            student_record_file.open(STUDENT_RECORD_FILE, std::ios::in | std::ios::app | std::ios::binary);
        }
        return student_record_file.is_open();
    }

    void closeFile()
    {
        student_record_file.close();
    }

public:
    StudentRecord()
    {
        total_students = 0;
    }

    void addStudent()
    {
        student.readStudentData();

        if (this->openFile("append"))
        {
            student_record_file.write(reinterpret_cast<char *>(&student), sizeof(student));
        }
        else
        {
            std::cout << "Unable to open the student record file";
        }
        this->closeFile();

        this->total_students += 1;
    }

    void updateStudent()
    {

        std::string roll_number_to_update;

        std::cout << "Enter the Roll number of the Record you want to update?\n";
        std::cout << "-->";
        std::cin >> roll_number_to_update;

        if (this->openFile("read+append"))
        {
            int i = 0;

            std::fstream temp_student_record;

            temp_student_record.open("student_record_temp.bin", std::ios::out | std::ios::binary);

            while ((i++) < this->total_students)
            {
                student_record_file.read(reinterpret_cast<char *>(&student), sizeof(student));

                if (student.roll_number == roll_number_to_update)
                {
                    std::cout << "Student Name: " << student.name << std::endl;
                    std::cout << "Department Name: " << student.department << std::endl;
                    std::cout << "Roll number: " << student.roll_number << std::endl;

                    student.readStudentData();

                    temp_student_record.write(reinterpret_cast<char *>(&student), sizeof(student));
                }
                else
                {
                    temp_student_record.write(reinterpret_cast<char *>(&student), sizeof(student));
                }
            }

            temp_student_record.close();
        }
        else
        {
            std::cout << "Cannot open file updateStudent Function\n";
        }

        this->closeFile();

        system("rm student_record.bin");
        system("mv student_record_temp.bin student_record.bin");
    }

    void deleteStudent()
    {

        std::string roll_number_to_update;

        std::cout << "Enter the Roll number of the Record you want to delete?\n";
        std::cout << "-->";
        std::cin >> roll_number_to_update;

        if (this->openFile("read+append"))
        {
            int i = 0;

            std::fstream temp_student_record;

            temp_student_record.open("student_record_temp.bin", std::ios::out | std::ios::binary);

            while ((i++) < this->total_students)
            {
                student_record_file.read(reinterpret_cast<char *>(&student), sizeof(student));

                if (!(student.roll_number == roll_number_to_update))
                {
                    temp_student_record.write(reinterpret_cast<char *>(&student), sizeof(student));
                }
            }

            temp_student_record.close();

            this->total_students -= 1;
        }
        else
        {
            std::cout << "Cannot open file updateStudent Function\n";
        }

        this->closeFile();

        system("rm student_record.bin");
        system("mv student_record_temp.bin student_record.bin");
    }

    void displayStudent()
    {
        if (this->openFile("read"))
        {
            std::cout << std::left << std::setw(20) << "Student Name"
                      << std::left << std::setw(10) << "Department"
                      << std::left << std::setw(10) << "Roll Number\n";

            int i = 0;
            while ((i++) < this->total_students)
            {
                student_record_file.read(reinterpret_cast<char *>(&student), sizeof(student));
                std::cout << std::left << std::setw(20) << student.name
                          << std::left << std::setw(10) << student.department
                          << std::left << std::setw(10) << student.roll_number
                          << std::endl;
            }
            std::cout << std::endl;

            this->closeFile();
        }
    }
};
int main()
{
    StudentRecord BCT;
    char choice;

    while (true)
    {
        system("clear");
        std::cout << "STUDENT RECORD MANAGEMENT\n\n";

        std::cout << "1. Add Student\n";
        std::cout << "2. Update Student\n";
        std::cout << "3. Delete Student\n";
        std::cout << "4. Display Student\n";

        std::cout << "-->";
        std::cin >> choice;

        switch (choice)
        {
        case '1':
            system("clear");

            BCT.addStudent();

            std::cout << "Student has been added successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '2':
            system("clear");

            BCT.updateStudent();

            std::cout << "Student has been update successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '3':
            system("clear");
            BCT.deleteStudent();

            std::cout << "Student has been delete successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '4':
            system("clear");

            BCT.displayStudent();

            std::cout << "\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case 'q':
            system("rm student_record.bin");
            exit(EXIT_SUCCESS);
            break;

        default:
            std::cout << "Invalid Option";
            std::cout << "Press any key to continue\n";
            getchar();
            getchar();
            break;
        }
    }

    return 0;
}
```

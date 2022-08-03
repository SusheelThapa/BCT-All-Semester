/*
Question_Five.cpp

Write a program for transaction processing that write and read object randomly to
and from a random access file so that user can add, update, delete and display
the account information (account-number, last-name, first-name, total-balance).
*/

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

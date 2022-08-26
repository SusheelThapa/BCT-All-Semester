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

```C++
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#define TRANSACTION_RECORD_FILE "transaction_record.bin"

class Transaction
{

public:
    std::string first_name;
    std::string last_name;
    std::string account_number;
    std::string total_balance;

    Transaction(){};

    void readTransactionData()
    {
        std::cout << "First Name : ";
        std::cin >> this->first_name;
        std::cout << "Last Name : ";
        std::cin >> this->last_name;
        std::cout << "Account Number : ";
        std::cin >> this->account_number;
        std::cout << "Total Balance: ";
        std::cin >> this->total_balance;
    }
};

class TransactionRecord
{
    Transaction transaction;
    int total_transactions;
    std::fstream transaction_record_file;

private:
    bool openFile(std::string mode)
    {
        if (mode == "append")
        {
            transaction_record_file.open(TRANSACTION_RECORD_FILE, std::ios::app | std::ios::binary);
        }
        else if (mode == "read")
        {
            transaction_record_file.open(TRANSACTION_RECORD_FILE, std::ios::in | std::ios::binary);
        }
        else if (mode == "read+append")
        {
            transaction_record_file.open(TRANSACTION_RECORD_FILE, std::ios::in | std::ios::app | std::ios::binary);
        }
        return transaction_record_file.is_open();
    }

    void closeFile()
    {
        transaction_record_file.close();
    }

public:
    TransactionRecord()
    {
        total_transactions = 0;
    }

    void addTransaction()
    {
        transaction.readTransactionData();

        if (this->openFile("append"))
        {
            transaction_record_file.write(reinterpret_cast<char *>(&transaction), sizeof(transaction));
        }
        else
        {
            std::cout << "Unable to open the student record file";
        }
        this->closeFile();

        this->total_transactions += 1;
    }

    void updateTransaction()
    {

        std::string account_number_to_update;

        std::cout << "Enter the account of the Record you want to update?\n";
        std::cout << "-->";
        std::cin >> account_number_to_update;

        if (this->openFile("read+append"))
        {
            int i = 0;

            std::fstream temp_transaction_record;

            temp_transaction_record.open("transaction_record_temp.bin", std::ios::out | std::ios::binary);

            while ((i++) < this->total_transactions)
            {
                transaction_record_file.read(reinterpret_cast<char *>(&transaction), sizeof(transaction));

                if (transaction.account_number == account_number_to_update)
                {
                    std::cout << "First Name: " << transaction.first_name << std::endl;
                    std::cout << "Last Name: " << transaction.last_name << std::endl;
                    std::cout << "Account Number: " << transaction.account_number << std::endl;
                    std::cout << "Total Balance: " << transaction.total_balance << std::endl;

                    transaction.readTransactionData();

                    temp_transaction_record.write(reinterpret_cast<char *>(&transaction), sizeof(transaction));
                }
                else
                {
                    temp_transaction_record.write(reinterpret_cast<char *>(&transaction), sizeof(transaction));
                }
            }

            temp_transaction_record.close();
        }
        else
        {
            std::cout << "Cannot open file update Transaction Function\n";
        }

        this->closeFile();

        system("rm student_record.bin");
        system("mv transaction_record_temp.bin transaction_record.bin");
    }

    void deleteTransaction()
    {

        std::string account_number_to_update;

        std::cout << "Enter the Account Number of the Record you want to delete?\n";
        std::cout << "-->";
        std::cin >> account_number_to_update;

        if (this->openFile("read+append"))
        {
            int i = 0;

            std::fstream temp_transaction_record;

            temp_transaction_record.open("transaction_record_temp.bin", std::ios::out | std::ios::binary);

            while ((i++) < this->total_transactions)
            {
                transaction_record_file.read(reinterpret_cast<char *>(&transaction), sizeof(transaction));

                if (!(transaction.account_number == account_number_to_update))
                {
                    temp_transaction_record.write(reinterpret_cast<char *>(&transaction), sizeof(transaction));
                }
            }

            temp_transaction_record.close();

            this->total_transactions -= 1;
        }
        else
        {
            std::cout << "Cannot open file updateTransaction Function\n";
        }

        this->closeFile();

        system("rm transaction_record.bin");
        system("mv transaction_record_temp.bin transaction_record.bin");
    }

    void displayTransaction()
    {
        if (this->openFile("read"))
        {
            std::cout << std::setw(30) << "First Name"
                      << std::setw(30) << "Last Name"
                      << std::setw(30) << "Account Number"
                      << std::setw(30) << "Total Balance\n";

            int i = 0;
            while ((i++) < this->total_transactions)
            {
                transaction_record_file.read(reinterpret_cast<char *>(&transaction), sizeof(transaction));
                std::cout << std::setw(30) << transaction.first_name
                          << std::setw(30) << transaction.last_name
                          << std::setw(30) << transaction.account_number
                          << std::setw(30) << transaction.total_balance
                          << std::endl;
            }
            std::cout << std::endl;

            this->closeFile();
        }
    }
};
int main()
{
    TransactionRecord BCT;
    char choice;

    while (true)
    {
        system("clear");
        std::cout << "Transaction RECORD MANAGEMENT\n\n";

        std::cout << "1. Add Transaction\n";
        std::cout << "2. Update Transaction\n";
        std::cout << "3. Delete Transaction\n";
        std::cout << "4. Display Transaction\n";

        std::cout << "-->";
        std::cin >> choice;

        switch (choice)
        {
        case '1':
            system("clear");

            BCT.addTransaction();

            std::cout << "Transaction has been added successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '2':
            system("clear");

            BCT.updateTransaction();

            std::cout << "Transaction has been update successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '3':
            system("clear");
            BCT.deleteTransaction();

            std::cout << "Transaction has been delete successfully\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case '4':
            system("clear");

            BCT.displayTransaction();

            std::cout << "\nPress any key to continue\n";
            getchar();
            getchar();

            break;
        case 'q':
            system("rm transaction_record.bin");
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
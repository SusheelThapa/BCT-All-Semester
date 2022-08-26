/*
Question_One.cpp

Write a program to demonstrate the use of different ios flags and functions to
format the outprintf.Create a program to generate the bill invoice of a department
store by using different formatting.
*/

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
#include <iostream>
#include <vector>

class Page
{
public:
    int baseAddress;

    Page(int baseAddress) : baseAddress(baseAddress) {}

    int getPhysicalAddress()
    {
        return baseAddress + displacement;
    }

    void setDisplacement(int displacement) { this->displacement = displacement; }

private:
    int displacement = 0;
};

class PagingSystem
{
public:
    void initializePages()
    {
        int numPages;
        std::cout << "Enter the number of pages: ";
        std::cin >> numPages;

        for (int i = 0; i < numPages; ++i)
        {
            int baseAddress;
            std::cout << "Enter the base address for page " << i << ": ";
            std::cin >> baseAddress;
            pages.push_back(Page(baseAddress));
        }
    }

    void processLogicalAddress(int pageNumber, int logicalAddress)
    {
        if (pageNumber >= 0 && pageNumber < pages.size())
        {
            Page &currentPage = pages[pageNumber];
            currentPage.setDisplacement(logicalAddress);

            std::cout
                << "\n\tPageNo.\t BaseAdd. PhysicalAdd. \n\t " << pageNumber
                << "\t " << currentPage.baseAddress << "\t " << currentPage.getPhysicalAddress() << "\n";
        }
        else
        {
            std::cout << "\nInvalid page\n";
        }
    }

private:
    std::vector<Page> pages;
};

int main()
{
    PagingSystem pagingSystem;
    std::cout << "\nProgram for paging\n";

    pagingSystem.initializePages();

    std::cout << "\n\nGetting the physical address......\n";

    int pageNumber, logicalAddress;
    std::cout << "Enter the page number: ";
    std::cin >> pageNumber;

    std::cout << "Enter the Logical Address: ";
    std::cin >> logicalAddress;

    pagingSystem.processLogicalAddress(pageNumber, logicalAddress);

    return 0;
}

#include <iostream>
using namespace std;

class Shop
{
private:
    int items_id[4];
    int items_price[4];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setData(void);
    void displayData(void);
};

void Shop::setData(void)
{
    cout << "Id : ";
    cin >> items_id[counter];
    cout << "Price : ";
    cin >> items_price[counter];
    counter = counter + 1;
}

void Shop::displayData(void)
{
    cout << "Id  "
         << " Price" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << items_id[i] << "   " << items_price[i] << endl;
    }
}
int main()
{
    Shop Pasal;

    Pasal.initCounter();
    Pasal.setData();
    Pasal.setData();
    Pasal.displayData();

    return 0;
}
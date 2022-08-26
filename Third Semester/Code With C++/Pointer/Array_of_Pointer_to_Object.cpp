#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int i, float p)
    {
        id = i;
        price = p;
    }

    void getData(void)
    {
        cout << "Item Id : " << id << endl;
        cout << "Item Price : " << price << endl
             << endl;
    }
};

int main()
{
    int items = 4;

    //Creating Array of Pointer of Object
    Shop *ptr_array = new Shop[items];

    //Taking Input
    for (int i = 0; i < items; i++)
    {
        (ptr_array + i)->setData(i + 1, i * 8 + 7);
    }

    //Displaying Items
    for (int i = 0; i < items; i++)
    {
        (ptr_array + i)->getData();
    }

    return 0;
}
/*
Question_Four.cpp

Assume that one constructor initializes data member say num_vehicle, hour, and rate.
There should be a 10% discount if num_vehicle exceeds 10.
Display the total charge.
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
*/

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
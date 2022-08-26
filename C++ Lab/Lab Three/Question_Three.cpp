/*

Author : Susheel Thapa

Question_Three.cpp

Create a class called car park that has int data member for car id, int data member for charge/hour,
and float data member for the parked time.
Make functions to set data members and show the charges and parked hours of the corresponding car id.
Make functions for setting and showing the data members.
Member function should be called from other functions.
*/

#include <iostream>
#include <iomanip>

class CarPark
{
private:
    int car_id;
    const int charge_per_hour = 100;
    float parked_time; // Time is taken in terms of hours

public:
    void setId(int);
    void setParkedTime(float);

    int getChargeperHour();
    int getId();
    float getParkedTime();
    void detail();
};

int main(int argc, char const *argv[])
{
    CarPark car_one;

    car_one.setId(12);
    car_one.setParkedTime(1);

    car_one.detail();

    return 0;
}

// CarPark Class
void CarPark::setId(int car_id) { this->car_id = car_id; }
void CarPark::setParkedTime(float parked_time_in_hour) { this->parked_time = parked_time_in_hour; }

int CarPark::getChargeperHour() { return this->charge_per_hour; }
int CarPark::getId() { return this->car_id; }
float CarPark::getParkedTime() { return this->parked_time; }

void CarPark::detail()
{
    std::cout << std::left << std::setw(10) << "Car ID"
              << std::left << std::setw(25) << "Charge per Hour(Rs)"
              << std::left << std::setw(15) << "Time(hrs)"
              << std::left << std::setw(10) << "Total charge(Rs)\n";

    std::cout << std::left << std::setw(10) << this->car_id
              << std::left << std::setw(25) << this->charge_per_hour
              << std::left << std::setw(15) << this->parked_time
              << std::left << std::setw(10) << this->charge_per_hour * this->parked_time << "\n";
}
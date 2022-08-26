#include <iostream>
#include <string>
#include <cstring>
class TwentyFourHrsFormat;
class TwelveFourHrsFormat;

class TwentyFourHrsFormat
{
    int hour;
    int minutes;
    int second;

public:
    TwentyFourHrsFormat(int h, int m, int s) : hour(h), minutes(m), second(s){};

    operator TwelveFourHrsFormat();

    void display()
    {
        std::cout << this->hour << ":" << this->minutes << ":" << this->second << "\n";
    }
};

class TwelveFourHrsFormat
{
    int hour;
    int minutes;
    int second;
    std::string am_pm;

public:
    TwelveFourHrsFormat(int h, int m, int s, std::string am_pm)
        : hour(h), minutes(m), second(s)
    {
        this->am_pm = am_pm;
    }

    operator TwentyFourHrsFormat();

    void display()
    {
        std::cout << this->hour << ":" << this->minutes << ":" << this->second << (this->am_pm == "am" ? (" AM") : (" PM")) << "\n";
    }
};

int main(int argc, char const *argv[])
{
    TwelveFourHrsFormat t12(1, 20, 10, "pm");

    t12.display();

    TwentyFourHrsFormat(t12).display();

    TwentyFourHrsFormat t24(16, 24, 54);

    t24.display();

    TwelveFourHrsFormat(t24).display();

    return 0;
}

TwentyFourHrsFormat::operator TwelveFourHrsFormat()
{
    if (this->hour > 12)
    {
        return TwelveFourHrsFormat(this->hour - 12, this->minutes, this->second, "pm");
    }
    else
    {
        return TwelveFourHrsFormat(this->hour, this->minutes, this->second, "am");
    }
}

TwelveFourHrsFormat::operator TwentyFourHrsFormat()
{
    if (this->am_pm == "pm")
    {
        return TwentyFourHrsFormat(this->hour + 12, this->minutes, this->second);
    }

    return TwentyFourHrsFormat(this->hour, this->minutes, this->second);
}
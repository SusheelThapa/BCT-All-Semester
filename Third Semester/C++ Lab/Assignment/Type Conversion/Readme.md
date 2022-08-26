# Type Conversion

## 24 hrs format to 12 hrs format

```c++
#include <iostream>
#include <string>
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
```

## Cartesian to Polar coordinate

```c++
#include <iostream>
#include <cmath>
class Cartesian;
class Polar;

class Cartesian
{
    float x;
    float y;

public:
    Cartesian(float x, float y) : x(x), y(y){};

    operator Polar();

    void display()
    {
        std::cout << "X: " << this->x
                  << "\nY: " << this->y << "\n";
    }
};

class Polar
{
    float r;
    float thita;

public:
    Polar(float r, float thita) : r(r), thita(thita){};

    operator Cartesian();

    void display()
    {
        std::cout << "R: " << this->r
                  << "\nThita: " << this->thita << "\n";
    }
};

int main()
{
    Cartesian c(1, 1);

    Polar(c).display();

    Polar p(std::sqrt(2), M_PI / 4);

    Cartesian(p).display();

    return 0;
}

Cartesian::operator Polar()
{

    return Polar(std ::sqrt(this->x * this->x + this->y * this->y), std::atan(this->y / this->x));
}

Polar::operator Cartesian()
{
    return Cartesian(this->r * std::cos(this->thita), this->r * std::sin(this->thita));
}
```

## Feet to Meter

```c++
#include <iostream>

/*
1 meter = 3.2808399 feet
*/

class Feet;
class Meter;

class Feet
{
    float value;

public:
    Feet(float value) : value(value) {}

    operator Meter();

    void display()
    {
        std::cout << "Feet: " << this->value << "\n";
    }
};

class Meter
{
    float value;

public:
    Meter(float value) : value(value) {}

    operator Feet();

    void display()
    {
        std::cout << "Meter: " << this->value << "\n";
    }
};

int main()
{
    Meter m(10);

    Feet(m).display();

    Feet f(9);

    Meter(f).display();

    return 0;
}

Meter::operator Feet()
{

    return Feet(this->value * 3.2808399);
}

Feet::operator Meter()
{
    return Meter(this->value / 3.2808399);
}
```

## Kg to Pound

```c++
#include <iostream>

/*
1 pound = 0.45359237 kilogram
*/

class Kilogram;
class Pound;

class Kilogram
{
    float value;

public:
    Kilogram(float value) : value(value){};

    operator Pound();

    float getValue()
    {
        return value;
    }
};

class Pound
{
    float value;

public:
    Pound(float value) : value(value){};

    operator Kilogram();

    float getValue()
    {
        return value;
    }
};

int main()
{
    Kilogram k(100);

    std::cout << "100 Kg = " << Pound(k).getValue() << " Pound\n";

    Pound p(100);
    std::cout << "100 Pound = " << Kilogram(p).getValue() << " Kilogram\n";
    return 0;
}

Kilogram::operator Pound()
{
    return Pound(this->value / 0.45359237);
}

Pound::operator Kilogram()
{
    return Kilogram(this->value * 0.45359237);
}
```

## Liter to Gallon

```c++
#include <iostream>

/*
1 Liter = 0.21996915 Imperial gallon
*/

class Liter;
class Gallon;

class Liter
{
    float value;

public:
    Liter(float value) : value(value){};

    operator Gallon();

    void display()
    {
        std::cout << "Liter : " << this->value << "\n";
    }
};

class Gallon
{
    float value;

public:
    Gallon(float value) : value(value){};

    operator Liter();

    void display()
    {
        std::cout << "Gallon : " << this->value << "\n";
    }
};

int main()
{
    Liter l(1);

    Gallon g(1);

    Liter(g).display();

    Gallon(l).display();

    return 0;
}

Gallon::operator Liter()
{
    return Liter(this->value / 0.21996915);
}

Liter::operator Gallon()
{
    return Gallon(this->value * 0.21996915);
}
```

## Meter Centimeter to Feet Inches

```c++
#include <iostream>

/*
1 meter = 3.2808399 feet
*/

class Feet;
class Meter;

class Feet
{
    float feet;
    float inches;

public:
    Feet(float feet, float inches) : feet(feet), inches(inches) {}

    operator Meter();

    void display()
    {
        std::cout << "Feet: " << this->feet << "\n";
        std::cout << "Inches: " << this->inches << "\n";
    }
};

class Meter
{
    float meter;
    float centimeter;

public:
    Meter(float meter, float centimeter) : meter(meter), centimeter(centimeter) {}

    operator Feet();

    void display()
    {
        std::cout << "Meter: " << this->meter << "\n";
        std::cout << "Centimeter: " << this->centimeter << "\n";
    }
};

int main()
{
    Meter m(1, 80);

    Feet(m).display();

    Feet f(5, 11);

    Meter(f).display();

    return 0;
}

Meter::operator Feet()
{
    float total_meter = this->meter + this->centimeter / 100;

    float feet = int(total_meter * 3.2808399);

    float inches = (total_meter * 3.2808399 - feet) * 12;
    return Feet(feet, inches);
}

Feet::operator Meter()
{
    float total_feet = this->feet + this->inches / 12;

    float meter = int(total_feet / 3.2808399);

    float centimeter = (total_feet /3.2808399 - meter) * 100;

    return Meter(meter, centimeter);
}
```

## Pound Ounce to Kilogram Gram

```c++
#include <iostream>

/*
1 pound = 0.45359237 kilogram
1 Pound = 16 ounch
*/

class Kilogram;
class Pound;

class Kilogram
{
    float kg;
    float gram;

public:
    Kilogram(float kg, float gram) : kg(kg), gram(gram){};

    operator Pound();

    void display()
    {
        std::cout << "Kilogram : " << this->kg << "\n"
                  << "Gram : " << this->gram << "\n";
    }
};

class Pound
{
    float pound;
    float ounch;

public:
    Pound(float pound, float ounch) : pound(pound), ounch(ounch){};

    operator Kilogram();

    void display()
    {
        std::cout << "Pound : " << this->pound << "\n"
                  << "Ounch : " << this->ounch << "\n";
    }
};

int main()
{

    Kilogram k(1, 0);

    Pound p(1, 0);

    Pound(k).display();

    Kilogram(p).display();

    return 0;
}

Kilogram::operator Pound()
{

    float total_kilogram = this->kg + this->gram / 1000;

    float pound = int(total_kilogram / 0.45359237);
    float ounch = (total_kilogram / 0.45359237 - pound) * 16;
    return Pound(pound, ounch);
}

Pound::operator Kilogram()
{
    float total_pound = this->pound + this->ounch / 16;

    float kilogram = int(total_pound * 0.45359237);
    float gram = (total_pound * 0.45359237 - kilogram) * 1000;
    return Kilogram(kilogram, gram);
}
```

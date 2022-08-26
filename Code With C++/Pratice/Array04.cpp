#include <iostream>
using namespace std;

bool checkRecordBreak(int max_visior, int current_day_visitor, int following_day_visitor)
{
    if (max_visior < current_day_visitor)
    {
        if (current_day_visitor > following_day_visitor)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int number_of_days;

    cout << "Number of consecutive days: ";
    cin >> number_of_days;

    int *number_of_visitor = (int *)malloc(sizeof(int) * number_of_days);

    for (int i = 0; i < number_of_days; i++)
    {
        cin >> number_of_visitor[i];
    }

    int record_breaking_days = 0;
    int max_visitor = INT_MIN;

    if (number_of_days == 1)
    {
        record_breaking_days = 1;
    }
    else
    {

        for (int i = 0; i < number_of_days - 1; i++)
        {

            (checkRecordBreak(max_visitor, number_of_visitor[i], number_of_visitor[i + 1])) ? (record_breaking_days++) : (record_breaking_days);

            max_visitor = max(max_visitor, number_of_visitor[i]);
        }

        if (max_visitor < number_of_visitor[number_of_days - 1])
        {
            record_breaking_days++;
        }
    }

    cout << "Record Breaking Day: " << record_breaking_days << endl;

    return 0;
}
#include <iostream>

using namespace std;

bool is_leap_year(int year);

int main()
{
    int year;
    cout << "Enter year as integer: ";
    cin >> year;

    cout << year << " is";

    if (!is_leap_year(year))
    {
        cout << " not";
    }

    cout << " leap year" << endl;

    return 0;
}

bool is_leap_year(int year)
{
    bool is_leap = false;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                is_leap = true;
            }
        }

        is_leap = true;
    }

    return is_leap;
}
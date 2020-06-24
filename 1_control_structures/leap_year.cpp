/* Write a program called LeapYearCalculator.cpp that requests a user to input
any year as an integer. Determine if the year entered is a leap year or not based
on the following criteria: A year is a leap year if it is divisible by four, unless it is
divisible by 100. Years divisible by 100 are leap years only if they are divisible by
400.
Print the appropriate output to the console. For example, if a user enters 1920 or
1921, print out "1920 is a leap year" or "1921 is not a leap year" */

#include <iostream>

using namespace std;

int main()
{
    int year;
    bool is_leap_year = false;

    cout << "Enter year as integer: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                is_leap_year = true;
            }
        }
        else
        {
            is_leap_year = true;
        }
    }

    cout << year << " is";

    if (!is_leap_year)
    {
        cout << " not";
    }

    cout << " leap year" << endl;

    return 0;
}

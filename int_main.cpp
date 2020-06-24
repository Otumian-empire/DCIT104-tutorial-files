#include <iostream>

using namespace std;

int main()
{
    // variable declaration and initialization
    // type var_name;
    // type var_name = value;

    int year;
    int month = 6;

    // cout and cin

    // Hello world in c++
    cout << "Hello there, DCIT 104" << endl;

    cout << "Enter year as integer: ";
    cin >> year;

    // operators
    // assignment: =
    // arithmatic: +, -, /, *, %
    // relational: <, >, ==, <=, >=, !=
    // logical: &&, ||, !

    int day = 24;
    int total = (year * month) - day;
    double remainder = year % (day * month);

    cout << "day: " << day << endl
         << "month: " << month << endl
         << "year: " << year << endl;

    // truth table

    cout << "  AND table  " << endl;
    cout << "-------------" << endl;
    cout << "| x | y | R |" << endl;
    cout << "| 0 | 0 | " << (0 && 0) << " |" << endl;
    cout << "| 0 | 1 | " << (0 && 1) << " |" << endl;
    cout << "| 1 | 0 | " << (1 && 0) << " |" << endl;
    cout << "| 1 | 1 | " << (1 && 1) << " |" << endl;
    cout << "-------------" << endl
         << endl;

    return 0;
}

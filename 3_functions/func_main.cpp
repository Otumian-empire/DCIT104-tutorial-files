#include <iostream>
#include "func_module.hpp"

// include the header file we just created

using namespace std;

int main()
{
    // find the sum of 34 and 56
    int a = 34, b = 56;
    cout << "The sum of " << a << " and " << b << " is: " << sum(a, b) << endl
         << endl;

    // find the sum of the elements in the array {3,4,5,6,7}
    int arr[] = {3, 4, 5, 6, 7};
    cout << "The sum of the elements in the array is: " << sum_arr(arr, 5) << endl
         << endl;

    // find the factorial 5
    int n = 5;
    cout << "The factorial of " << n << " is: " << factorial(n) << endl
         << endl;

    // check if 2014 is a leap year
    int year = 2014;

    cout << year << " is ";

    if (!is_leap_year(year))
    {
        cout << "not";
    }

    cout << " a leap year" << endl;

    return 0;
}

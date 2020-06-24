#include "func_module.hpp"

// this is the source file
// notice how the header file is included

int sum(int a, int b)
{
    return a + b;
}

int sum_arr(int arr[], int arr_size)
{
    int sum = 0;

    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int factorial(int n)
{

    int result = 1;

    while (n > 1)
    {
        result *= n;
        n--;
    }

    return result;
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
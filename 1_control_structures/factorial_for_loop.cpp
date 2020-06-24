/*
Factorial program
The factorial of a number n, n! = n * (n - 1) * (n - 2) * (n - 3) * ... * 3 * 2 * 1
So 5! = 5 * 4 * 3 * 2 * 1
 */

#include <iostream>

using namespace std;

int main()
{
    int n, temp, fact = 1;

    cout << "Enter n: ";
    cin >> n;

    temp = n;

    for (; n > 1; n--)
    {
        fact *= n;
    }

    cout << "The factorial of " << temp << ", " << temp << "! = " << fact << endl;

    return 0;
}

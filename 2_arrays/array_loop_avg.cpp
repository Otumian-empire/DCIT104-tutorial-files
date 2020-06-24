#include <iostream>

using namespace std;

int main()
{
    int ages[10] = {21, 42, 57, 49, 45, 36, 19, 23, 32, 31};

    int n = 10, sum = 0;
    double average = 0;

    cout << "sum before loop: " << sum << endl;

    for (int i = 0; i < n; i++)
    {
        sum = sum + ages[i];
    }

    average = (sum * 1.0) / n;

    cout << "sum after loop: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

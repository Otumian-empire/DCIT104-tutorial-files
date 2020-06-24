#include <iostream>

using namespace std;

int main()
{
    double sales[5] = {21.3, 42.5, 57.2, 57.9, 45.90};

    // index = position - 1
    // cout << sales[0] << endl;
    // cout << sales[4] << endl;

    for (int index = 0; index < 5; index++)
    {
        cout << sales[index] << endl;
    }

    return 0;
}

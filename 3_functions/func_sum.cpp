#include <iostream>

using namespace std;

// declaration
int sumArr(int arr[], int arr_size);

int main()
{
    int iarr[] = {1, 8, 2, 7, 5};
    int s = 5;

    cout << "iarr: " << sumArr(iarr, s) << endl;

    return 0;
}

// definition
int sumArr(int arr[], int arr_size)
{
    int sum = 0;

    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

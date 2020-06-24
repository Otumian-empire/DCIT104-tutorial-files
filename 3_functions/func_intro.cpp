#include <iostream>

using namespace std;

int sum_num(int a, int b);

void hello();

int main()
{
    // functions in c++
    // cout << sum_num(23, 56) << endl;

    hello();

    return 0;
}

int sum_num(int a, int b)
{
    return a + b;
}

void hello()
{
    cout << "Hello" << endl;
}
#include <iostream>

using namespace std;

int main()
{
    // convert a for loop to a while loop

    int start = 0;
    
    while (start < 10)
    {
        cout << start + 1 << ": hello world" << endl;
        start++;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    /* while loop

    while (condition)
    {
        do this as long as the loop holds
    } */

    int timer = 5;
    cout << "take off in " << endl;

    while (timer > -1)
    {
        cout << timer << endl;

        timer--;
    }

    cout << "Take off!!!!" << endl;

    return 0;
}

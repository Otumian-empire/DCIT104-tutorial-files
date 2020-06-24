#include <iostream>

using namespace std;

int main()
{
    // if (condition){
    //     // code
    // }
    // else
    // {
    //     // this
    // }

    int age;
    cout << "How old are you: ";
    cin >> age;

    if (age > 17)
    {
        cout << "matured" << endl;
    }
    else
    {
        cout << "immatured" << endl;
    }

    return 0;
}

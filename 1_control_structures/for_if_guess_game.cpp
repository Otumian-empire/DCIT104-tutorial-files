// guess game
// user has 10 changces to guess the secret number
// if the guess right , break out the loop and print great

#include <iostream>

using namespace std;

int main()
{
    int secretNumber = 20;
    int guess;

    for (int start = 0; start < 10; start++)
    {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess == secretNumber)
        {
            cout << "great" << endl;
            break;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }

    cout << "Program ended" << endl;
    
    return 0;
}

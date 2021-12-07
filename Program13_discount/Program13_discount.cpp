// Program13_discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char student = 's';
    char teacher = 't';
    char other = 'o';

    char status;
    cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << endl;
    cin >> status;

    int game;
    cout << "Now please tell me the game you would like, 1 or 2?" << endl;
    cin >> game;

    if (status == 's' || status == 't')
    {
        if (game == 1)
        {
            cout << "You can get a 20% discount on that." << endl;
        }

        if (game == 2)
        {
            cout << "You can get a 10% discount on that." << endl;
        }
    }
    else if (status == 'o')
    {
        cout << "Unfortuately you are not entitled to a discount." << endl;
    }
}

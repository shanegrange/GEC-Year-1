// Program11_Doom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int playerInput;

    cout << "Please choose your difficulty:" << endl;
    cout << "1. I'm too young to die!" << endl;
    cout << "2. Hey, not too rough!" << endl;
    cout << "3. Hurt me plenty." << endl;
    cout << "4. Ultra-Violence" << endl;
    cout << "5. Nightmare..." << endl;

    cin >> playerInput;

    switch (playerInput)
    {
        case 1:
        {
            cout << "You big baby!" << endl;
        }
        break;

        case 2:
        {
            cout << "Understandable, have a nice day." << endl;
        }
        break;

        case 3:
        {
            cout << "Someone's a masochist." << endl;
        }
        break;

        case 4:
        {
            cout << "Well, you asked for it!" << endl;
        }
        break;

        case 5:
        {
            cout << "You got a death wish or something?!" << endl;
        }
        break;

        default:
        {
            cout << "I said pick a difficulty." << endl;
        }
        break;
    }
}


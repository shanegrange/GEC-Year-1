// Program12_IfThisThenThat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;

    int weather;
    cout << "Please tell me if it's raining with '1' or snowing with '2'." << endl;
    cin >> weather;

    int temp;
    cout << "What is the current temperature in celsius?" << endl;
    cin >> temp;

    if (weather == 1 || weather == 2)
    {
        if (weather == 1)
        {
            if (temp > 15)
            {
                cout << "Wear a light raincoat." << endl;
            }
            else
            {
                cout << "Wear a thick raincoat." << endl;
            }

        }
        else if (weather == 2)
        {
            if (temp > 5)
            {
                cout << "Wear something warm." << endl;
            }

            else if (temp < 0)
            {
                cout << "Wrap up well or stay at home." << endl;
            }
        }

    }
    else
    {
        cout << "Have a nice day." << endl;
    }
}
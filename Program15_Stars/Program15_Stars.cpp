// Program15_Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    int n;
    char star = '*';
    cout << "Enter a number between 1 and 10." << endl;
    cin >> n;

    char choice;
    cout << "Would you like another go? [Y or N]" << endl;
    cin >> choice;

    do
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        char choice;
        cout << "Would you like another go? [Y or N]" << endl;
        cin >> choice;

        int n;
        char star = '*';
        cout << "Enter a number between 1 and 10." << endl;
        cin >> n;

    } while (choice == 'Y');
}
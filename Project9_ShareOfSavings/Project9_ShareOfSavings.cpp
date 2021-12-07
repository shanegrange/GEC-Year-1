// Project9_ShareOfSavings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int mySavings = 2000;
    int yourPercentage = 50;
    int yourShare = (mySavings * (yourPercentage) / 100);

    cout << "Your share: " << yourShare << endl;

    return 0;
}


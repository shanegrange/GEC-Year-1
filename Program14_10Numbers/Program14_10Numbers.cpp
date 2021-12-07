// Program14_10Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float number1;
    cout << "Please enter a number." << endl;
    cin >> number1;

    float number2;
    cout << "Please enter a second number." << endl;
    cin >> number2;

    float sum1 = (number1 + number2);
    float mean1 = (sum1 / 2);

    cout << "The sum of " << number1 << " and " << number2 << " is " << sum1 << endl;
    cout << "The mean of " << number1 << " and " << number2 << " is " << mean1 << endl;

    float number3;
    cout << "Please enter another number." << endl;
    cin >> number3;

    float sum2 = (sum1 + number3);
    float mean2 = (sum2 / 3);

    cout << "The sum of " << number1 << ", " << number2 << " and " << number3 << " is " << sum2 << endl;
    cout << "The mean of " << number1 << ", " << number2 << " and " << number3 << " is " << mean2 << endl;
}


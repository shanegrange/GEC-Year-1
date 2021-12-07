// Program6_area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    typedef int Width;
    Width width = 15;

    typedef int Height;
    Height height = 25;

    typedef int Area;
    Area area = (width * height);

    cout << "The area of a " << width << " by " << height << " rectangle is " << area << endl;
}


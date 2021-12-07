// Program10_haribo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int totalPackets = 40;
    int totalStudents = 14;
    
    int studentTotal = totalPackets / totalStudents;
    int tutorTotal = totalPackets % totalStudents;


    cout << "Each student gets " << studentTotal << " packets." << endl;
    cout << "Tutor gets the " << tutorTotal << " left over." << endl;
}


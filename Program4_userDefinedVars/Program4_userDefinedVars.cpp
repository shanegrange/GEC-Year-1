// Program4_userDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Program4_userDefinedVars.h"
using namespace std;

int main()
{
	typedef int Health;
	Health healthTotal = 13000;

	enum Weapons
	{
		SWORD = 1,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLADE,
		SMALL_KNIFE
	};

	Weapons currentWeapon = SAMURAI;

	cout << "My curreny health is: " << healthTotal << endl;
	cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;
}

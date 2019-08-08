#pragma once
#include "RoundSys.h"
#include "MagicSys.h"
#include "Weapons.h"
using std::cout;
//TODO have weapon options - sword, fists, bow and arrow
void physical_attack()
{
	cout << "CHOOSE YOUR WEAPON: \n";
	cout << "TYPE s for Sword\n";
	cout << "TYPE a for Axe\n";
	cout << "TYPE f for Fists\n";
	char m;
	cin >> m;
	switch (m)
	{
	case 's':
		break;
	}
}

void PhysAttack(MWeapon weapon)
{
	int damage=0;
	damage = weapon.damage;
	//TODO make the damage of the weapon correlate with the physical strength of the player as well as the defense of the enemy
}

void RangeAttack(RWeapon weapon)
	{

	}

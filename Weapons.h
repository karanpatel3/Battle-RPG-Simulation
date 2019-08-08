#pragma once
#include <vector>

 struct Weapon
{
	int damage;
	int weight;
};

struct MWeapon : Weapon
{

};

struct RWeapon : Weapon
{
	int range;
};

struct Sword : MWeapon
{

};

struct Bow : RWeapon
{
	int durability;
};

struct Arrows : RWeapon
{
	int weight = 0;
};

struct Axe : MWeapon
{

};

struct Knuckles : MWeapon
{

};

vector <vector<Weapon>> PlayerWeapons;
#pragma once
#include "Armor.h"

struct Player //TODO implement leveling system
{
	Armor armor;
	int health = 100;
	int accuracy = 10;
	int mana = 100;
	int manacap = 100;
	int magic_attack = 10 + armor.magiclevel;
	int magic_defense = 10 + armor.magiclevel;
	int strength = 10;
	int defense = 15 + armor.defense;
	int evasion = 10;
};


struct Enemy
{
	int health = 100;
	Armor armor;
	int strength = 20;
	int defense = 10 + armor.defense;
	int magic_attack = 10 + armor.magiclevel;
	int magic_defense = 10 + armor.magiclevel;
	int accuracy = 10;
	int evasion = 10;
};
Player player;
Enemy enemy;
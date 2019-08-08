#pragma once
struct Resistance
{
	int magic_resist;
	int poison_resist;
	int fire_resist;
	int freeze_resist;
	int shock_resist;
};

struct Armor : Resistance 
{
	int defense = 10;
	int magiclevel = 10;
};

Armor a;
//TODO try to get this to work: a.magic_resist = 10;



//TODO implement poison, magic, fire, freeze, shock resist system
//TODO implement array of armors based with resistances
//TODO implement evasion and accuracy


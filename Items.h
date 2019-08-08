#pragma once
#include "Weapons.h"

typedef struct Medicine
{

};
typedef struct DefItems
{

};

struct Items : Medicine, DefItems
{

};

struct Inventory
{
	Items info;
	Weapon info;

};